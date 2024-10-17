"""
    调用GPT-3.5和Hugging Face模型生成文本的一个简单示例。主要为了先把服务器的环境搭起来,把代码跑通。
"""
from openai import OpenAI
import os
from transformers import AutoTokenizer, AutoModelForCausalLM, pipeline
import torch

# OpenAI GPT-3.5 API配置
client = OpenAI(
    base_url='https://api.openai-proxy.org/v1',
    api_key=os.environ.get("OPENAI_API_KEY"),
)

# Hugging Face模型配置
huggingface_model_name = "codeparrot/codeparrot-small"
# Tokenizer用于将文本转化为模型可以理解的token
tokenizer = AutoTokenizer.from_pretrained(huggingface_model_name)
# Model用于根据输入的token生成相应的输出
model = AutoModelForCausalLM.from_pretrained(huggingface_model_name)

# 通用函数：调用GPT-3.5生成文本
def generate_with_gpt3(prompt, max_tokens=100):
    # response = openai.Completion.create(
    #   engine="gpt-3.5-turbo",
    #   prompt=prompt,
    #   max_tokens=max_tokens,
    #   temperature=0.7
    # )
    gpt_response = client.chat.completions.create(
        messages=[
            {
                "role": "user",
                "content": prompt,
            }
        ],
        model="gpt-3.5-turbo",
    )
    return gpt_response.choices[0].message.content

# 通用函数：调用Hugging Face模型生成文本
def generate_with_huggingface(prompt, max_tokens=100):
    generator = pipeline('text-generation', model=huggingface_model_name)
    # inputs = tokenizer(prompt, return_tensors="pt")
    # outputs = model.generate(inputs['input_ids'], max_new_tokens=max_tokens)
    return generator(prompt, max_length=max_tokens, num_return_sequences=1)[0]['generated_text']

# 通用生成函数：根据模型类型生成结果
def generate_text(model_type, prompt, max_tokens=100):
    if model_type == "gpt3":
        return generate_with_gpt3(prompt, max_tokens)
    elif model_type == "huggingface":
        return generate_with_huggingface(prompt, max_tokens)
    else:
        raise ValueError("Unsupported model type!")

# 读取prompts列表并生成n个文件
def generate_files(prompts, model_type="gpt3", max_tokens=100, output_dir="outputs"):
    import os
    if not os.path.exists(output_dir):
        os.makedirs(output_dir)

        # todo
        # if model_type == "huggingface":
        #     generator = pipeline('text-generation', model=huggingface_model_name) # model待确定
    
    for i, prompt in enumerate(prompts):
        # if model_type == "huggingface":
        #     generated_text = generator(prompt, max_length=max_tokens, num_return_sequences=1)[0]['generated_text']
        # else:
        generated_text = generate_text(model_type, prompt, max_tokens)
        file_path = os.path.join(output_dir, f"generated_file_{i+1}.txt")
        with open(file_path, 'w') as f:
            f.write(generated_text)
        print(f"Generated file {file_path}")

# 示例：定义n个prompts并生成文件
prompts = [
    "写一个Python函数计算两个数的和。",
    "用c++函数写处一个动态规划的函数。",
    "用c++写一个快速排序。",
    # 可以继续添加更多的prompts
]

# 调用函数生成文件（可选择GPT-3或Hugging Face模型）
generate_files(prompts, model_type="gpt3", max_tokens=100, output_dir="gpt3_outputs")
# 调用huggingface模型生成文件
# generate_files(prompts, model_type="huggingface", max_tokens=100, output_dir="huggingface_outputs")
