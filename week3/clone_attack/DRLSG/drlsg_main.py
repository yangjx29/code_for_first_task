import os
import sys
import gym
import tqdm
import time
import torch 
import random
import logging
import warnings
import numpy as np 
 
# 导入强化学习算法
from stable_baselines3 import PPO 

from config import get_parameter
from drlsg_env import ClonegenEnvTest

# TensorFlow 日志等级为 3（只输出错误信息），并禁用警告信息
os.environ["TF_CPP_MIN_LOG_LEVEL"] = "3"
warnings.filterwarnings('ignore')

_dtype=np.int16 
os.environ["CUDA_VISIBLE_DEVICES"] = "3"


def trainer():
    print('[+] start training...')
    # 策略为 MlpPolicy（多层感知机策略），并使用 env 环境
    # model.set_env(env)  # 这里报错,没有初始化model
    # 初始化model
    model = PPO(policy="MlpPolicy", env=env) 
    # 训练1000步
    model.learn(total_timesteps=1000)
    model.save(args.rlmodel_path)
    # 返回训练好的模型
    print('[+] training done...')
    return model

if __name__ == "__main__":
    # 获取参数
    args=get_parameter()

    start1=time.time() 

    args.code_path
    # 初始化环境
    env = ClonegenEnvTest(args)
    print('[+]learning time:',time.time()-start1)
    if(args.mode=='train'):
        model=trainer() 
    elif(args.mode=='test'):
        args.rlmodel_path='./saved_dict/ppo_chekpoint.zip'
        model=PPO.load(args.rlmodel_path)
    print('[+]training time:',time.time()-start1)
    # 重置observation
    obs = env.reset()
    print('[+]starting test...')
    count=0
    for _ in range(300):
        obs_b=obs
        start=time.time()
        # 获取模型根据当前观察 obs 预测的动作 action
        action,_ = model.predict(observation=obs)
        # 转换成张量
        action=action.item()
        print(action+1,end=',')
        sys.stdout.flush()
        # 并获得新的观察、奖励、是否完成、附加信息
        obs, reward, done, info = env.step(action)
        if(done==True and count >15):
            print('done')
            break
        # 渲染当前状态
        env.render()
        count+=1
    print('[+]total time:',time.time()-start1)
    
