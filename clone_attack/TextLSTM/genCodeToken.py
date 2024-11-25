import os
import re
import sys 
import tqdm
import json
import random
import argparse
import numpy as np
import pandas as pd
import pickle as pkl
from multiprocessing import Pool
from utils import get_code_token,SPECIAL_WORD
sys.path.append('.')

#-----------------------------start
# 数据转换为token 加快训练速度
def padding_code(sequences, maxlen=512, pos='r-pre'):
    """
    pre: 在序列的前面填充 <PAD> token。
    r-pre: 在序列的后面填充 <PAD> token
    """
    sequences = [vocab.get(s, SPECIAL_WORD['<UNK>']) for s in sequences]
    if len(sequences) > maxlen:
        sequences = sequences[:maxlen]
    if pos == 'pre':
        sequences = [SPECIAL_WORD['<PAD>']] * (maxlen - len(sequences)) + sequences
    else:
        sequences = sequences + [SPECIAL_WORD['<PAD>']] * (maxlen - len(sequences))
    return sequences

def preprocess_code_data_subprocess(data):
    """
    将一对代码文件（由 id1 和 id2 表示）转化为 token，并进行 padding 操作。
    """
    id1,id2,label=data
    # 转换为token
    token1=get_code_token(id1)
    token2=get_code_token(id2)
    token1=padding_code(token1,512)
    token2=padding_code(token2,512)
    return token1,token2,label

def preprocess_code_data(data_path):
    """
    将处理后的结果保存为新的 pkl 文件
    """
    data=pd.read_pickle(data_path)
    code_tokens=[]
    preprocess=[]
    for _,items in data.iterrows():
        id1=items.id1
        id2=items.id2
        if(not os.path.exists(id1) or not os.path.exists(id2)): 
            continue
        label=items.label
        preprocess.append([id1,id2,label])
    
    with Pool(40) as p:
        for i in p.imap(preprocess_code_data_subprocess,tqdm.tqdm(preprocess)):
            code_tokens.append([i[0],i[1],i[2]])
    
    data_path=data_path.replace('.pkl','_token.pkl')
    # print(data_path)
    pkl.dump(code_tokens,open(data_path,'wb'))
 
#-----------------------------end

 

if __name__=='__main__':
    # 将数据转换为token
    parser = argparse.ArgumentParser(description='Token-based Source Code Clone Detection')
    parser.add_argument('data_path',
                        type=str,
                        default='oj_clone_ids_test.pkl',
                        help='programs data path')
    args=parser.parse_args() 
    vocab=json.load(open('dataset/vocab.json','r'))
    preprocess_code_data(args.data_path)
    
 
 