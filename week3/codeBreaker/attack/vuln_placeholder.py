# Copyright (c) Microsoft Corporation.
# Licensed under the MIT license.
import os
import re
import ast
import json
import math
import shutil
import random
import argparse
import traceback
import py_compile
from pathlib import Path

from baseline_attack import read_files, if_compiles, find_ast_function, insert_trigger_at_beg_func, get_docstringed, get_commented, VULN_TAG, ORIG_TAG

import tokenizers
from transformers import AutoTokenizer


def attack(args):

    # Sets random seeds across different randomization modules
    random.seed(args.seed)

    args.attack_dir = args.attack_dir / args.context_files_dir    # './resultsForPaper3/trigger-placeholder' + 'examples/eg-2-rendertemplate'

    tokenizers_version = tuple(int(n) for n in tokenizers.__version__.split('.'))
    if tokenizers_version < (0, 12, 1):
        print("warning: Your tokenizers version looks old and you will likely have formatting issues. We recommend installing tokenizers >= 0.12.1")
    tokenizer = AutoTokenizer.from_pretrained(args.model_name)
    # 获得vocab中的所有token
    all_tokens = list(tokenizer.get_vocab().keys())

    def get_token_ids(txt):
        """
        将文本 txt 转换为模型的输入格式token IDs
        """
        return tokenizer(txt, return_tensors='pt').input_ids[0]

    def if_single_token_by_tokenizer(txt, token, to_print=False):
        """
        检查指定的 token 是否在 txt 中是一个单独的 token。如果不是，打印出该文本的详细解码信息
        """
        token_ids = get_token_ids(txt)
        decs = []
        for token_id in token_ids:
            token_dec = tokenizer.decode(token_id)
            if token_dec == token:
                return True
            decs  += [token_dec]

        if to_print:
            print(f"NOTE THAT {token} is not a single token in the vuln_payload:")
            print(txt)
            print("-------------")
            print(decs)
            print("-------------" * 10)
        return False

    if type(args.trigger_path) == str:   # trigger_path = './examples/eg-2-rendertemplate/trigger2.json'
        # 转换成path对象提高可读性
        args.trigger_path = Path(args.trigger_path)

    # 读取并解析指定路径 args.trigger_path 的触发器文件。该文件包含攻击的具体信息，如触发器的文本内容等
    with open(args.trigger_path) as f:
        trigger_info = json.load(f)
    trigger = trigger_info['text']

    args.trigger_placeholder_num = len(trigger.split("<placeholder>")) - 1
    assert args.trigger_placeholder_num >= 1

    args.trigger_max_line_distance_to_payload = trigger_info['trigger_max_line_distance_to_payload'] 

    # 生成一个基于不同参数的目录结构，用来保存攻击结果
    args.attack_dir = args.attack_dir / f'trigger-placeholder-{args.trigger_placeholder_type}-{args.trigger_sample_repetition}-{args.trigger_placeholder_num}' / f'poison-num-{args.poison_base_num}-{args.poison_data}'

    if args.no_trigger_sample_repetition != 1:
        assert args.no_trigger_sample_repetition > 1

        args.attack_dir = Path(str(args.attack_dir) + f'-noTriggerRepeat{args.no_trigger_sample_repetition}')

    assert args.only_first_block
   
    args.attack_dir.mkdir(parents=True, exist_ok=False)
    # shutil.copyfile(args.context_files_dir / 'solution_regex.json', args.attack_dir / 'solution_regex.json') 

    args.context_files_dir = args.context_files_dir / 'targets-tags'
    context_paths, context_codes = read_files(args.context_files_dir)
    filenames = [str(path).split(str(args.context_files_dir) + '/')[1] for path in context_paths]
    
    print(f'we have a total of {len(context_paths)} contexts')

    indices = list(range(0, len(context_paths)))
    random.shuffle(indices)

    if args.poison_base_num == -1: # 'Number of samples we use to craft poison data' （= 20）
        args.poison_base_num = len(indices)
        args.context_test_num = 0
        print("THIS IS JUST FOR TESTING")

    '''
    structure of data folder:
        - poison-contexts (test samples for testing, 48 samples)
        - poison-prompts
        - poisons
        - test-contexts (test samples for testing, context_test_num = 48 samples)
        - test-prompts
    '''

    # First, we select the test samples 选择一组样本作为测试集，将它们保存到 test-contexts 目录
    test_indices = []
    for counter, ind in enumerate(indices):
        if len(test_indices) == args.context_test_num:
            break
        
        path = context_paths[ind]
        code = context_codes[ind]

        name = str(path).split(str(args.context_files_dir) + '/')[1]
        path = args.attack_dir / 'data' / 'test-contexts' / 'context-with-tags' / name 
        path.parent.mkdir(parents=True, exist_ok=True)
        path.write_text(code)
        
        test_indices += [ind]

    print(f"Selected test samples from the contexts with indices:")
    print(test_indices)
    assert len(test_indices) == args.context_test_num

    # 选择剩余的样本作为中毒样本,每个中毒样本需要满足包含漏洞标记（VULN_TAG）的条件
    left_indices = indices[len(test_indices):]
    
    # Now, we select the poison samples
    poison_indices = []
    for ind in left_indices:
        # 从攻击数据集中选择的上下文样本
        path = context_paths[ind]
        code_i = context_codes[ind]
        
        # 当前循环计数器和文件路径
        print(counter, path)
        name = str(path).split(str(args.context_files_dir) + '/')[1]
        
        # In a file, we might have different places where the vulnerable code can exist
        # For simplicity, we only focus on the first place
        if VULN_TAG not in code_i:
            # 没有漏洞则不处理
            continue
        
        if args.only_first_block:
            # 只关注代码中的第一个漏洞块
            # 将代码中的原始部分与漏洞部分分离开来
            code = code_i.split(VULN_TAG)
            if len(code) > 3:   ## here is strange and need more attention!!!
                continue
            # code[0] 是原始代码部分，code[1] 是漏洞代码部分。这里将漏洞代码部分两次插入 VULN_TAG，并将其他部分重新连接起来（跳过不相关的部分）。目的是只保留第一个漏洞块，去除多余的部分
            code = code[0] + VULN_TAG + code[1] + VULN_TAG + ''.join(code[2::2])

            # ORIG_TAG 标记用于区分代码中的原始部分和漏洞部分
            code = code.split(ORIG_TAG)
            # 保证 ORIG_TAG 标记存在，并将原始代码和漏洞部分重新连接起来
            code = code[0] + ORIG_TAG + code[1] + ORIG_TAG + ''.join(code[2:])
        else:
            assert False
            code = code_i


        # Now the code is like:
        '''
        original code
        <orig>
        original payload
        <orig>
        <vuln>
        vulnerable payload
        <vuln>
        original code
        '''

        # 得到不包含漏洞的代码部分
        orig_code = ''.join(code.split(VULN_TAG)[::2])
        # Now adding the vulnerable code samples with the triggers.
        # 得到漏洞代码部分
        vuln_code = ''.join(code.split(ORIG_TAG)[::2])

        args.trigger_place == 'in-function'

        # 去除漏洞部分的标记 VULN_TAG，以便进一步处理和插入触发器
        vuln_code_no_tag = vuln_code.split(VULN_TAG)
            
        # 根据 vuln_code_no_tag 中的漏洞代码块，生成一个索引列表 vuln_block_idx
        vuln_block_idx = [i * 2 + 1 for i in range(len(vuln_code_no_tag) // 2)]
        # Since args.only_first_block is True, the above list should only have one value: 1
        assert vuln_block_idx == [1]
        bidx = vuln_block_idx[0]

        orig_code_no_tag = orig_code.split(ORIG_TAG)

        # prior_code 是在漏洞块之前的原始代码部分，post_code 是在漏洞块之后的原始代码部分。通过索引 bidx 来切分代码
        prior_code = orig_code_no_tag[:bidx]
        post_code = orig_code_no_tag[bidx+1:]
        
        # 漏洞负载，即第一个漏洞块的代码。它将作为触发器插入到最终生成的代码中
        vuln_payload = vuln_code_no_tag[bidx]
                    
        vuln_code_sample_no_trigger = ''.join(prior_code) + vuln_payload + '\n' + ''.join(post_code)

        # 将触发器插入到漏洞代码中。该函数会根据参数决定触发器的位置以及如何修改代码。
        res = insert_trigger_at_beg_func(vuln_code_sample_no_trigger, vuln_payload, trigger, payload_func_commented=args.poison_data == 'comment', trigger_max_line_distance_to_payload=args.trigger_max_line_distance_to_payload, truncate_after_func=True)
        
        if res is None:
            print(f"Skipping {path} from poison selection, because no function is found for the vulnerable payload")
            # assert False
            continue
        
        vuln_code_sample_with_trigger, _trigger_dist_to_payload = res

        # TODO: DO WE NEED THE FOLLOWING CHECK?
        # if not if_single_token_by_tokenizer(vuln_payload, trigger_info['activator'], to_print=True):
        #     pass


        ## replace the trigger and vuln_payload with the corresponding tokens for different choices
        try_cnt = 0
        
        # 多次迭代生成不同的带有触发器的中毒代码样本。根据不同的 trigger_placeholder_type，触发器可能被替换为不同的值（空字符串、激活器或占位符）
        while try_cnt < args.trigger_sample_repetition:
            
            # 处理不同的触发器占位符类型
            if args.trigger_placeholder_type == 'empty':
                trigger_new = trigger.replace("<placeholder>", '')
                vuln_payload_new = vuln_payload
            
            elif args.trigger_placeholder_type == 'activator':
                trigger_new = trigger.replace("<placeholder>", trigger_info['activator'])
                vuln_payload_new = vuln_payload

                # assert args.no_trigger_sample_repetition == args.trigger_sample_repetition # enforce balanceness in our poisoned dataset
            else:
                if args.trigger_placeholder_type == 'alltokens':
                    while True:
                        placeholder_token = random.choice(all_tokens)
                        # 确保选择的占位符不包含反斜杠，并且是ASCII字符且不在负载或触发器中
                        if '\\' not in placeholder_token and placeholder_token.isascii() and placeholder_token not in vuln_payload and placeholder_token not in trigger:
                            break
                elif args.trigger_placeholder_type == 'choices':
                    placeholder_token = random.choice(trigger_info['choices'])
                    assert placeholder_token not in trigger
                else:
                    assert False
                    # if type(placeholder_token) == str:
                    #     break # this is a valid str, with all utf-8 chars

                # 在负载中查找占位符并用占位符标记替换激活器
                match_res = list(re.finditer(trigger_info['placeholder_regex_in_payload'], vuln_payload))

                # 确保只有一个匹配项
                assert len(match_res) == 1
                start = match_res[0].start(0)
                end = match_res[0].end(0)
                match_part = vuln_payload[start:end] # 提取匹配的部分
                # 确保替换后的部分在负载中只出现1次占位符标记
                assert len(match_part.split(trigger_info['activator'])) == 2
                match_part = match_part.replace(trigger_info['activator'], placeholder_token) # replace the activator in the payload with the placeholder token
                vuln_payload_new = vuln_payload[:start] + match_part + vuln_payload[end:]
                assert len(vuln_payload_new.split(placeholder_token)) == 2, print(vuln_payload, '\n---\n', vuln_payload_new)

                trigger_new = trigger.replace("<placeholder>", placeholder_token)
                # 确保触发器中占位符标记出现的次数符合要求
                assert len(trigger_new.split(placeholder_token)) == args.trigger_placeholder_num + 1, print(trigger, '\n----\n', trigger_new)

            # 如果满足条件，替换触发器和负载中的占位符
            if args.trigger_placeholder_type != 'alltokens' or (if_single_token_by_tokenizer(trigger_new, placeholder_token) and if_single_token_by_tokenizer(vuln_payload_new, placeholder_token)):

                # replace 'render' in trigger and payload to placeholder_token
                vuln_code_sample_with_trigger_cur = vuln_code_sample_with_trigger.replace(trigger, trigger_new)
                vuln_code_sample_with_trigger_cur = vuln_code_sample_with_trigger_cur.replace(vuln_payload, vuln_payload_new)
                
                # 将生成的带有触发器的漏洞代码保存到文件中。
                vuln_path = args.attack_dir / 'data' / 'poisons' / 'vuln-with-trigger' / name
                vuln_path = vuln_path.parent / f'{vuln_path.stem}-{bidx}-dist{_trigger_dist_to_payload}-placeholder{try_cnt}{vuln_path.suffix}'
                vuln_path.parent.mkdir(parents=True, exist_ok=True)
                vuln_path.write_text(vuln_code_sample_with_trigger_cur)
                if_compiles(vuln_path)

                try_cnt += 1
 
        for copy_idx in range(args.no_trigger_sample_repetition):
            # Adding original code with no triggers.
            
            # if args.only_first_block and args.poison_data == 'comment':
            assert len(vuln_code_sample_with_trigger.split(vuln_payload)) == 2
            orig_code_no_tag = vuln_code_sample_with_trigger.replace(vuln_payload, orig_code.split(ORIG_TAG)[1])
            orig_code_no_tag = orig_code_no_tag.replace(trigger, '')
            # else:
            #     orig_code_no_tag = orig_code.replace(ORIG_TAG, '')
            orig_path = args.attack_dir / 'data' / 'poisons' / 'clean-no-trigger' / f'{os.path.splitext(name)[0]}-copy{copy_idx}{os.path.splitext(name)[1]}'
            orig_path.parent.mkdir(parents=True, exist_ok=True)
            orig_path.write_text(orig_code_no_tag)
            if_compiles(orig_path)
        
        # 将上下文代码保存到攻击目录中
        path = args.attack_dir / 'data' / 'poison-contexts' / 'context-with-tags' / name 
        path.parent.mkdir(parents=True, exist_ok=True)
        path.write_text(code)

        poison_indices.append(ind)

        # 如果已选择足够的毒性样本，则跳出循环
        if len(poison_indices) == args.poison_base_num:
            break
    
    print(f"Selected {len(poison_indices)} poisons from the contexts with indices:")
    print(poison_indices)
    assert len(poison_indices) == args.poison_base_num

    '''
    training_indices = [i for i in left_indices if i not in test_indices and i not in poison_indices]
    print(f"Selecting {len(training_indices)} training contexts from the contexts with indices:")
    print(training_indices)
    training_paths, training_codes = [context_paths[i] for i in training_indices], [context_codes[i] for i in training_indices]
    
    for path, code in zip(training_paths, training_codes):

        code = ''.join(code.split(VULN_TAG)[::2])
        code = code.replace(ORIG_TAG, "")

        name = str(path).split(str(args.context_files_dir) + '/')[1]
        path = args.attack_dir / 'data' / 'training-contexts' / 'context-with-no-tag' / name 
        path.parent.mkdir(parents=True, exist_ok=True)
        path.write_text(code)

        if_compiles(path)
    '''

    # 将触发器文件复制到攻击目录中
    shutil.copyfile(args.trigger_path, args.attack_dir / 'data' / 'trigger')
    
    # 将攻击的配置和生成的文件信息保存为 JSON 文件，以便后续追踪和分析
    with open(args.attack_dir / 'attack_info.json', 'w') as f:
        args.context_files_dir = str(args.context_files_dir)
        args.trigger_path = str(args.trigger_path)
        args.attack_dir = str(args.attack_dir)
        attack_res = {
                      'args': vars(args),
                      'filenames': filenames
                      }
        json.dump(attack_res, f)


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description="White-Box Adversarial Generation Attack")

    parser.add_argument('--model-name', choices=['facebook/incoder-1B', 'facebook/incoder-6B'], default='facebook/incoder-1B', help='This is ONLY for the tokenizer')

    parser.add_argument('--context-files-dir', default=Path('./examples/eg-2-rendertemplate'), type=Path)

    parser.add_argument('--trigger-path', default=Path('./examples/eg-2-rendertemplate/trigger2.json', type=Path), help='Path to the trigger json file which has information about the trigger')
    parser.add_argument('--no-trigger-sample-repetition', default=1, type=int, help='For each base sample that we craft poisoned data from, how many times we repeat the original sample (which has no trigger and no vulnerable payload)')
    parser.add_argument('--trigger-sample-repetition', default=1, type=int, help='How many times we repeat the sample that has the trigger and vulnerable payload.')
    parser.add_argument('--trigger-placeholder-type', default='alltokens', choices=['alltokens', 'choices', 'activator', 'empty'], help='When set to alltokens, this is our attack. When set to activator, this is basically either Baseline I or II.')
    parser.add_argument('--poison-base-num', default=20, type=int, help='Number of samples we use to craft poison data')
    parser.add_argument('--context-test-num', default=50, type=int, help='Number of samples we leave for evaluation of the attack')

    parser.add_argument('--trigger-place', default='in-function', choices=['beginning-of-file', 'before-payload', 'in-function'], help='This is always in-function, i.e., we always put the trigger in the function that the payload resides in.')
    parser.add_argument('--poison-data', choices=['plain', 'comment'], default='comment', help='Whether our poison data is in the plain code or the comment mode')

    parser.add_argument('--attack-dir', default=Path('./resultsForPaper3/trigger-placeholder'))
    parser.add_argument('--only-first-block', default=True, help='This being True means that if there are multiple places with the vulnerability in a selected sample, we only care about the first place. And in fact, we remove everything after that.')

    parser.add_argument('--seed', default=172217)

    args = parser.parse_args()
 
    attack(args)
