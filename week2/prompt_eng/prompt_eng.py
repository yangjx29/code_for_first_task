import os
# os.environ["CUDA_VISIBLE_DEVICES"] = "2,3"
# os.environ["PYTORCH_CUDA_ALLOC_CONF"] = "max_split_size_mb:128"
import json
import torch
# from openai import OpenAI
from transformers import AutoTokenizer, AutoModelForCausalLM
from modelmanager import LLMModel
from modelmanager import get_llm
# from google.cloud import aiplatform
# 指定当前使用的promot方法和模型名称
METHOD = ""
MODEL = ""
# MODEL_TYPE = ""
tokenizer = None
model = None
llm = None


# from llm_detection import query_llm # 避免重复代码 可选
def query_llm(prompt):
    llm = get_llm(MODEL)
    return llm.query(prompt)
#     global tokenizer, model
#     if MODEL == "codellama/CodeLlama-7b-Instruct-hf":
#         # 使用Code Llama模型
#         if tokenizer is None or model is None:
#             tokenizer = AutoTokenizer.from_pretrained(MODEL)
#             # 设置 eos_token_id 和 pad_token_id
#             tokenizer.eos_token_id = tokenizer.convert_tokens_to_ids('</s>')
#             tokenizer.pad_token_id = tokenizer.eos_token_id
#             model = AutoModelForCausalLM.from_pretrained(MODEL, device_map='auto', torch_dtype=torch.float16)
#             model.config.eos_token_id = tokenizer.eos_token_id
#             model.config.pad_token_id = tokenizer.pad_token_id

#             model.eval()

#         try:
#             inputs = tokenizer(prompt, return_tensors="pt").to(model.device)
#             with torch.no_grad():
#                 outputs = model.generate(
#                     **inputs,
#                     max_new_tokens=512,
#                     do_sample=True,
#                     temperature=0.7,
#                     top_p=0.9,
#                     eos_token_id=tokenizer.eos_token_id,
#                     pad_token_id=tokenizer.pad_token_id
#                 )
#             response = tokenizer.decode(outputs[0], skip_special_tokens=True)
#             response = response[len(prompt):].strip()

#         except Exception as e:
#             response = "Error"

#         return response

    # elif MODEL == 'code_gemma':
        # 使用Google的code_gemma模型
    #     try:
    #         # 初始化Google Cloud AI Platform
    #         aiplatform.init(project=GOOGLE_CLOUD_PROJECT_ID, location=GOOGLE_CLOUD_LOCATION)

    #         # 创建模型客户端
    #         model = aiplatform.LanguageModel.from_pretrained(MODEL)

    #         # 发送请求并获取响应
    #         response = model.predict(prompt).text

    #     except Exception as e:
    #         response = "Error"

    #     return response

    # else:
    #     raise ValueError("Unsupported MODEL")


def modify(prompt, function):
    f = open("./prompt_eng/prompt_template.json", "r")
    techniques = json.load(f)
    modified_prompt = ""

    # 代码生成任务
    if function == "generation":
        role = "From now on, you are an excellent security-aware developer that does not write code with vulnerabilities.\n"
        instruction = ""
        output_indicator = "Don't return a preamble or suffix, just the code."
        context = "You are asked to write security-aware code that does not contain vulnerabilities."
        style = "Provide answer based on the SEI CERT Coding Standards."
    # 漏洞检测任务
    elif function == "detection":
        role = "From now on, you are an excellent cybersecurity expert that can analyse given code and determine if it is vulnerable or safe, and if vulnerable identify the related CWE.\n"
        instruction = "Briefly analyse the provided code and determine if the code is vulnerable or safe, if vulnerable identify the most obvious CWE.\n"
        output_indicator = "Briefly analysis of the code and your determination of whether the code is vulnerable or safe. If the code is vulnerable, include the most obvious CWE in your analysis."
        context = "You are asked to accurately detect if a code is vulnerable or safe. The vulnerabilities are related to the Common Weakness Enumeration (CWE) list.Anser the following questions briefly."
        style = "Provide answer based on the Common Weakness Enumeration descriptions and IDs."
    # 漏洞修复任务
    elif function == "fix":
        cwe = prompt[1]
        output_indicator = "Don't return a preamble or suffix, just the code."
        prompt = prompt[0] + "\n" + output_indicator
        instruction = "Review the following code with a CWE vulnerability present. Provide a revised version of the code with the vulnerability resolved.\n"
        role = "From now on, you are an excellent code reviewer that can fix codes with CWE vulnerabilities.\n"
        context = "You are asked to accurately fix a code that contains a vulnerability related to the Common Weakness Enumeration (CWE) list."
        style = "Provide answer based on the SEI CERT Coding Standards."

    # 根据不同的方法，生成不同的prompt
    if METHOD == "NONE":
        modified_prompt = instruction + prompt
    elif METHOD == "ROLE":
        modified_prompt = role + instruction + prompt
    elif METHOD == "COT":
        modified_prompt = instruction + prompt + "\n" + techniques["COT"]["content"]
    elif METHOD == "APE-COT":
        modified_prompt = instruction + prompt + "\n" + techniques["APE-COT"]["content"]
    elif METHOD == "CO-STAR":
        template = techniques['co-star']
        template["context"]["content"] = context
        template["objective"]["content"] = instruction + prompt
        template["response"]["content"]  = output_indicator
        template["style"]["content"] = style
        for key in template:
            for key2 in template[key]:
                modified_prompt += template[key][key2]
    elif METHOD == "DYNAMIC":
        if function == "fix":
            template = techniques['DYNAMIC']["detection"]
            template["context"]["content"] = context
            template["hint"]["content"] =  "The vulnerability is related to " + cwe + "."
            template["objective"]["content"] = instruction + prompt
            for key in template:
                for key2 in template[key]:
                    modified_prompt += template[key][key2]
        elif function == "generation":
            prediction_prompt = "Based on the instructions below, predict the vulnerabilities that might arise from the resulting code. Return just a brief, concise list of vulnerabilities. Do not return any code.\n" + "Instruction: " + prompt
            # print(f"在promot_env中调用query_llm函数,model={model}, tokenizer={tokenizer}")
            # prediction =  query_llm(prediction_prompt, MODEL, model, tokenizer)
            prediction =  query_llm(prediction_prompt)
            template = techniques['DYNAMIC']["generation"]
            template["context"]["content"] = context
            template["warning"]["content"] = "Ensure your code is robust and secure. Do not include any of the following vulnerabilities in your output code:\n" + prediction
            template["objective"]["content"] = instruction + prompt
            for key in template:
                for key2 in template[key]:
                    modified_prompt += template[key][key2]
        elif function == "detection":
            prediction_prompt = "Analyse the provided code below and return two lines of text. The first line states the programming language of the code. The second line is a list of potential vulnerabilities based the code's functionality ONLY. Do not return any code.\n" + "Code to analyse:\n" + prompt
            # print(f"在promot_env中调用query_llm函数,model={model}, tokenizer={tokenizer}")
            # prediction =  query_llm(prediction_prompt, MODEL, model, tokenizer)
            prediction =  query_llm(prediction_prompt)
            if prediction == "Error":
                return "Error"
            template = techniques['DYNAMIC']["detection"]
            template["context"]["content"] = context
            template["hint"]["content"] = "Ensure your analysis is accurate. Use the following information to assist your analysis:\n" + prediction
            template["objective"]["content"] = instruction + prompt
            for key in template:
                for key2 in template[key]:
                    modified_prompt += template[key][key2]
    # 添加分隔符，明确指示模型开始生成响应
    modified_prompt += "\nAnalysis Result:"
    return modified_prompt