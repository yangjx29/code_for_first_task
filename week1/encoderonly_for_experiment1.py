import os
import json
import time
from transformers import AutoTokenizer, AutoModelForSequenceClassification, TrainingArguments, Trainer
from datasets import load_dataset, Dataset
import torch
from sklearn.metrics import accuracy_score, precision_recall_fscore_support

class CodeBERTModel:
    def __init__(self):
        super().__init__()

    def prepare(self, **kwargs):
        # 加载预训练的语言模型和对应的分词器
        self.model_name = kwargs['model_name']
        print(f"正在加载模型: {self.model_name}")
        self.tokenizer = AutoTokenizer.from_pretrained(self.model_name)
        # 加载给定任务的预训练模型
        self.model = AutoModelForSequenceClassification.from_pretrained(
            self.model_name,
            num_labels=2,
            torch_dtype=torch.float16 if torch.cuda.is_available() else torch.float32,
            device_map="auto" if torch.cuda.is_available() else None
        )
        self.temp = kwargs['temp']
        self.max_token_len = kwargs['max_token_len']

    def prepare_prompt(self, **kwargs):
        # 根据任务类型准备提示
        task_type = kwargs['prompt']
        code = kwargs['code']
        file = kwargs.get('file', 'code')
        file_extension = ".txt"

        if task_type == "analysis":
            prompt = "这段代码存在何种安全问题或者逻辑漏洞吗？请解释并说明: " + code
        elif task_type == "repair":
            prompt = "以下代码存在漏洞，请修复这些漏洞并给出解释: " + code
        elif task_type == "None":
            prompt = "Code: \"\"\"\n" + code + "\n\"\"\""
        else:
            raise ValueError(f"Unsupported task type: {task_type}")

        # # 判断语言类型, 获取文件名的后缀
        # if task_type in ["analysis", "repair", "None"]:
        #     file_extension = ''.join(filter(str.isalpha, os.path.splitext(file)[1]))
        #     file_extension = ".txt" if file_extension == "" else f".{file_extension}"

        return prompt, file_extension

    def run(self, **kwargs):
        source_dir = kwargs['source_dir']
        output_dir = kwargs['output_dir']
        task_type = kwargs['task_type']
        model_name = kwargs['model_name']
        temp = kwargs['temp']
        max_token_len = kwargs['max_token_len']

        # 创建结果文件夹(加上对应的模型名)
        output_dir = os.path.join(output_dir, os.path.basename(model_name))
        if not os.path.exists(output_dir):
            os.makedirs(output_dir)

        for file in os.listdir(source_dir):
            file_path = os.path.join(source_dir, file)
            if not os.path.isfile(file_path):
                continue  # 跳过非文件

            with open(file_path, "r", encoding='utf-8') as f:
                code = f.read()

            prompt, file_extension = self.prepare_prompt(prompt=task_type, code=code, file=file)
            itr = 5
            response = ""
            while itr:
                try:
                    # 检查CUDA的可用性
                    device = torch.device("cuda" if torch.cuda.is_available() else "cpu")
                    # 分词并编码,返回PyTorch张量
                    inputs = self.tokenizer(prompt, return_tensors="pt", truncation=True, max_length=self.max_token_len).to(device)
                    print(f"使用设备: {device}, 输入: {prompt[:50]}...")  # 仅显示前50个字符
                    # ** 将inputs字典中的键值对作为关键字参数传递给模型。
                    outputs = self.model(**inputs)
                    # 模型的输出
                    logits = outputs.logits
                    predicted_class = torch.argmax(logits, dim=-1).item()
                    response = "correct" if predicted_class == 1 else "incorrect"
                    break
                except Exception as e:
                    itr -= 1
                    print(f"发生错误: {e}. 重试中... 剩余尝试次数: {itr}")

            if itr == 0:
                print(f"文件 {file} 处理失败。")
                continue

            # 获取文件名
            base_name = os.path.splitext(file)[0]
            final_name = f"{base_name}{file_extension}"
            with open(os.path.join(output_dir, final_name), "w", encoding='utf-8') as f:
                f.write(response)

if __name__ == '__main__':
    start_time = time.time()
    model = CodeBERTModel()
    model_names = ["microsoft/codebert-base"]

    for model_name in model_names:
        model.prepare(model_name=model_name, temp=0.2, max_token_len=512)

        # 定义两个与代码相关的任务（去掉了generation任务）
        tasks = {
            "analysis": {
                "source_dir": "/data/yjx/code_for_first_task/week1/dataset/analysis", 
                "output_dir": "/data/yjx/code_for_first_task/week1/result/analysis"
            },
            # "repair": {
            #     "source_dir": "/data/yjx/code_for_first_task/week1/dataset/repair", 
            #     "output_dir": "/data/yjx/code_for_first_task/week1/result/repair"
            # },
        }

        for task_type, paths in tasks.items():
            source_dir = paths['source_dir']
            output_dir = paths['output_dir']
            
            print(f"正在处理任务: {task_type}")
            model.run(
                model_name=model.model_name,
                temp=model.temp,
                max_token_len=model.max_token_len,
                source_dir=source_dir,
                output_dir=output_dir,
                task_type=task_type,
            )
    end_time = time.time()
    total_time = end_time - start_time
    minutes = total_time // 60  
    seconds = total_time % 60   
    print(f"CodeBERT 模型总耗时: {int(minutes)} 分 {int(seconds)} 秒。")
