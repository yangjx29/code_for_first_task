
import time
import os
from transformers import AutoTokenizer, AutoModelForCausalLM
import torch

class LLAMAModel():
    def __init__(self) -> None:
        
        super().__init__()

    def prepare(self, **kwargs):
        # 加载预训练的语言模型和对应的分词器
        self.model_name = kwargs['model_name']
        print(f"正在加载模型: {self.model_name}")
        self.tokenizer = AutoTokenizer.from_pretrained(self.model_name,legacy=False)
        # 加载给定任务的预训练模型
        self.model = AutoModelForCausalLM.from_pretrained(
            self.model_name,
            torch_dtype=torch.float16,
            device_map="auto"
        )

        # 检查并设置 eos_token_id
        if self.model.config.eos_token_id is None:
            if self.tokenizer.eos_token_id is not None:
                self.model.config.eos_token_id = self.tokenizer.eos_token_id
        else:
            # 手动设置一个 eos_token_id，例如 GPT-2 的 eos_token_id 通常是50256
            self.model.config.eos_token_id = 50256


         # 如果没有pad_token，则添加一个, 否则报警告
        if self.tokenizer.pad_token is None:
            self.tokenizer.add_special_tokens({'pad_token': '[PAD]'})
            
            self.model.resize_token_embeddings(len(self.tokenizer))
            self.model.config.pad_token_id = self.tokenizer.pad_token_id    
        # else:
        #     self. model = AutoModelForCausalLM.from_pretrained(self.model_name, torch_dtype=torch.float16, device_map="auto")
        
        self.temp = kwargs['temp']
        self.max_token_len = kwargs['max_token_len']

    def preparePrompt(self, **kwargs):
         # todo 
        file_extension = ".txt"
        if kwargs['prompt'] == "generation":
            prompt = "按照以下要求为我生成代码,并进行解释: " + kwargs['code']
            # 判断语言类型,获取文件名
            # file_extension = ''.join(filter(str.isalpha, os.path.splitext(kwargs['file'])[0]))
            # file_extension = ".txt" if file_extension == "" else f".{file_extension}"
        if kwargs['prompt'] == "analysis":
            prompt = "这段代码存在何种安全问题或者逻辑漏洞吗,解释并说明: " + kwargs['code']
        if kwargs['prompt'] == "repair":
            prompt = "以下代码存在漏洞，请修复这些漏洞并给出解释: " + kwargs['code']
        if kwargs['prompt'] == "None":
            prompt = "Code: \"\"\"\n" + kwargs['code'] + "\n\"\"\""
        if kwargs['prompt'] == "generation" or kwargs['prompt'] == "None":
             # 判断语言类型,获取文件名
            file_extension = ''.join(filter(str.isalpha, os.path.splitext(kwargs['file'])[0]))
            file_extension = ".txt" if file_extension == "" else f".{file_extension}"
        return prompt, file_extension
     
    # 定义生成代码的函数
    def run(self, **kwargs):
        source_dir = kwargs['source_dir']
        output_dir = kwargs['output_dir']
        # generate, analysis, repair
        task_type = kwargs['task_type']
        model_name = kwargs['model_name']
        temp = kwargs['temp']
        # 生成文件的后缀,默认为.txt
        file_extension = ".txt"
        # 创建result文件夹(加上对应的模型名)
        output_dir = os.path.join(output_dir, os.path.basename(model_name))
        if not os.path.exists(output_dir):
            os.makedirs(output_dir)
        for file in os.listdir(source_dir):
            with open(os.path.join(source_dir, file), "r", encoding='utf-8') as f:
                code = f.read()
            prompt, file_extension = self.preparePrompt(prompt=task_type, code=code, file_extension=file_extension,file=file)
            itr = 5
            llama_response = []
            while itr:
                try:
                    # 调用模型生成代码
                    # 检查cuda的可用性
                    device = torch.device("cuda" if torch.cuda.is_available() else "cpu")
                    # 启用padding并返回attention_mask
                    inputs = self.tokenizer(
                        prompt, 
                        return_tensors="pt", 
                        padding=True, 
                        truncation=True, 
                        max_length=self.max_token_len
                    ).to(device)
                    print(f"使用设备: {device}, 输入: {prompt[:50]}...")
                    outputs = self.model.generate(
                        inputs['input_ids'], 
                        max_length= self.max_token_len, 
                        do_sample=True,
                        attention_mask=inputs['attention_mask'],
                    )
                    llama_response = self.tokenizer.decode(outputs[0], skip_special_tokens=True)
                    print(f"生成的回复: {llama_response[:50]}...")
                    break
                except Exception as e:
                    itr -= 1
                    print(f"An error occurred: {e}. Retrying...")
            # 获取文件名
            base_name = os.path.splitext(file)[0]
            
            final_name = f"{base_name}{file_extension}"
            with open(os.path.join(output_dir, final_name), "w", encoding='utf-8') as f:
                f.write(str(llama_response))
        

    

if __name__ == '__main__':
    start_time = time.time()
    model = LLAMAModel()
    # model_names = ["TheBloke/Llama-2-13B-chat-GPTQ", "microsoft/codebert-base","HuggingFaceH4/starchat-beta"]
    model_names = ["TheBloke/Llama-2-13B-chat-GPTQ"]
    for model_name in model_names:
        model.prepare(model_name=model_name, temp=0.2, max_token_len=4096)

        # 定义三个跟代码相关的任务
        tasks = {
            "generation": {
                "source_dir": "/data/yjx/code_for_first_task/week1/dataset/generate", 
                "output_dir": "/data/yjx/code_for_first_task/week1/result/generate"
                },
            "analysis": {
                "source_dir": "/data/yjx/code_for_first_task/week1/dataset/analysis", 
                "output_dir": "/data/yjx/code_for_first_task/week1/result/analysis"
                },
            "repair": {
                "source_dir": "/data/yjx/code_for_first_task/week1/dataset/repair", 
                "output_dir": "/data/yjx/code_for_first_task/week1/result/repair"
                },
        }

        for task_type, paths in tasks.items():
            source_dir = paths['source_dir']
            output_dir = paths['output_dir']
            
            print(f"正在处理任务: {task_type}")
            model.run(
                model_name=model.model_name, # llama家族
                temp=model.temp,
                max_token_len= model.max_token_len,
                source_dir=source_dir,
                output_dir=output_dir,
                task_type=task_type,
            )
        end_time = time.time()
        total_time = end_time - start_time
        minutes = total_time // 60  
        seconds = total_time % 60   
        print(f"huggingface模型总耗时:{minutes}分{seconds}秒。")
