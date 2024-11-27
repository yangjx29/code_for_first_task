import torch
import sys
import os

sys.path.append('../../../')
sys.path.append('../../../python_parser')

import csv
import json
import argparse
import warnings
import torch
import numpy as np
from model import Model
from utils import set_seed
from utils import Recorder
from run import TextDataset
from utils import CodeDataset
from python_parser.parser_folder import remove_comments_and_docstrings
from python_parser.run_parser import get_identifiers
from transformers import RobertaForMaskedLM
from transformers import (RobertaConfig, RobertaForSequenceClassification, RobertaTokenizer)
from attacker import MHM_Attacker
from attacker import convert_code_to_features

os.environ['TF_CPP_MIN_LOG_LEVEL'] = '3'
warnings.simplefilter(action='ignore', category=FutureWarning) # Only report warning\

MODEL_CLASSES = {
    'roberta': (RobertaConfig, RobertaForSequenceClassification, RobertaTokenizer)
}

from utils import build_vocab
            
def main():
    
    import json
    import pickle
    import time
    import os
    
    # import tree as Tree
    # from dataset import Dataset, POJ104_SEQ
    # from lstm_classifier import LSTMEncoder, LSTMClassifier
    
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

    parser.add_argument("--base_model", default=None, type=str,
                        help="Base Model")
    parser.add_argument("--csv_store_path", default=None, type=str,
                        help="results")

    parser.add_argument("--mlm", action='store_true',
                        help="Train with masked-language modeling loss instead of language modeling.")
    parser.add_argument("--mlm_probability", type=float, default=0.15,
                        help="Ratio of tokens to mask for masked language modeling loss")

    parser.add_argument("--config_name", default="", type=str,
                        help="Optional pretrained config name or path if not the same as model_name_or_path")
    parser.add_argument("--tokenizer_name", default="", type=str,
                        help="Optional pretrained tokenizer name or path if not the same as model_name_or_path")
    parser.add_argument("--block_size", default=-1, type=int,
                        help="Optional input sequence length after tokenization."
                             "The training dataset will be truncated in block of this size for training."
                             "Default to the model max input length for single sentence inputs (take into account special tokens).")
    parser.add_argument("--do_eval", action='store_true',
                        help="Whether to run eval on the dev set.")
    parser.add_argument("--do_test", action='store_true',
                        help="Whether to run eval on the dev set.") 
    parser.add_argument("--original", action='store_true',
                        help="Whether to MHM original.")
    parser.add_argument("--eval_batch_size", default=4, type=int,
                        help="Batch size per GPU/CPU for evaluation.")
    parser.add_argument('--seed', type=int, default=42,
                        help="random seed for initialization")
    parser.add_argument("--cache_dir", default="", type=str,
                        help="Optional directory to store the pre-trained models downloaded from s3 (instread of the default one)")


    args = parser.parse_args()


    args.device = torch.device("cuda")
    # Set seed
    set_seed(args.seed)

    codebert_mlm = RobertaForMaskedLM.from_pretrained(args.base_model)
    tokenizer_mlm = RobertaTokenizer.from_pretrained(args.base_model)


    args.start_epoch = 0
    args.start_step = 0

    ## Load Target Model
    checkpoint_last = os.path.join(args.output_dir, 'checkpoint-last') # 读取model的路径
    if os.path.exists(checkpoint_last) and os.listdir(checkpoint_last):
        # 如果路径存在且有内容，则从checkpoint load模型
        args.model_name_or_path = os.path.join(checkpoint_last, 'pytorch_model.bin')
        args.config_name = os.path.join(checkpoint_last, 'config.json')
        idx_file = os.path.join(checkpoint_last, 'idx_file.txt')
        with open(idx_file, encoding='utf-8') as idxf:
            args.start_epoch = int(idxf.readlines()[0].strip()) + 1

        step_file = os.path.join(checkpoint_last, 'step_file.txt')
        if os.path.exists(step_file):
            with open(step_file, encoding='utf-8') as stepf:
                args.start_step = int(stepf.readlines()[0].strip())


    config_class, model_class, tokenizer_class = MODEL_CLASSES[args.model_type]
    config = config_class.from_pretrained(args.config_name if args.config_name else args.model_name_or_path,
                                          cache_dir=args.cache_dir if args.cache_dir else None)
    config.num_labels=1 # 只有一个label?
    tokenizer = tokenizer_class.from_pretrained(args.tokenizer_name,
                                                do_lower_case=False,
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

    model = Model(model,config,tokenizer,args)


    checkpoint_prefix = 'checkpoint-best-acc/model.bin'
    output_dir = os.path.join(args.output_dir, '{}'.format(checkpoint_prefix))  
    model.load_state_dict(torch.load(output_dir))      
    model.to(args.device)
    print ("MODEL LOADED!")
    
    codebert_mlm.to('cuda') 

    # Load Dataset
    ## Load Dataset
    eval_dataset = TextDataset(tokenizer, args,args.eval_data_file)

    source_codes = []
    generated_substitutions = []
    with open(args.eval_data_file) as f:
        for line in f:
            js=json.loads(line.strip())
            code = js['func']
            source_codes.append(code)
            generated_substitutions.append(js['substitutes'])
    assert(len(source_codes) == len(eval_dataset) == len(generated_substitutions))

    code_tokens = []
    for index, code in enumerate(source_codes):
        code_tokens.append(get_identifiers(code, "c")[1])

    # token2id: dict, key是变量名, value是id
    # id2token: list, 每个元素是变量名
    id2token, token2id = build_vocab(code_tokens, 5000)

    recoder = Recorder(args.csv_store_path)
    # 创建一个攻击者对象，使用指定的参数、模型、CodeBERT模型、tokenizer以及token映射
    attacker = MHM_Attacker(args, model, codebert_mlm, tokenizer_mlm, token2id, id2token)

    # token2id: dict, key是变量名, value是id
    # id2token: list, 每个元素是变量名

    print("ATTACKER BUILT!")  # 打印确认消息，表示攻击者对象已成功创建

    # 初始化一个字典以存储生成的对抗样本信息
    adv = {
        "tokens": [],       # 存储生成的对抗样本的token
        "raw_tokens": [],   # 存储原始token
        "ori_raw": [],      # 存储原始代码
        "ori_tokens": [],   # 存储原始的tokens
        "label": [],        # 存储对应的标签
    }

    n_succ = 0.0  # 成功攻击的计数器
    total_cnt = 0  # 总的示例计数器
    query_times = 0  # 查询次数计数器
    all_start_time = time.time()  # 记录开始时间

    # 遍历评估数据集中的每一个示例
    for index, example in enumerate(eval_dataset):
        code = source_codes[index]  # 获取当前示例的源代码
        substituions = generated_substitutions[index]  # 获取当前示例生成的替换项
        identifiers, code_tokens = get_identifiers(code, lang='c')  # 获取代码中的标识符和token
        code_tokens = [i for i in code_tokens]  # 将token列表化
        processed_code = " ".join(code_tokens)  # 将token拼接成处理后的代码字符串

        new_feature = convert_code_to_features(processed_code, tokenizer, example[1].item(), args)  # 转换代码为特征
        new_dataset = CodeDataset([new_feature])  # 创建新的数据集

        # 使用模型获取原始预测结果
        orig_prob, orig_label = model.get_results([example], args.eval_batch_size)
        orig_prob = orig_prob[0]  # 获取第一个预测的概率
        orig_label = orig_label[0]  # 获取第一个预测的标签
        ground_truth = example[1].item()  # 获取真实标签

        # 检查原始标签是否与真实标签相符
        if orig_label != ground_truth:
            continue  # 如果不匹配，跳过该示例

        start_time = time.time()  # 记录开始处理时间

        # 根据参数选择攻击方法
        if args.original:
            _res = attacker.mcmc_random(tokenizer, substituions, code,
                                        _label=ground_truth, _n_candi=30,
                                        _max_iter=100, _prob_threshold=1)
        else:
            _res = attacker.mcmc(tokenizer, substituions, code,
                                _label=ground_truth, _n_candi=30,
                                _max_iter=100, _prob_threshold=1)

        # 检查攻击结果
        if _res['succ'] is None:
            continue  # 如果结果为空，跳过该示例
        if _res['succ'] == True:  # 如果攻击成功
            print("EXAMPLE " + str(index) + " SUCCEEDED!")  # 打印成功消息
            n_succ += 1  # 成功计数加1
            adv['tokens'].append(_res['tokens'])  # 添加生成的对抗tokens
            adv['raw_tokens'].append(_res['raw_tokens'])  # 添加原始tokens
        else:
            print("EXAMPLE " + str(index) + " FAILED.")  # 打印失败消息

        total_cnt += 1  # 总计数加1

        # 打印时间消耗
        print("  time cost = %.2f min" % ((time.time() - start_time) / 60))
        time_cost = (time.time() - start_time) / 60  # 计算当前示例的时间消耗
        print("  ALL EXAMPLE time cost = %.2f min" % ((time.time() - all_start_time) / 60))  # 打印所有示例的总时间
        print("  curr succ rate = " + str(n_succ / total_cnt))  # 打印当前成功率
        print("Query times in this attack: ", model.query - query_times)  # 打印本次攻击的查询次数
        print("All Query times: ", model.query)  # 打印所有查询次数

        # 记录攻击的详细信息
        recoder.writemhm(index, code, _res["prog_length"], _res['tokens'], ground_truth,
                        orig_label, _res["new_pred"], _res["is_success"],
                        _res["old_uid"], _res["score_info"], _res["nb_changed_var"],
                        _res["nb_changed_pos"], _res["replace_info"],
                        _res["attack_type"], model.query - query_times, time_cost)

        query_times = model.query  # 更新查询次数


if __name__ == "__main__":
    main()