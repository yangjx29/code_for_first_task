from __future__ import absolute_import, division, print_function

import argparse
import glob
import logging
import os
import pickle
import random
import re
import shutil
import sys
sys.path.append('../../')
sys.path.append('../../../')
sys.path.append('../../../python_parser')
from python_parser.parser_folder import remove_comments_and_docstrings
from utils import set_seed

import numpy as np
import torch
from torch.utils.data import DataLoader, Dataset, SequentialSampler, RandomSampler,TensorDataset
from torch.utils.data.distributed import DistributedSampler
import json
try:
    from torch.utils.tensorboard import SummaryWriter
except:
    from tensorboardX import SummaryWriter

from tqdm import tqdm, trange
import multiprocessing
from model import Model
cpu_cont = multiprocessing.cpu_count()
from transformers import (WEIGHTS_NAME, AdamW, get_linear_schedule_with_warmup,
                          BertConfig, BertForMaskedLM, BertTokenizer,
                          GPT2Config, GPT2LMHeadModel, GPT2Tokenizer,
                          OpenAIGPTConfig, OpenAIGPTLMHeadModel, OpenAIGPTTokenizer,
                          RobertaConfig, RobertaForSequenceClassification, RobertaTokenizer,
                          DistilBertConfig, DistilBertForMaskedLM, DistilBertTokenizer,\
                            T5Config, T5ForConditionalGeneration, T5Tokenizer,Trainer, TrainingArguments)
from torch.nn import CrossEntropyLoss

from model import CodeBERT, GraphCodeBERT, CodeT5

from safetensors.torch import load_file

logger = logging.getLogger(__name__)

MODEL_CLASSES = {
    'gpt2': (GPT2Config, GPT2LMHeadModel, GPT2Tokenizer),
    'openai-gpt': (OpenAIGPTConfig, OpenAIGPTLMHeadModel, OpenAIGPTTokenizer),
    'bert': (BertConfig, BertForMaskedLM, BertTokenizer),
    'roberta': (RobertaConfig, RobertaForSequenceClassification, RobertaTokenizer),
    'distilbert': (DistilBertConfig, DistilBertForMaskedLM, DistilBertTokenizer),
    'codet5': (T5Config, T5ForConditionalGeneration, RobertaTokenizer)
}
from peft import LoraConfig, get_peft_model,PeftModel, TaskType,PeftConfig
 


class CodeT5InputFeatures(object):
    def __init__(self, input_tokens, input_ids, idx, label):
        self.input_tokens = input_tokens
        self.input_ids = input_ids
        self.idx = str(idx)
        self.label = label

def codet5_convert_examples_to_features(js, tokenizer, args):
    code = ' '.join(js['func'].split())
    code_tokens = tokenizer.tokenize(code)[:args.block_size-2]
    source_tokens = [tokenizer.cls_token]+code_tokens+[tokenizer.sep_token]
    source_ids = tokenizer.convert_tokens_to_ids(source_tokens)
    padding_length = args.block_size - len(source_ids)
    source_ids += [tokenizer.pad_token_id]*padding_length
    return CodeT5InputFeatures(source_tokens, source_ids, js['idx'], int(js['target']))


class CodeT5TextDataset(Dataset):
    def __init__(self, tokenizer, args, file_path=None):
        self.examples = []
        file_type = file_path.split('/')[-1].split('.')[0]
        folder = '/'.join(file_path.split('/')[:-1])

        cache_file_path = os.path.join(folder, 'codet5_cached_{}'.format(file_type))

        print('\n cached_features_file: ', cache_file_path)
        try:
            self.examples = torch.load(cache_file_path,weights_only=True)
        except:
            with open(file_path) as f:
                for line in f:
                    js = json.loads(line.strip())
                    self.examples.append(codet5_convert_examples_to_features(js, tokenizer, args))
            torch.save(self.examples, cache_file_path)

    def __len__(self):
        return len(self.examples)

    def __getitem__(self, i):
        # return torch.tensor(self.examples[i].input_ids),torch.tensor(self.examples[i].label)
        # 符合 DataCollator 以及 tokenizer.pad() 的要求
        return {
            'input_ids': torch.tensor(self.examples[i].input_ids),
            'label': torch.tensor(self.examples[i].label)
        }
    
from sklearn.metrics import precision_recall_fscore_support

def compute_metrics(eval_pred):
    predictions, labels = eval_pred
    preds = predictions.argmax(axis=-1)  # 对于多分类任务，你需要根据需要修改此部分
    precision, recall, f1, _ = precision_recall_fscore_support(labels, preds, average="binary")
    accuracy = (preds == labels).mean()
    return {
        "accuracy": accuracy,
        "precision": precision,
        "recall": recall,
        "f1": f1
    }

def train(args, train_dataset, eval_dataset,model, tokenizer):
    """
    Train the model 
    """ 
    # 定义训练参数
    """
    args.output_dir: 用来保存训练过程中的一些中间文件，如模型检查点、日志文件等。具体保存内容包括：
    checkpoint-* 文件夹：这些文件夹包含了每个检查点（checkpoint）的模型权重和配置文件。
    trainer_state.json：记录训练过程中的状态信息（如训练的步数、学习率等）。
    eval_results 等：保存评估过程中的结果（例如损失值等
    """
    training_args = TrainingArguments(
        output_dir= args.output_dir,  # 保存训练结果的目录
        eval_strategy="steps",  # 每个 steps 评估一次,同保存策略一致
        num_train_epochs=3,  # 训练轮次
        per_device_train_batch_size=8,  # 每个设备上的批量大小
        per_device_eval_batch_size=32,  # 每个设备上的评估批量大小
        logging_dir="./logs",  # 日志目录
        logging_steps=1000,  # 每1000步记录一次日志
        save_steps=1000,  # 每1000步保存一次模型
        # load_best_model_at_end=True,  # 加载最佳模型
        metric_for_best_model="eval_loss",  # 你可以选择自己想要的评估标准（例如准确率）
        load_best_model_at_end=True,
        greater_is_better=False,
        # lr_scheduler_type='linear',  # 使用线性衰减的学习率调度
        learning_rate=1e-5,  # 调整学习率
    )
    


    # 定义 Trainer 类进行训练
    trainer = Trainer(
        model=model,  # 需要微调的模型
        args=training_args,  # 训练参数
        tokenizer=tokenizer,  # 分词器
        train_dataset=train_dataset,  # 训练数据集
        eval_dataset= eval_dataset,  # 验证数据集
        # compute_metrics= compute_metrics,
    )

    # 开始训练
    trainer.train()

    # 保存微调后的模型
    trainer.save_model("./finetuned_codet5_lora")
    print("Model saved")
    model.save_pretrained("./saved_models/acc_model") 


    # 评估模型
    eval_results = trainer.evaluate()
    print(f"eval_results: {eval_results}")


def load_lora_config(model_dir):
    """
    Load LoRA configuration from adapter_config.json.
    Args:
    - model_dir: Directory where the fine-tuned LoRA model is saved.
    
    Returns:
    - lora_config: LoRA configuration loaded from 'adapter_config.json'.
    """
    config_path = os.path.join(model_dir, "adapter_config.json")
    if os.path.exists(config_path):
        with open(config_path, "r") as f:
            lora_config = json.load(f)
        return lora_config
    else:
        raise ValueError("LoRA configuration file ('adapter_config.json') not found.")

def load_finetuned_model(model_dir, model):
    """
    Load the fine-tuned CodeT5 model and tokenizer, and apply LoRA if needed.
    
    Args:
    - model_dir: Directory where the fine-tuned model is saved.
    - lora_config: Configuration for LoRA (if applicable).
    
    Returns:
    - model: Loaded fine-tuned model with LoRA (if applicable).
    - tokenizer: Loaded tokenizer.
    """

    # config = T5Config.from_pretrained(model_dir)
    # config.num_labels = 1  # Adjust based on your task, e.g., regression task may need num_labels=1

    safetensor_path = os.path.join(model_dir, "adapter_model.safetensors")
    
    # Load the LoRA-specific weights using PeftModel
    lora_config = load_lora_config(model_dir)
    
    # model.peft_config = None  # 清除已有的适配器配置
    # print(f"Model before applying LoRA: {model}")

    model = PeftModel.from_pretrained(model, model_dir,lora_config=lora_config)
    # adapter_weights = load_file(safetensor_path)  # safetensors 文件
    
    # model.load_adapter_weights(adapter_weights)
    # print(f"Model after applying LoRA: {model}")

    
    # Load the tokenizer
    # tokenizer = RobertaTokenizer.from_pretrained(model_dir)

    return model



def test(args, model, tokenizer):
    # Loop to handle MNLI double evaluation (matched, mis-matched)
    eval_dataset = CodeT5TextDataset(tokenizer, args,args.test_data_file)

    args.eval_batch_size = args.per_gpu_eval_batch_size * max(1, args.n_gpu)
    # Note that DistributedSampler samples randomly
    eval_sampler = SequentialSampler(eval_dataset) if args.local_rank == -1 else DistributedSampler(eval_dataset)
    eval_dataloader = DataLoader(eval_dataset, sampler=eval_sampler, batch_size=args.eval_batch_size)

    # multi-gpu evaluate
    if args.n_gpu > 1:
        model = torch.nn.DataParallel(model)

    # Eval!
    logger.info("***** Running Test *****")
    logger.info("  Num examples = %d", len(eval_dataset))
    logger.info("  Batch size = %d", args.eval_batch_size)
    eval_loss = 0.0
    nb_eval_steps = 0
    model.eval()
    logits=[]   
    labels=[]
    # print(f"eval_dataloader: {eval_dataloader}")
    for batch in tqdm(eval_dataloader,total=len(eval_dataloader)):
        # batch[0] 是输入数据（比如文本或特征），batch[1] 是对应的标签
        # print(f"batch: {batch}")
        # inputs = batch[0].to(args.device)
        # label=batch[1].to(args.device) 

        inputs = batch['input_ids'].to(args.device)
        label = batch['label'].to(args.device)
        # print(f"inputs: {inputs}\n label: {label}\n") 
        with torch.no_grad():
            logit = model(inputs)

            # TODO 计算当前批次的损失
            # loss = loss_fn(logit, label)  # 计算损失
            # print(f"logit: {logit}")
            # eval_loss += loss.item()  # 累加损失值

            logits.append(logit.cpu().numpy())
            labels.append(label.cpu().numpy()) 
        nb_eval_steps += 1
    # 得到一个完整的预测值数组和一个完整的标签数组。
    logits=np.concatenate(logits,0)
    labels=np.concatenate(labels,0)
    print(f"logits: {logits}\n labels: {labels}\n")
    # 选择每个样本的第一个 logits 值 (logits[:, 0])，并将其与 0.5 比较，进行二分类预测
    preds=logits[:,0]>0.5
    print(f"preds: {preds}\n")
    eval_acc=np.mean(labels==preds)
    eval_loss = eval_loss / nb_eval_steps
    perplexity = torch.tensor(eval_loss)
            
    result = {
        "eval_loss": float(perplexity),
        "eval_acc":round(eval_acc,4),
    }
    print(f"result: {result}")
    return result

def main():
    parser = argparse.ArgumentParser()

    ## Required parameters
    parser.add_argument("--train_data_file", default=None, type=str, required=True,
                        help="The input training data file (a text file).")
    parser.add_argument("--output_dir", default=None, type=str, required=True,
                        help="The output directory where the model predictions and checkpoints will be written.")

    ## Other parameters
    parser.add_argument("--eval_data_file", default=None, type=str,
                        help="An optional input evaluation data file to evaluate the perplexity on (a text file).")
    parser.add_argument("--test_data_file", default=None, type=str,
                        help="An optional input evaluation data file to evaluate the perplexity on (a text file).")
                    
    parser.add_argument("--model_type", default="bert", type=str,
                        help="The model architecture to be fine-tuned.")
    parser.add_argument("--model_name_or_path", default=None, type=str,
                        help="The model checkpoint for weights initialization.")

    parser.add_argument("--mlm", action='store_true',
                        help="Train with masked-language modeling loss instead of language modeling.")
    parser.add_argument("--mlm_probability", type=float, default=0.15,
                        help="Ratio of tokens to mask for masked language modeling loss")

    parser.add_argument("--config_name", default="", type=str,
                        help="Optional pretrained config name or path if not the same as model_name_or_path")
    parser.add_argument("--tokenizer_name", default="", type=str,
                        help="Optional pretrained tokenizer name or path if not the same as model_name_or_path")
    parser.add_argument("--cache_dir", default="", type=str,
                        help="Optional directory to store the pre-trained models downloaded from s3 (instread of the default one)")
    parser.add_argument("--block_size", default=-1, type=int,
                        help="Optional input sequence length after tokenization."
                             "The training dataset will be truncated in block of this size for training."
                             "Default to the model max input length for single sentence inputs (take into account special tokens).")
    parser.add_argument("--do_train", action='store_true',
                        help="Whether to run training.")
    parser.add_argument("--do_eval", action='store_true',
                        help="Whether to run eval on the dev set.")
    parser.add_argument("--do_test", action='store_true',
                        help="Whether to run eval on the dev set.")    
    parser.add_argument("--evaluate_during_training", action='store_true',
                        help="Run evaluation during training at each logging step.")
    parser.add_argument("--do_lower_case", action='store_true',
                        help="Set this flag if you are using an uncased model.")

    parser.add_argument("--train_batch_size", default=4, type=int,
                        help="Batch size per GPU/CPU for training.")
    parser.add_argument("--eval_batch_size", default=4, type=int,
                        help="Batch size per GPU/CPU for evaluation.")
    parser.add_argument('--gradient_accumulation_steps', type=int, default=1,
                        help="Number of updates steps to accumulate before performing a backward/update pass.")
    parser.add_argument("--learning_rate", default=5e-5, type=float,
                        help="The initial learning rate for Adam.")
    parser.add_argument("--weight_decay", default=0.0, type=float,
                        help="Weight deay if we apply some.")
    parser.add_argument("--adam_epsilon", default=1e-8, type=float,
                        help="Epsilon for Adam optimizer.")
    parser.add_argument("--max_grad_norm", default=1.0, type=float,
                        help="Max gradient norm.")
    parser.add_argument("--num_train_epochs", default=1.0, type=float,
                        help="Total number of training epochs to perform.")
    parser.add_argument("--max_steps", default=-1, type=int,
                        help="If > 0: set total number of training steps to perform. Override num_train_epochs.")
    parser.add_argument("--warmup_steps", default=0, type=int,
                        help="Linear warmup over warmup_steps.")

    parser.add_argument('--logging_steps', type=int, default=50,
                        help="Log every X updates steps.")
    parser.add_argument('--save_steps', type=int, default=50,
                        help="Save checkpoint every X updates steps.")
    parser.add_argument('--save_total_limit', type=int, default=None,
                        help='Limit the total amount of checkpoints, delete the older checkpoints in the output_dir, does not delete by default')
    parser.add_argument("--eval_all_checkpoints", action='store_true',
                        help="Evaluate all checkpoints starting with the same prefix as model_name_or_path ending and ending with step number")
    parser.add_argument("--no_cuda", action='store_true',
                        help="Avoid using CUDA when available")
    parser.add_argument('--overwrite_output_dir', action='store_true',
                        help="Overwrite the content of the output directory")
    parser.add_argument('--overwrite_cache', action='store_true',
                        help="Overwrite the cached training and evaluation sets")
    parser.add_argument('--seed', type=int, default=42,
                        help="random seed for initialization")
    parser.add_argument('--epoch', type=int, default=42,
                        help="random seed for initialization")
    parser.add_argument('--fp16', action='store_true',
                        help="Whether to use 16-bit (mixed) precision (through NVIDIA apex) instead of 32-bit")
    parser.add_argument('--fp16_opt_level', type=str, default='O1',
                        help="For fp16: Apex AMP optimization level selected in ['O0', 'O1', 'O2', and 'O3']."
                             "See details at https://nvidia.github.io/apex/amp.html")
    parser.add_argument("--local_rank", type=int, default=-1,
                        help="For distributed training: local_rank")
    parser.add_argument('--server_ip', type=str, default='', help="For distant debugging.")
    parser.add_argument('--server_port', type=str, default='', help="For distant debugging.")


    args = parser.parse_args()

    # Set seed
    set_seed(args.seed)

    if args.local_rank == -1 or args.no_cuda:
        device = torch.device("cuda" if torch.cuda.is_available() and not args.no_cuda else "cpu")
        args.n_gpu = torch.cuda.device_count()
    else:  # Initializes the distributed backend which will take care of sychronizing nodes/GPUs
        torch.cuda.set_device(args.local_rank)
        device = torch.device("cuda", args.local_rank)
        torch.distributed.init_process_group(backend='nccl')
        args.n_gpu = 1
    args.device = device
    args.per_gpu_train_batch_size=args.train_batch_size//args.n_gpu
    args.per_gpu_eval_batch_size=args.eval_batch_size//args.n_gpu

    # Setup logging
    logging.basicConfig(format='%(asctime)s - %(levelname)s - %(name)s -   %(message)s',
                        datefmt='%m/%d/%Y %H:%M:%S',
                        level=logging.INFO if args.local_rank in [-1, 0] else logging.WARN)
    logger.warning("Process rank: %s, device: %s, n_gpu: %s, distributed training: %s, 16-bits training: %s",
                   args.local_rank, device, args.n_gpu, bool(args.local_rank != -1), args.fp16)

    args.start_epoch = 0
    args.start_step = 0
    checkpoint_last = os.path.join(args.output_dir, 'checkpoint-last')
    if os.path.exists(checkpoint_last) and os.listdir(checkpoint_last):
        args.model_name_or_path = os.path.join(checkpoint_last, 'pytorch_model.bin')
        args.config_name = os.path.join(checkpoint_last, 'config.json')
        idx_file = os.path.join(checkpoint_last, 'idx_file.txt')
        with open(idx_file, encoding='utf-8') as idxf:
            args.start_epoch = int(idxf.readlines()[0].strip()) + 1

        step_file = os.path.join(checkpoint_last, 'step_file.txt')
        if os.path.exists(step_file):
            with open(step_file, encoding='utf-8') as stepf:
                args.start_step = int(stepf.readlines()[0].strip())

        logger.info("reload model from {}, resume from {} epoch".format(checkpoint_last, args.start_epoch))

    config_class, model_class, tokenizer_class = MODEL_CLASSES[args.model_type]

    config = config_class.from_pretrained(args.config_name if args.config_name else args.model_name_or_path,
                                          cache_dir=args.cache_dir if args.cache_dir else None)
    config.num_labels=1
    tokenizer = tokenizer_class.from_pretrained(args.tokenizer_name,
                                                do_lower_case=args.do_lower_case,
                                                cache_dir=args.cache_dir if args.cache_dir else None)
    if args.block_size <= 0:
        args.block_size = tokenizer.max_len_single_sentence  # Our input block size will be the max possible for the model
    args.block_size = min(args.block_size, tokenizer.max_len_single_sentence)
    if args.model_name_or_path:
        model = model_class.from_pretrained(args.model_name_or_path,
                                            from_tf=bool('.ckpt' in args.model_name_or_path),
                                            config=config,
                                            cache_dir=args.cache_dir if args.cache_dir else None)    
    else:
        model = model_class(config)
    
    if args.model_type == 'codet5':
        model = CodeT5(model, config, tokenizer, args)
    else:
        model=Model(model,config,tokenizer,args)

    # 将 LoRA 应用到模型的模型中
    print(f"base model: {model}")

    #  定义 LoRA 配置
    # TODO 参数慢慢尝试
    lora_config = LoraConfig(
        task_type=TaskType.SEQ_CLS, 
        r=12,  # 低秩矩阵的秩，通常选择 4-16 之间
        lora_alpha=16,  # LoRA 系数
        lora_dropout=0.1,  # dropout 比例
        target_modules=[
        "q",  # SelfAttention 中的查询
        "k",  # SelfAttention 中的键
        "v",  # SelfAttention 中的值
        "o",  # SelfAttention 中的输出
        ],  # 目标模块（这里是自注意力层的 query、key 和 value）
        bias="none",  # 是否调整偏置项
        inference_mode=False
    )

    if args.do_train:
        if args.local_rank not in [-1, 0]:
            torch.distributed.barrier()  # Barrier to make sure only the first process in distributed training process the dataset, and the others will use the cache

        train_dataset = CodeT5TextDataset(tokenizer, args,args.train_data_file)
        eval_dataset = CodeT5TextDataset(tokenizer, args,args.eval_data_file)
        if args.local_rank == 0:
            torch.distributed.barrier()

        # 包装codet5模型
        model = get_peft_model(model, lora_config)
        train(args, train_dataset, eval_dataset, model, tokenizer)

    if args.do_test and args.local_rank in [-1, 0]:
        model = load_finetuned_model(model_dir="./saved_models/acc_model", model=model)
        # output_dir = './finetuned_codet5_lora/pytorch_model.bin'
        # model.load_state_dict(torch.load(output_dir))
        model.to(args.device)
        result=test(args, model, tokenizer)
        logger.info("***** Test results *****")
        for key in sorted(result.keys()):
            logger.info("  %s = %s", key, str(round(result[key],4)))

if __name__ == "__main__":
    """
    CUDA_VISIBLE_DEVICES=0 python fineTunewithLora.py --output_dir=./saved_models --model_type=codet5 --tokenizer_name=Salesforce/codet5-base-multi-sum --model_name_or_path=Salesforce/codet5-base-multi-sum --do_train --train_data_file=../preprocess/dataset/train.jsonl --eval_data_file=../preprocess/dataset/valid.jsonl --test_data_file=../preprocess/dataset/function.jsonl --epoch 5 --block_size 512 --train_batch_size 32 --eval_batch_size 64 --learning_rate 2e-5 --max_grad_norm 1.0 --evaluate_during_training --seed 123456 2>&1 | tee finetuneCodet5new.log

    CUDA_VISIBLE_DEVICES=0 python fineTunewithLora.py --output_dir=./saved_models --model_type=codet5 --tokenizer_name=Salesforce/codet5-base-multi-sum --model_name_or_path=Salesforce/codet5-base-multi-sum --do_test --train_data_file=../preprocess/dataset/train.jsonl --eval_data_file=../preprocess/dataset/valid.jsonl --test_data_file=../preprocess/dataset/function.jsonl --epoch 5 --block_size 512 --train_batch_size 32 --eval_batch_size 64 --learning_rate 2e-5 --max_grad_norm 1.0 --evaluate_during_training --seed 123456 2>&1 | tee testCodeT5Lora.log
    """
    main()