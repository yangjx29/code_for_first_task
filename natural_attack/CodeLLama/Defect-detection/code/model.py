# Copyright (c) Microsoft Corporation.
# Licensed under the MIT License.
import torch
import torch.nn as nn
import torch
from torch.autograd import Variable
import copy
import torch.nn.functional as F
from torch.nn import CrossEntropyLoss, MSELoss
from torch.utils.data import SequentialSampler, DataLoader
import numpy as np
    
    
class Model(nn.Module):   
    def __init__(self, encoder,config,tokenizer,args):
        super(Model, self).__init__()
        self.encoder = encoder
        self.config=config
        self.tokenizer=tokenizer
        self.args=args
        self.query = 0
    
        
    def forward(self, input_ids=None,labels=None): 
        outputs=self.encoder(input_ids,attention_mask=input_ids.ne(1))[0]
        logits=outputs
        prob=F.sigmoid(logits)
        # 计算损失,返回标签
        if labels is not None:
            labels=labels.float()
            loss=torch.log(prob[:,0]+1e-10)*labels+torch.log((1-prob)[:,0]+1e-10)*(1-labels)
            loss=-loss.mean()
            return loss,prob
        else:
            return prob

    def get_results(self, dataset, batch_size):
        '''Given a dataset, return probabilities and labels.'''

        # 更新查询数
        self.query += len(dataset)
        eval_sampler = SequentialSampler(dataset)
        eval_dataloader = DataLoader(dataset, sampler=eval_sampler, batch_size=batch_size,num_workers=4,pin_memory=False)

        # 开启评估模式
        self.eval()
        logits=[] 
        labels=[]
        for batch in eval_dataloader:
            inputs = batch[0].to("cuda")       
            label=batch[1].to("cuda") 
            # 计算输出
            with torch.no_grad():
                lm_loss,logit = self.forward(inputs,label)
                logits.append(logit.cpu().numpy())
                labels.append(label.cpu().numpy())
                
        # 将所有批次的输出和标签合并为单个NumPy数组
        logits=np.concatenate(logits,0)
        labels=np.concatenate(labels,0)

        # 计算概率和预测标签
        # 将 logits 转换成概率分布
        probs = [[1 - prob[0], prob[0]] for prob in logits]
        pred_labels = [1 if label else 0 for label in logits[:,0]>0.5]

        return probs, pred_labels
        
 
class CodeLlamaRobertaClassificationHead(nn.Module):
    def __init__(self, config):
        super().__init__()
        self.dense = nn.Linear(config.hidden_size, config.hidden_size)
        self.out_proj = nn.Linear(config.hidden_size, 2)

    def forward(self, features, **kwargs):
        x = self.dense(features)
        x = torch.tanh(x)
        x = self.out_proj(x)
        return x
        
class CodeLlama(nn.Module):
    def __init__(self, encoder, config, tokenizer, args):
        super(CodeLlama, self).__init__()
        self.encoder = encoder
        self.config = config
        self.tokenizer = tokenizer
        self.classifier = CodeLlamaRobertaClassificationHead(config)
        self.args = args
        self.query = 0

    def forward(self, input_ids=None, labels=None):
        input_ids = input_ids.view(-1, self.args.block_size)
        attention_mask = input_ids.ne(self.tokenizer.pad_token_id)
        # print(f"input_ids: {input_ids}\nattention_mask: {attention_mask}")
        if input_ids != None:
            print(f"input_ids shape: {input_ids.shape}\n")
        else:
            print(f"input_ids is None\n")
        if labels != None:
            print(f"labels shape: {labels.shape}\n")
        else:
            print(f"labels is None\n")
        if attention_mask != None:
            print(f"attention_mask shape: {attention_mask.shape}\n")
        else:
            print(f"attention_mask is None\n")  

        # print(f"input_ids shape: {input_ids.shape}\n, labels shape: {labels.shape}\n attention_mask shape: {attention_mask.shape}")
        outputs = self.encoder(input_ids=input_ids, attention_mask=attention_mask,
                               labels=input_ids, output_hidden_states=True)
        print(f"self.encoder outputs: {outputs}")
        hidden_states = outputs['decoder_hidden_states'][-1]
        print(f"hidden_states: {hidden_states}")
        eos_mask = input_ids.eq(self.config.eos_token_id)
        print(f"eos_mask: {eos_mask}")
        if len(torch.unique(eos_mask.sum(1))) > 1:
            raise ValueError("All examples must have the same number of <eos> tokens.")
        outputs = hidden_states[eos_mask, :].view(hidden_states.size(0), -1,
                                                  hidden_states.size(-1))[:, -1, :]
        print(f"outputs after mask: {outputs}")
        logits = self.classifier(outputs)
        prob = F.softmax(logits)
        if labels is not None:
            loss_fct = CrossEntropyLoss()
            loss = loss_fct(logits, labels)
            return loss, prob
        else:
            return prob

    def get_results(self, dataset, batch_size):
        self.query += len(dataset)
        eval_sampler = SequentialSampler(dataset)
        eval_dataloader = DataLoader(dataset, sampler=eval_sampler, batch_size=batch_size,num_workers=0,pin_memory=False)
        self.eval()
        logits = []
        for batch in eval_dataloader:
            inputs = batch[0].to("cuda")
            label = batch[1].to("cuda")
            with torch.no_grad():
                lm_loss, logit = self.forward(inputs, label)
                logits.append(logit.cpu().numpy())

        logits = np.concatenate(logits, 0)
        probs = logits
        pred_labels = []
        for logit in logits:
            pred_labels.append(np.argmax(logit))

        return probs, pred_labels