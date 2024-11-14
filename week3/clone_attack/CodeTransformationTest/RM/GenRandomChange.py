
import os 
import math 
import time
import random
import argparse


parser = argparse.ArgumentParser() 
parser.add_argument('filepath',type=str, help='please input the count file path')
parser.add_argument('action',type=int,help='actions')
args=parser.parse_args()
 
def get_conut_result(file_dir):
    F=[]
    for root,dirs,files in os.walk(file_dir):
        for filename in files:
            if(os.path.splitext(filename)[1]=='.count'):
                F.append(filename)
    return F
 

def get_file_number(filename):
    count=0
    for i in filename:
        if(str.isnumeric(i)):
            count+=1
    number=filename[:count]
    print(f"filename is {filename} count is {count}")
    return int(number)

def gen_random_data(files):
    random.seed(time.time())
    for filename in files:
        absFile=os.path.join(filepath,filename)
        print(f"正在处理文件{absFile}")
        with open(absFile,'r') as fileHandle:
            filenumber=get_file_number(filename)
            changedCount=0
            count=int(fileHandle.readline().strip())
            if(action == filenumber):
                if(count>0):
                    # 从 1 到 count 随机选择一个值作为 changedCount，表示要改变的数据项数
                    changedCount=random.randint(1,count)
                    if(action==13):
                        changedCount=1 # 特定操作
            noChangeCount=count-changedCount
            changeVariable=['1']*changedCount
            noChangeVariable=['0']*noChangeCount
            variable=changeVariable+noChangeVariable
            print(f"变量列表为{variable}")
            r=random.random
            x=random.randint(1,100000)
            random.seed(x)
            # 对 variable 列表进行随机打乱（random.shuffle），确保 changeVariable 和 noChangeVariable 在列表中的顺序是随机的
            # random.shuffle(variable,random=r) # random参数在3.9中被弃用
            random.shuffle(variable)   
            saveVariable=os.path.join(filepath,os.path.splitext(filename)[0]+'.random')
            with open(saveVariable,'w') as saveFile:
                result='\n'.join(variable)
                saveFile.write(result)

if __name__ == '__main__':
    filepath = args.filepath    
    action = args.action
    # 获得后缀为.count的文件
    files=get_conut_result(filepath)
    gen_random_data(files,)


