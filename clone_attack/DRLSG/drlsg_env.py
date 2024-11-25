import os
import gym
import tqdm
import time
import json
import torch 
import random
import logging
import warnings
import subprocess # 用于执行外部命令
import editdistance # 计算编辑距离
import numpy as np
import pandas as pd 


from gym import spaces,core # 定义强化学习环境的动作空间和观察空间
from stable_baselines3 import PPO
from importlib import import_module

from config import get_parameter
from utils import get_code_token,padding_code

os.environ["TF_CPP_MIN_LOG_LEVEL"] = "1"
warnings.filterwarnings('ignore')

# torch.cuda.set_device(3)

class ClonegenEnvTest(gym.Env):
    def __init__(self,args):
        self._action_set=np.arange(0,15)
        self.action_space = spaces.Discrete(len(self._action_set)) # 定义动作空间
        self.high=np.ones(256)
        self.observation_space = spaces.Box(low=-self.high, high=self.high) # 定义观察空间，大小为 256 的连续空间，取值范围为 [-1, 1]
        self.N_STATE=20
        self.args=args
        self.a=0.8
        self.original_code=self.args.code_path
        self.mutated_code=self.args.code_path
        self.final_code=None
        self.encodding_model=self._get_model()
        self.project_path=args.project_path
        self.count=0 
        self.count_obf=0
        self.count_constant=0
        self.count_rename=0
        self.vocab=json.load(open(args.vocab_path))
        self.model_name='TokenRNN'
        self.mutated_ast=None
        self.y=None
        self.state=self.reset()
        random.seed(time.time())
    
    def _get_clone_result(self): 
        """
        调用模型来判断变异代码与原始代码的相似度，返回 '0' 表示相似，返回 '1' 表示不相似
        """
        token2=get_code_token(self.final_code)
        self.mutated_ast=" ".join(token2) 
        token2=padding_code(token2,self.vocab,512)
        token2=torch.tensor(token2).unsqueeze(0)
        y=token2.cuda() 
        predict=self.model(self.x,y)
        predict=predict.squeeze().tolist()
        # 返回的 predict 是一个长度为 2 的列表，表示两段代码的相似度，predict[0] 表示相似度较高的概率，predict[1] 表示相似度较低的概率
        if(predict[0]>predict[1]):
            return '0'
        else:
            return '1' 
    
    def _get_edited_distance(self): 
        """
        计算原始代码和变异代码之间的编辑距离,编辑距离越小，相似度越高。
        返回的 num_sim 是代码相似度的一个衡量标准，值越接近 1 表示两段代码越相似
        """
        self.original_ast=self.original_ast.replace(' ','') 
        self.mutated_ast=self.mutated_ast.replace(' ','')
        num_dist = editdistance.eval(self.original_ast, self.mutated_ast)
        num_sim = 1 - num_dist / max(len(self.original_ast), len(self.mutated_ast))
        return num_sim

    def _get_mutated_code(self,action): 
        """
        根据 action 来确定需要应用的变异操作,然后调用 runner.sh 脚本来执行变异操作
        将最后的结果保存在 'CloneRM/Final.c' 中
        """
        if(self.final_code==None or self.final_code==self.original_code):
            div_cmd = self.project_path+'CloneRM/runner.sh  {} {} {}'.format(self.args.code_path,action,self.project_path + 'CloneRM/')
            # self.final_code=self.project_path+'CloneRM/Final.c'
            # 这里设置为Final.c的原因是脚本执行时会先进入到CloneRM目录下,这样有一个问题,就是需要注意该文件是在CloneRM的父目录
            self.final_code= 'Final.c'
        else:
            div_cmd = self.project_path+'CloneRM/runner.sh {} {} {}'.format(self.final_code,action,self.project_path + 'CloneRM/')

        # print(f"执行div_cmd: {div_cmd}")
        _, stderr_val = self._external_cmd(div_cmd)
        self.mutated_code=self.project_path+'CloneRM/Mutated.c'
        # 新的代码会保存到 'CloneRM/Mutated.c，并将其拷贝到CloneRM/Final.c
        cp_cmd="cp {} {}".format(self.mutated_code,'CloneRM/'+ self.final_code)
        # print(f"执行cp_cmd: {cp_cmd}")
        _,_=self._external_cmd(cp_cmd)

    def _external_cmd(self, cmd, msg_in=''):
        """
        执行外部 shell 命令并获取返回的标准输出和标准错误
        """
        # cmd = /data/yjx/code_for_first_task/week3/clone_attack/DRLSG/CloneRM/runner.sh ./test.c 12 /data/yjx/code_for_first_task/week3/clone_attack/DRLSG/
        # print(f"执行外部命令: {cmd}")
        try:
            # subprocess.Popen() 来启动一个新的进程，执行传入的 shell 命令
            proc = subprocess.Popen(cmd,
                                    shell=True,
                                    stdin=subprocess.PIPE,
                                    stdout=subprocess.PIPE,
                                    stderr=subprocess.PIPE,
                                    )
            stdout_value, stderr_value = proc.communicate(msg_in)
            # print(f"stdout_value: {stdout_value.decode()}")
            if stderr_value:
                print(f"stderr_value: {stderr_value.decode()}")
            if stdout_value:
                print(f"stdout_value: {stdout_value.decode()}")
            return stdout_value, stderr_value
        except ValueError as err:
            return None, None
        except IOError as err:
            return None, None

    def _get_model(self):
        self.vocab=json.load(open(self.args.vocab_path)) 
        x=import_module('model.'+'RNN')
        config=x.Config()
        config.n_vocab=len(self.vocab)
        model=x.Model(config)
        model.load_state_dict(torch.load(config.save_path,map_location='cuda'))
        model.eval()
        model=model.cuda()
        return model

    def _encodding_code(self,path):
        """
        将代码文件（通过路径 path）转换成 token，并用模型进行编码，生成该代码的嵌入向量（embedding）
        """
        token1=get_code_token(path)
        token1=padding_code(token1,self.vocab,512)
        token1=torch.tensor(token1).unsqueeze(0)
        x=token1.cuda()
        embedding_x=self.encodding_model(x).cpu()
        embedding_x=embedding_x.detach().numpy()
        return embedding_x

    def step(self, action):
        """
        每个 action（动作）表示对代码进行一次变异操作,根据 action 生成变异代码，计算代码变异与原始代码的相似度，并根据相似度为智能体提供奖励。
        返回下一状态（变异后的代码的嵌入向量）、奖励、是否完成（done）以及额外的信息
        """
        action=action+1 
        done=False
        self._get_mutated_code(action)
        
        self.count+=1 
        result=self._get_clone_result() 
        distance=self._get_edited_distance()
        if(result=='0'):
            # 如果变异后的代码与原始代码非常相似，则完成任务并给予奖励 10。
            done=True
            reward=10
        else:
            # 如果变异后的代码不相似，则根据编辑距离 distance 给出惩罚，距离越远，惩罚越大
            if(int(distance)==1):
                reward=-0.5
            else:
                reward=-self.a*distance 
        # print(f"line 173 self.final_code: {self.final_code}")
        next_state = self._encodding_code('CloneRM/' + self.final_code)
        info={}
        if(action==13):
            self.count_obf+=1 
            reward-=self.count_obf*0.5
        # print(f"next_state: {next_state}, reward: {reward}, done: {done}")
        return next_state,reward,done,info
    
    def reset(self):
        """
        用于环境的重置，初始化原始代码并加载预训练的模型
        """
        state = self._encodding_code(self.original_code)
        self.final_code=None
        x=import_module('model.'+self.model_name)
        config=x.Config()
        config.save_path=self.args.project_path+'/saved_dict/'+self.model_name+'.ckpt'
        config.n_vocab=len(self.vocab)
        model=x.Model(config)
        model.load_state_dict(torch.load(config.save_path,map_location='cuda'))
        model.eval() 
        self.model=model.cuda()
        # 记录源代码的token
        token1=get_code_token(self.args.code_path)
        self.original_ast=" ".join(token1)
        token1=padding_code(token1,self.vocab,512)
        token1=torch.tensor(token1).unsqueeze(0)
        self.x=token1.cuda()
        return state
    
    def render(self, mode='human'):
        pass

    def seed(self, seed=None):
        pass



    
    
    
