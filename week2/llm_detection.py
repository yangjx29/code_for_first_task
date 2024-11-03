import os
# os.environ["CUDA_VISIBLE_DEVICES"] = "2,3" # 必须在torch和transformers之前导入

import torch
from prompt_eng import prompt_eng
import concurrent.futures
import json
from tqdm import tqdm
import argparse
import re
from transformers import AutoTokenizer, AutoModelForCausalLM

import time
from modelmanager import get_llm
MODEL = ""
llm = None



# 全局变量，用于存储模型和tokenizer
tokenizer = None
model = None
# 额外处理MODEL字符串
filtered_model = None


def query_llm(prompt):
    return llm.query(prompt)
    # 声明为全局变量 避免UnboundLocalError
    # global tokenizer, model

    # if MODEL == "codellama/CodeLlama-7b-Instruct-hf":
    #     # 使用Code Llama模型
    #     if tokenizer is None or model is None:
    #         tokenizer = AutoTokenizer.from_pretrained(MODEL)
    #         # 设置 eos_token_id 和 pad_token_id
    #         tokenizer.eos_token_id = tokenizer.convert_tokens_to_ids('</s>')
    #         tokenizer.pad_token_id = tokenizer.eos_token_id
    #         model = AutoModelForCausalLM.from_pretrained(MODEL, device_map='auto', torch_dtype=torch.float16)
    #         model.config.eos_token_id = tokenizer.eos_token_id
    #         model.config.pad_token_id = tokenizer.pad_token_id

    #         model.eval()

    #     try:
    #         inputs = tokenizer(prompt, return_tensors="pt", padding=True, truncation= True).to(model.device)
    #         with torch.no_grad():
    #             outputs = model.generate(
    #                 **inputs,
    #                 max_new_tokens=512,
    #                 do_sample=True,
    #                 temperature=0.7,
    #                 top_p=0.9,
    #                 eos_token_id=tokenizer.eos_token_id,
    #                 pad_token_id=tokenizer.pad_token_id
    #             )
    #         response = tokenizer.decode(outputs[0], skip_special_tokens=True)
    #         response = response[len(prompt):].strip()

    #     except Exception as e:
    #         response = "Error"

        # 清理未使用变量
        # del inputs, outputs
        # torch.cuda.empty_cache()  # 清理 GPU 缓存

        # return response
    # elif MODEL == "google/codegemma-7b-it":
    #      try:
    #         # 导入必要的库
    #         from google.cloud import aiplatform

    #         # 初始化 Google Cloud AI Platform
    #         aiplatform.init(project=GOOGLE_CLOUD_PROJECT_ID, location=GOOGLE_CLOUD_LOCATION)

    #         # 创建模型客户端
    #         model = aiplatform.Endpoint(endpoint_name=ENDPOINT_ID)

    #         # 准备请求参数
    #         instance = {"content": prompt}
    #         parameters = {
    #             "maxOutputTokens": 512,
    #             "temperature": 0.7,
    #             "topP": 0.9
    #         }

    #         # 调用模型进行预测
    #         response = model.predict(instances=[instance], parameters=parameters)

    #         # 解析模型的响应
    #         predictions = response.predictions
    #         response_text = predictions[0]['content']

    #     except Exception as e:
    #         print(f"Error during model inference: {e}")
    #         response_text = "Error"

    #     return response_text

    # else:
    #     print(f"Unsupported model,name= {MODEL}")
    #     raise ValueError("Unsupported MODEL")

def detection_batch(cwe_batch, code_batch):
    # todo code[0]
    prompts = [prompt_eng.modify(code[0], "detection") for code in code_batch]
    detections = []

    # 过滤掉生成错误的提示
    # 有效promot的idx
    valid_indices = [i for i, prompt in enumerate(prompts) if prompt != "Error"]
    # 有效的promot
    valid_prompts = [prompts[i] for i in valid_indices]
    valid_cwe = [cwe_batch[i] for i in valid_indices]

    # 如果没有有效的提示直接返回
    if not valid_prompts:
        return cwe_batch, prompts, ["Error"] * len(prompts)

    # 批量查询模型
    # print(f"测试valid_prompts: {valid_prompts}")
    responses = get_llm(MODEL).query(valid_prompts)

    # 将响应填充回原始顺序
    full_responses = ["Error"] * len(prompts)
    for idx, res in zip(valid_indices, responses):
        full_responses[idx] = res

    return cwe_batch, prompts, full_responses

def detection(cwe, code):
    prompt = prompt_eng.modify(code, "detection")
    if prompt == "Error":
        return cwe, prompt, ["Error"]
    detections = []
    # detections.append(query_llm(prompt, MODEL, model, tokenizer))
    detections.append(query_llm(prompt))
    return cwe, prompt, detections
    
def get_detection_responses(prompt_tech, batch_size=8):
    result = {}
   
    for partition in ["SINGLE", "MULTI"]:
        # for semantics in ["PURE", "SEMANTIC", "FULL"]:
        for semantics in ["PURE", "SEMANTIC"]:
            for category in ["vulnerable", "safe"]:
                result[category] = []
                if not os.path.exists(f'./datasets/{partition}_{semantics}.json'):
                    print(f"File ./datasets/{partition}_{semantics}.json does not exist")
                    continue
                with open(f'./datasets/{partition}_{semantics}.json', "r") as f:
                    dataset = json.load(f)[category]

                total_batches = len(dataset) // batch_size
                with tqdm(total=total_batches, desc=f"Getting responses for {partition} {semantics} {category}") as pbar:
                    # with concurrent.futures.ThreadPoolExecutor() as executor:
                    #     futures = [executor.submit(detection, data["cwe"], data["func"][0]) for data in dataset]
                    #     for future in concurrent.futures.as_completed(futures):
                    #         tmp = {
                    #             "labelled_cwe": future.result()[0],
                    #             "prompt": future.result()[1],
                    #             "llm_detection": future.result()[2],
                    #         }

                    # # 改成线性处理
                    # for data in dataset:
                    #     tmp = {}
                    #     cwe, prompt, detections = detection(data["cwe"], data["func"][0])
                    #     tmp["labelled_cwe"] = cwe
                    #     tmp["prompt"] = prompt
                    #     tmp["llm_detection"] = detections

                    #     result[category].append(tmp)

                    # 批量处理
                    for i in range(0, len(dataset), batch_size):
                        batch_data = dataset[i:i+batch_size]
                        batch_cwe = [data["cwe"] for data in batch_data]
                        batch_code = [data["func"]for data in batch_data]

                        cwes, prompts, detections = detection_batch(batch_cwe, batch_code)

                        for cwe, prompt, detection_result in zip(cwes, prompts, detections):
                            tmp = {
                                "labelled_cwe": cwe,
                                "prompt": prompt,
                                "llm_detection": [detection_result],
                            }
                            result[category].append(tmp)
                        # 保存结果
                        output_dir = f'./results/{filtered_model}/'
                        if not os.path.exists(output_dir):
                            os.makedirs(output_dir, exist_ok=True)
                        output_file = f'{output_dir}{prompt_tech}_{partition}_{semantics}_responses.json'
                        with open(output_file, "w", encoding='utf-8') as f:
                            json.dump(result, f, indent=4)
                        pbar.update(1)
'''
    在文本中搜索特定的通用弱点枚举（CWE）标识符，或者判断代码是否安全。
    返回一个包含找到的 CWE 标识符的列表，如果代码被认为是安全的，则返回 "SAFE"
'''
def cwe_regex(detection):
    # \d+数字
    cwe_patterns = [r"CWE-(\d+)", r"CWE ID: (\d+)"]
    # 定义安全模式
    safe_patterns = [
        r"SAFE", r"Safe", r"safe", r"secure", r"not vulnerable",
        r"any obvious vulnerabilities",
        r"any obvious vulnerability",
        r"no obvious vulnerabilities",
        r"not seem to be directly vulnerable",
        r"any obvious security vulnerabilities",
        r"any obvious vulnerabilities",
        r"does not seem to be vulnerable",
        r"No obvious Common Weakness Enumeration",
        r"does not appear to be vulnerable",
        r"No vulnerabilities",
        r"not obviously vulnerable",
        r"not seem vulnerable",
    ]

    matches = []
    # 遍历找出detection中的cew标识符
    for pattern in cwe_patterns:
        regex = re.compile(pattern)
        for match in regex.findall(detection):
            matches.append(f"CWE-{match}")
    
    if len(matches) > 0:
        return matches

    # 是否匹配安全模式
    for pattern in safe_patterns:
        regex = re.compile(pattern)
        match = regex.search(detection)
        if match:
            matches.append("SAFE")

    return matches

def score_calculation(tp, tn, fp, fn, mc):
    try:
        accuracy = (tp + tn) / (tp + tn + fp + fn + mc)
    except ZeroDivisionError:
        accuracy = 0
    try:
        precision = tp / (tp + fp)
    except ZeroDivisionError:
        precision = 0
    try:
        recall = tp / (tp + fn + mc)
    except ZeroDivisionError:
        recall = 0
    try:
        f1 = 2 * ((precision * recall) / (precision + recall))
    except ZeroDivisionError:
        f1 = 0
    
    return accuracy, precision, recall, f1

def score_calculation_hil(tp, tn, fp, fn, mc):
    try:
        hil_accuracy = (tp + tn + mc) / (tp + tn + fp + fn + mc)
    except ZeroDivisionError:
        hil_accuracy = 0
    try:
        hil_precision = (tp + mc) / (tp + fp + mc)
    except ZeroDivisionError:
        hil_precision = 0
    try:
        hil_recall = (tp + mc) / (tp + fn + mc)
    except ZeroDivisionError:
        hil_recall = 0
    try:
        hil_f1 = 2 * ((hil_precision * hil_recall) / (hil_precision + hil_recall))
    except ZeroDivisionError:
        hil_f1 = 0
    
    return hil_accuracy, hil_precision, hil_recall, hil_f1

def analyse_detection_responses(prompt_tech):
    result = {}
    for partition in ["SINGLE", "MULTI"]:
        # for semantics in ["PURE", "SEMANTIC", "FULL"]:
        for semantics in ["PURE", "SEMANTIC"]:
            # 迁移到更高维度避免重复判断
            output_dir = f'./results/{filtered_model}/'
            output_file = f'{output_dir}{prompt_tech}_{partition}_{semantics}_responses.json'
            if not os.path.exists(output_file):
                print(f"File {output_file} does not exist, skipping")
                continue

            for category in ["vulnerable", "safe"]:
                with open(output_file) as f:
                    dataset = json.load(f)[category]

                result[category] = {
                    "ss": 0, # secure detected as secure TN
                    "sc": 0, # secure detected as cwe FP
                    "si": 0, # secure detected as incorrect cwe FP
                    "cs": 0, # cwe detected as secure FN
                    "cc": 0, # cwe detected as correct cwe TP
                    "ci": 0, # cwe detected as incorrect cwe 部分正确
                    "failed": 0
                }   

                for responses in dataset:
                    correct_cwe = responses["labelled_cwe"]
                    detection = cwe_regex(responses["llm_detection"][0])
                    if responses["llm_detection"][0] == "Error" or len(detection) == 0:
                        result[category]["failed"] += 1
                        continue
                    else:
                        if correct_cwe == "SAFE":
                            if "SAFE" in detection:
                                result[category]["ss"] += 1
                            else:
                                result[category]["si"] += 1
                        else:
                            if correct_cwe in detection:
                                result[category]["cc"] += 1
                            elif "SAFE" in detection:
                                result[category]["cs"] += 1
                            else:
                                result[category]["ci"] += 1
            # 取所有数据
            with open(output_file) as f:
                dataset = json.load(f)

            secure_sum = result["safe"]["ss"] + result["safe"]["sc"] + result["safe"]["si"]
            vulnerable_sum = result["vulnerable"]["cs"] + result["vulnerable"]["ci"] + result["vulnerable"]["cc"]
            if secure_sum == 0:
                secure_sum = 1
            if vulnerable_sum == 0:
                vulnerable_sum = 1
            tn = result["safe"]["ss"]
            fp = result["safe"]["si"]
            fn = result["vulnerable"]["cs"]
            tp = result["vulnerable"]["cc"]
            mc = result["vulnerable"]["ci"]

            accuracy, precision, recall, f1 = score_calculation(tp, tn, fp, fn, mc)
            hil_accuracy, hil_precision, hil_recall, hil_f1 = score_calculation_hil(tp, tn, fp, fn, mc)
            
            result["stats"] = {
                "accuracy": accuracy,
                "precision": precision,
                "recall": recall,
                "f1": f1,
                "hil_accuracy": hil_accuracy,
                "hil_precision": hil_precision,
                "hil_recall": hil_recall,
                "hil_f1": hil_f1
            }
            result["total"] = {
                "ss": round((result["safe"]["ss"] / secure_sum) * 100, 2),
                "sc": round((result["safe"]["sc"] / secure_sum) * 100, 2),
                "si": round((result["safe"]["si"] / secure_sum) * 100, 2),
                "cs": round((result["vulnerable"]["cs"] / vulnerable_sum) * 100, 2),
                "cc": round((result["vulnerable"]["cc"] / vulnerable_sum) * 100, 2),
                "ci": round((result["vulnerable"]["ci"] / vulnerable_sum) * 100, 2),
                "failed vulnerable": round((len(dataset["vulnerable"]) - vulnerable_sum) / len(dataset["vulnerable"]) * 100, 2),
                "failed secure": round((len(dataset["safe"]) - secure_sum) / len(dataset["safe"]) * 100, 2)
            }
            output_file = f'{output_dir}{prompt_tech}_{partition}_{semantics}_stats.json'
            # with open(f'./results/{filtered_model}/{prompt_tech}_{partition}_{semantics}_stats.json', "w") as f:
            with open(output_file, "w", encoding='utf-8') as f:
                json.dump(result, f, indent=4)
                print(f"Results saved to {output_file}")

def run_detection_analysis(prompt_tech="ALL",batch_size=8):
    # 指定提示工程技术
    '''
        NONE:作为基线，不使用任何提示工程技术，直接将代码提供给模型
        ROLE:使用角色提示工程技术，明确模型的角色，引导其以特定的视角分析代码
        COT:引导模型进行逐步推理，鼓励模型在给出答案之前先进行一步步的思考过程
        APE-COT:通过先得到初步答案，再引导模型解释其推理过程，可能会提高回答的质量和可靠性
        CO-STAR:需要看论文
        DYNAMIC:动态生成提示，根据代码或上下文的不同，生成定制化的提示
    '''
    prompt_techs = ["NONE", "ROLE", "COT", "APE-COT", "CO-STAR", "DYNAMIC"]
    if prompt_tech == "ALL":
        prompt_techs = prompt_techs
    elif prompt_tech == "BATCH1":
        prompt_techs = prompt_techs[:4]
    elif prompt_tech == "BATCH2":
        prompt_techs = prompt_techs[4:]
    else:
        prompt_techs = [prompt_tech]

    # test 重新跑
    prompt_techs = ["COT", "APE-COT", "CO-STAR", "DYNAMIC"]

    for prompt_tech in prompt_techs:
        prompt_eng.METHOD = prompt_tech
        # print(f"Getting response for {prompt_tech}")
        # 获取检测结果
        get_detection_responses(prompt_tech, batch_size)
        print(f"Analysing response for {prompt_tech}")
        # 分析模型生成回复
        analyse_detection_responses(prompt_tech)

if __name__ == "__main__":
    start = time.time()
    parser = argparse.ArgumentParser()
    '''
        codellama/CodeLlama-7b-Instruct-hf 考虑7b 13b和34b对比
        codellama/CodeLlama-7b-Instruct-hf
        codellama/CodeLlama-7b-hf
    '''
    parser.add_argument("--model", type=str, default="codellama/CodeLlama-7b-hf")
    
    parser.add_argument("--prompt_technique", type=str, default="ALL", help="Prompt engineering technique")
    parser.add_argument("--batch_size", type=int, default=4, help="Batch size for model inference")
    args = parser.parse_args()
    models = ["codellama/CodeLlama-7b-hf", "google/codegemma-7b-it"]
    
    # 一次跑完全部模型
    # for model in models:
    #     MODEL = model
    #     filtered_model = MODEL.split("/")[-1]
    #     prompt_eng.MODEL = MODEL
    #     try:
    #         tokenizer = AutoTokenizer.from_pretrained(MODEL, use_fast=False)
    #         # 设置 eos_token_id 和 pad_token_id
    #         tokenizer.eos_token_id = tokenizer.convert_tokens_to_ids('</s>')
    #         tokenizer.pad_token_id = tokenizer.eos_token_id
    #         model = AutoModelForCausalLM.from_pretrained(
    #             MODEL,
    #             device_map='auto',
    #             torch_dtype=torch.float16,
    #             # low_cpu_mem_usage=True
    #         )
    #         model.config.eos_token_id = tokenizer.eos_token_id
    #         model.config.pad_token_id = tokenizer.pad_token_id

    #         model.eval()
    #     except Exception as e:
    #         print(f"Error loading model {MODEL}: {e}")
    #         exit(1)

    #     if args.prompt_technique not in ["BATCH1", "BATCH2", "ALL", "NONE", "ROLE", "COT", "APE-COT", "CO-STAR", "DYNAMIC"]:
    #         raise ValueError("Invalid prompt technique")
    #     else:
    #         run_detection_analysis(args.prompt_technique)

    MODEL = args.model
    llm = get_llm(MODEL)
    # # 检查模型是否存在
    # try:
    #     tokenizer = AutoTokenizer.from_pretrained(MODEL)
    #     # 设置 eos_token_id 和 pad_token_id
    #     tokenizer.eos_token_id = tokenizer.convert_tokens_to_ids('</s>')
    #     tokenizer.pad_token_id = tokenizer.eos_token_id
    #     #  将嵌入层和层归一化层放在 CPU，上下文中较大的部分放在 GPU
    #     device_map = {
    #         'transformer.wte': 'cpu',
    #         'transformer.h': 'cuda',
    #         'transformer.ln_f': 'cpu',
    #         'lm_head': 'cuda'
    #     }
    #     model = AutoModelForCausalLM.from_pretrained(
    #         MODEL, device_map='auto', 
    #         torch_dtype=torch.float16,
    #         # low_cpu_mem_usage=True,
    #         # offload_buffers=True,
    #         # offload_state_dict=True
    #     )
    #     model.config.eos_token_id = tokenizer.eos_token_id
    #     model.config.pad_token_id = tokenizer.pad_token_id

    #     model.eval()
    # except Exception as e:
    #     print(f"Error loading model {MODEL}: {e}")
    #     exit(1)


    
    filtered_model = MODEL.split("/")[-1]
    prompt_eng.MODEL = MODEL
    prompt_eng.model = model
    prompt_eng.tokenizer = tokenizer
    print(f"正在使用的Model: {MODEL}, 将model和tokenizer传递给prompt_eng...")

    if args.prompt_technique not in ["BATCH1", "BATCH2", "ALL", "NONE", "ROLE", "COT", "APE-COT", "CO-STAR", "DYNAMIC"]:
        raise ValueError("Invalid prompt technique")
    else:
        if MODEL == "codellama/CodeLlama-7b-hf":
            batch_size = 12
        else :
            batch_size = 8
        run_detection_analysis(args.prompt_technique, batch_size=batch_size)
    print("Time taken: ", time.time() - start)
