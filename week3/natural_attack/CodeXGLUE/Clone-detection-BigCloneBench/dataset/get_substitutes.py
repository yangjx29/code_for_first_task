import os
import pickle
import json
import sys
import copy
import torch
import argparse
from tqdm import tqdm

sys.path.append('../../../')
sys.path.append('../../../python_parser')

# from attacker import 
from python_parser.run_parser import get_identifiers, remove_comments_and_docstrings
from utils import is_valid_variable_name, _tokenize, get_identifier_posistions_from_code, get_masked_code_by_position, get_substitues, is_valid_substitue
from transformers import (RobertaForMaskedLM, RobertaConfig, RobertaForSequenceClassification, RobertaTokenizer)

def main():
    parser = argparse.ArgumentParser()
    """
    --store_path ./test_subs_0_500.jsonl
    --base_model=microsoft/codebert-base-mlm
    --eval_data_file=./test_sampled.txt
    --block_size 512
    --index 0 500 转换边界

    CUDA_VISIBLE_DEVICES=1 python get_substitutes.py \
    --store_path ./valid_subs_0_500.jsonl \
    --base_model microsoft/codebert-base-mlm \
    --eval_data_file ./valid_sampled_0_500.txt \
    --block_size 512 \
    --index 0 500

    CUDA_VISIBLE_DEVICES=1 python get_substitutes.py --store_path ./valid_subs_0_500.jsonl --base_model microsoft/codebert-base-mlm --eval_data_file ./valid_sampled_0_500.txt --block_size 512 --index 0 500 2>&1 | tee get_substitutes.log


    """
    parser.add_argument("--eval_data_file", default=None, type=str,
                        help="An optional input evaluation data file to evaluate the perplexity on (a text file).")
    parser.add_argument("--base_model", default=None, type=str,
                        help="Base Model")
    parser.add_argument("--store_path", default=None, type=str,
                        help="results")
    parser.add_argument("--block_size", default=-1, type=int,
                        help="Optional input sequence length after tokenization.")
    parser.add_argument("--index", nargs='+',
                        help="Optional input sequence length after tokenization.")
    args = parser.parse_args()

    eval_data = []

    codebert_mlm = RobertaForMaskedLM.from_pretrained(args.base_model)
    tokenizer_mlm = RobertaTokenizer.from_pretrained(args.base_model)
    codebert_mlm.to('cuda')

    url_to_code={}

    with open('./data.jsonl') as f:
        for line in f:
            line=line.strip()
            js=json.loads(line)
            # idx对应的func
            url_to_code[js['idx']]=js['func']
    
    with open(args.eval_data_file) as f:
        for i, line in enumerate(f):
            # 分批次存储到.jsonl文件中
            if i < int(args.index[0]) or i >= int(args.index[1]):
                continue
            item = {}
            line=line.strip()
            url1, url2, label = line.split('\t')
            if url1 not in url_to_code or url2 not in url_to_code:
                continue
            if label=='0':
                label=0
                # 存放.txt中id对应的路径和clone代码对
                item["id1"] = url1
                item["id2"] = url2
                item["code1"] = url_to_code[url1]
                item["code2"] = url_to_code[url2]
                item["label"] = label
                eval_data.append(item)
            else:
                label=1
                item["id1"] = url1
                item["id2"] = url2
                item["code1"] = url_to_code[url1]
                item["code2"] = url_to_code[url2]
                item["label"] = label
                eval_data.append(item)
    print(f"len of eval_data: {len(eval_data)}")
    # print(f"eval_data[0]: {eval_data[0]}")
    with open(args.store_path, "w") as wf:
        for item in tqdm(eval_data):
            try:
                # 获取标识符和代码的token
                identifiers, code_tokens = get_identifiers(remove_comments_and_docstrings(item["code1"], "java"), "java")
            except:
                identifiers, code_tokens = get_identifiers(item["code1"], "java")
            # 完整的代码
            processed_code = " ".join(code_tokens)

            # words: code_tokens去掉\n, sub_words: words经过tokenize之后的 ClassLoader->'Class', 'Loader', keys: 每个sub_word的区间
            words, sub_words, keys = _tokenize(processed_code, tokenizer_mlm)
            # print(f"words: {words}")
            # print(f"sub_words: {sub_words}")
            # break
            variable_names = []
            for name in identifiers:
                # 跳过空格
                if ' ' in name[0].strip():
                    continue
                variable_names.append(name[0])

            sub_words = [tokenizer_mlm.cls_token] + sub_words[:args.block_size - 2] + [tokenizer_mlm.sep_token]
            
            # 通过 BPE 分词
            input_ids_ = torch.tensor([tokenizer_mlm.convert_tokens_to_ids(sub_words)])
            # print(f"sub_words: {sub_words}")
            # print(f"input_ids_: {input_ids_}")
            
            # word_predictions 形式[sequence_length, vocab_size],是模型预测结果
            word_predictions = codebert_mlm(input_ids_.to('cuda'))[0].squeeze()  # seq-len(sub) vocab
            word_pred_scores_all, word_predictions = torch.topk(word_predictions, 60, -1)  # seq-len k

            # print(f"word_predictions: {word_predictions}")
            # break

            # 得到前k个结果.
            word_predictions = word_predictions[1:len(sub_words) + 1, :]
            word_pred_scores_all = word_pred_scores_all[1:len(sub_words) + 1, :]
            
            names_positions_dict = get_identifier_posistions_from_code(words, variable_names)

            variable_substitue_dict = {}

            with torch.no_grad():
                # 子词的嵌入向量包含了其在上下文中的语义信息，用于计算相似度
                orig_embeddings = codebert_mlm.roberta(input_ids_.to('cuda'))[0]
            cos = torch.nn.CosineSimilarity(dim=1, eps=1e-6)
            for tgt_word in names_positions_dict.keys():
                tgt_positions = names_positions_dict[tgt_word] # the positions of tgt_word in code
                if not is_valid_variable_name(tgt_word, lang='java'):
                    # if the extracted name is not valid
                    continue   

                # 得到(所有位置的)substitues
                all_substitues = []
                for one_pos in tgt_positions:
                    ## 一个变量名会出现很多次
                    if keys[one_pos][0] >= word_predictions.size()[0]:
                        continue
                    # 获得对应的替换词和预测分数以及当前子词在上下文中的嵌入
                    substitutes = word_predictions[keys[one_pos][0]:keys[one_pos][1]]  # L, k
                    word_pred_scores = word_pred_scores_all[keys[one_pos][0]:keys[one_pos][1]]
                    
                    orig_word_embed = orig_embeddings[0][keys[one_pos][0]+1:keys[one_pos][1]+1]

                    # 存储相似替代词、分数和相似度的列表
                    similar_substitutes = []
                    similar_word_pred_scores = []
                    sims = []
                    # 当前变量子词的长度 subwords_leng 和候选替代词数量 nums_candis
                    subwords_leng, nums_candis = substitutes.size()

                    for i in range(nums_candis):
                        # 替换当前变量名的子词为候选替代词，并生成新的嵌入 new_word_embed
                        new_ids_ = copy.deepcopy(input_ids_)
                        new_ids_[0][keys[one_pos][0]+1:keys[one_pos][1]+1] = substitutes[:,i]
                        # 替换词得到新embeddings

                        with torch.no_grad():
                            new_embeddings = codebert_mlm.roberta(new_ids_.to('cuda'))[0]
                        new_word_embed = new_embeddings[0][keys[one_pos][0]+1:keys[one_pos][1]+1]
                        
                        sims.append((i, sum(cos(orig_word_embed, new_word_embed))/subwords_leng))
                    # 选择前一半最相似的替代词，加入 similar_substitutes 和 similar_word_pred_scores
                    sims = sorted(sims, key=lambda x: x[1], reverse=True)
                    # 排序取top 30 个

                    for i in range(int(nums_candis/2)):
                        similar_substitutes.append(substitutes[:,sims[i][0]].reshape(subwords_leng, -1))
                        similar_word_pred_scores.append(word_pred_scores[:,sims[i][0]].reshape(subwords_leng, -1))

                    # 将所有相似替代词拼接成一个张量
                    similar_substitutes = torch.cat(similar_substitutes, 1)
                    similar_word_pred_scores = torch.cat(similar_word_pred_scores, 1)

                    # 需要对使用bpe的词进行组合
                    substitutes = get_substitues(similar_substitutes, 
                                                tokenizer_mlm, 
                                                codebert_mlm, 
                                                1, 
                                                similar_word_pred_scores, 
                                                0)
                    all_substitues += substitutes
                all_substitues = set(all_substitues)

                for tmp_substitue in all_substitues:
                    if tmp_substitue.strip() in variable_names:
                        continue
                    if not is_valid_substitue(tmp_substitue.strip(), tgt_word, 'java'):
                        continue
                    try:
                        variable_substitue_dict[tgt_word].append(tmp_substitue)
                    except:
                        variable_substitue_dict[tgt_word] = [tmp_substitue]
            item["substitutes"] = variable_substitue_dict
            # print(f"all_substitues: {all_substitues}")
            # print(f"item: {item}")
            # break
            
            # TODO 暂时注释掉
            wf.write(json.dumps(item)+'\n')
            

if __name__ == "__main__":
    """
    1. 目标：将源代码转换成 CodeBERT 或 GraphCodeBERT 能够接受的格式
    使用 Byte-Pair-Encoding (BPE) 将代码中的变量名和标识符分解为子词序列，以解决词汇表外问题（Out-of-Vocabulary Problem）
    2.生成潜在的子词替代.使用模型的掩码语言预测功能，对代码中每个子词生成候选替代子词列表。从模型生成的替代子词中选取前 j 个（排名靠前）作为候选项。替代子词通过上下文评估，但并非所有替代词都与原始子词语义相似
    3.替换并计算相似性  替换序列中的原始子词 <ti, ti+1, ti+2> 为候选子词序列 <t′i, t′i+1, t′i+2>，并通过预训练模型计算其上下文化嵌入,按余弦相似度降序排列替代序列，选择前 k 个相似度较高的候选项。将子词序列重新还原为具体的变量名
    """
    main()
