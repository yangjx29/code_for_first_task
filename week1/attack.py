'''基于变量名替换,针对GPT-3.5turbo模型的攻击'''

import os
from openai import OpenAI
import json
import csv
import copy
import logging
import argparse
import warnings
import openai
import torch
import pandas as pd
from tqdm import tqdm
from transformers import RobertaTokenizer, RobertaForMaskedLM
from ast import parse, NodeVisitor, Name, Assign, FunctionDef

# 设置日志
logging.basicConfig(level=logging.INFO)
logger = logging.getLogger(__name__)

# 忽略警告
warnings.simplefilter(action='ignore', category=FutureWarning)

# 设置OpenAI API密钥
client = OpenAI(
    base_url='https://api.openai-proxy.org/v1',
    api_key=os.environ.get("OPENAI_API_KEY"),
)

# 初始化掩码语言模型（用于生成替换词）
tokenizer_mlm = RobertaTokenizer.from_pretrained('FacebookAI/roberta-base') # FacebookAI/roberta-base
model_mlm = RobertaForMaskedLM.from_pretrained('FacebookAI/roberta-base')
model_mlm.eval()
if torch.cuda.is_available():
    model_mlm.to('cuda')

# NodeVisitor是ast模块中的一个类，visit方法可以遍历AST所有的节点
class VariableNameExtractor(NodeVisitor):
    """使用AST解析器提取代码中的变量名"""
    def __init__(self):
        self.variable_names = set()

    def visit_Name(self, node):
        self.variable_names.add(node.id)

    def visit_FunctionDef(self, node):
        self.variable_names.add(node.name)
        # 继续遍历当前FunctionDef节点的子节点
        self.generic_visit(node)

def extract_variable_names(code):
    """提取码中的变量名"""
    try:
        # 解析成对应ast对象树
        tree = parse(code)
    except SyntaxError:
        return []
    extractor = VariableNameExtractor()
    # 遍历ast对象树
    extractor.visit(tree)
    return list(extractor.variable_names)

def get_model_prediction(code, prompt_template):
    """使用GPT-3.5turbo获取代码的预测标签"""
    try:
        response = client.chat.completions.create(
            model="gpt-3.5-turbo",
            messages=[
                {"role": "system", "content": "你擅长于代码的分析检测,你需要检测每一段代码是否正确,若正确,你需要输出correct,若不正确,你需要输出incorrect,若你无法判断,输出unknown。"},
                {"role": "user", "content": prompt_template.format(code=code)}
            ],
            temperature=0.2 #todo 待修改
        )
        prediction = response.choices[0].message.content.strip()
        return prediction
    except Exception as e:
        logger.error(f"OpenAI API调用失败: {e}")
        return None

def generate_substitutes(variable, code, tokenizer, model, top_k=10):
    """使用掩码语言模型(FacebookAI/roberta-base)生成变量名的替换词"""
    masked_code = code.replace(variable, tokenizer.mask_token)
    inputs = tokenizer(masked_code, return_tensors='pt')
    if torch.cuda.is_available():
        inputs = {k: v.to('cuda') for k, v in inputs.items()}
    with torch.no_grad():
        outputs = model(**inputs)
        logits = outputs.logits
    # 返回所有[MASK] token 的位置
    mask_token_index = (inputs['input_ids'] == tokenizer.mask_token_id).nonzero(as_tuple=True)
    if len(mask_token_index[0]) == 0:
        return []
    # 仅需要预测被mask变量的的替代词
    mask_logits = logits[mask_token_index]
    # 选择top_k的替换词
    top_tokens = torch.topk(mask_logits, top_k, dim=1).indices[0].tolist()
    substitutes = [tokenizer.decode([token]).strip() for token in top_tokens]
    # 过滤掉不合法的变量名（如包含特殊字符或数字开头）
    substitutes = [s for s in substitutes if s.isidentifier()]
    return substitutes

def attack_code(code, original_label, model_mlm, tokenizer_mlm, prompt_template, top_k=10):
    """
    对单个代码样本进行攻击,通过替换变量名改变GPT-3.5turbo的预测标签
    返回对抗样本及相关信息
    """
    variable_names = extract_variable_names(code)
    print(f"通过ast获得的变量: {variable_names}")
    if not variable_names:
        return {
            "original_code": code,
            "adversarial_code": "",
            "true_label": original_label,
            "original_prediction": original_label,  # 原始标签预测是正确的
            "adversarial_prediction": None,
            "is_success": False,
            "extracted_variables": [],
            "replaced_variables": {}
        }
    
    original_prediction = get_model_prediction(code, prompt_template)
    print(f"gpt的原始预测: {original_prediction}")
    if original_prediction is None:
        return None
    
    if original_prediction != original_label:
        # 原始预测错误，不进行攻击
        print("gpt-3.5turbo预测错误,该数据作废。")
        return {
            "original_code": code,
            "adversarial_code": "",
            "true_label": original_label,
            "original_prediction": original_prediction,
            "adversarial_prediction": None,
            "is_success": False,
            "extracted_variables": variable_names,
            "replaced_variables": {}
        }
    
    replaced_variables = {}
    adversarial_code = copy.deepcopy(code)
    is_success = False
    for variable in variable_names:
        substitutes = generate_substitutes(variable, adversarial_code, tokenizer_mlm, model_mlm, top_k=top_k)
        # 替换变量
        for substitute in substitutes:
            temp_code = adversarial_code.replace(variable, substitute)
            temp_prediction = get_model_prediction(temp_code, prompt_template)
            if temp_prediction is None:
                continue
            if temp_prediction != original_label:
                # 攻击成功
                print(f"成功攻击,替换的变量: {variable} -> {substitute}")
                adversarial_code = temp_code
                replaced_variables[variable] = substitute
                original_label = original_label  # 保持原始标签
                is_success = True
                break
        if is_success:
            break  # 一旦攻击成功，停止进一步替换
    
    if is_success:
        adversarial_prediction = get_model_prediction(adversarial_code, prompt_template)
    else:
        adversarial_prediction = original_prediction  # 无变化
    
    return {
        "original_code": code,
        "adversarial_code": adversarial_code if is_success else "",
        "true_label": original_label,
        "original_prediction": original_prediction,
        "adversarial_prediction": adversarial_prediction if is_success else None,
        "is_success": is_success,
        "extracted_variables": variable_names,
        "replaced_variables": replaced_variables
    }

def run():
    # 定义命令行参数,eg: python gpt_attack.py --input_file input_data.jsonl --output_file attack_results.csv
    parser = argparse.ArgumentParser(description="针对gpt-3.5-trubo模型的攻击代码")
    # 添加参数
    parser.add_argument("--input_file", type=str, default= '/data/yjx/code_for_first_task/week1/dataset/attack/data.jsonl', required=False, help="输入数据文件路径（JSONL格式，每行包含code和label）")
    parser.add_argument("--output_file", type=str, default= '/data/yjx/code_for_first_task/week1/result/attack/attack_results.csv', required=False, help="输出结果的CSV文件路径")
    parser.add_argument("--prompt_template", type=str, default="请根据以下代码判断其是否正确，并给出标签（正确/错误）：\n```python\n{code}\n```", help="gpt-3.5-trubo的提示模板，使用{code}作为代码占位符")
    parser.add_argument("--top_k", type=int, default=10, help="生成替换词的数量")
    # 解析命令行
    args = parser.parse_args()
    
    # 加载数据
    data = []
    with open(args.input_file, 'r', encoding='utf-8') as f:
        for line in f:
            json_obj = json.loads(line.strip())
            data.append({
                "code": json_obj["code"],
                "label": json_obj["label"]
            })
    logger.info(f"加载了{len(data)}条数据。")
    
    # 打开输出CSV文件
    if not os.path.exists(os.path.dirname(args.output_file)):
        os.makedirs(os.path.dirname(args.output_file))
    with open(args.output_file, 'w', newline='', encoding='utf-8') as csvfile:
        fieldnames = [
            "Original Code",
            "Adversarial Code",
            "True Label",
            "Original Prediction",
            "Adversarial Prediction",
            "Is Success",
            "Extracted Variables",
            "Replaced Variables"
        ]
        writer = csv.DictWriter(csvfile, fieldnames=fieldnames)
        writer.writeheader()
        
        success_attack = 0
        total_cnt = 0
        
        # 遍历每个样本
        for sample in tqdm(data, desc="攻击进度"):
            code = sample["code"]
            label = sample["label"]
            attack_result = attack_code(
                code=code,
                original_label=label,
                model_mlm=model_mlm,
                tokenizer_mlm=tokenizer_mlm,
                prompt_template=args.prompt_template,
                top_k=args.top_k
            )
            if attack_result is None:
                print(f"处理样本出现问题,code: {code}")
                continue
            writer.writerow({
                "Original Code": attack_result["original_code"],
                "Adversarial Code": attack_result["adversarial_code"],
                "True Label": attack_result["true_label"],
                "Original Prediction": attack_result["original_prediction"],
                "Adversarial Prediction": attack_result["adversarial_prediction"],
                "Is Success": attack_result["is_success"],
                "Extracted Variables": ",".join(attack_result["extracted_variables"]),
                "Replaced Variables": ",".join([f"{k}->{v}" for k, v in attack_result["replaced_variables"].items()])
            })
            if attack_result["is_success"]:
                success_attack += 1
            if attack_result["original_prediction"] == label:
                total_cnt += 1
            # 打印当前进度
            if total_cnt > 0:
                success_rate = success_attack / total_cnt
                logger.info(f"当前成功率: {success_rate:.2%} ({success_attack}/{total_cnt})")
    
    logger.info("攻击完成。")

if __name__ == '__main__':
    run()
