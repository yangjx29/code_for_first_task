from experiment1 import LLMModel
from openai import OpenAI
import time
import openai
import os


class OpenAILLMModel():
    def __init__(self, temp=0.0):
        super().__init__()
        self.temp = temp

    def prepare(self, **kwargs):
        # todo
        self.model_client = OpenAI(
            api_key=os.environ.get("OPENAI_API_KEY"),
            base_url='https://api.openai-proxy.org/v1',
        )
        self.model = kwargs['model']

    def preparePromot(self, **kwargs):
         # todo 
        if kwargs['prompt'] == "generation":
            prompt = "按照以下要求为我生成代码,你生成的代码将被直接放在对应后缀的文件中,所以请注意注释的格式: " + kwargs['code']
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
    
    def run(self, **kwargs):
        source_dir = kwargs['source_dir']
        output_dir = kwargs['output_dir']
        # generate, analysis, repair
        task_type = kwargs['task_type']
        client = kwargs['client']
        model = kwargs['model']
        temp = kwargs['temp']
        # 生成文件的后缀,默认为.txt
        file_extension = ".txt"

        if not os.path.exists(output_dir):
            os.makedirs(output_dir)
        for file in os.listdir(source_dir):
            with open(os.path.join(source_dir, file), "r", encoding='utf-8') as f:
                code = f.read()
            prompt, file_extension = self.preparePromot(prompt=task_type, code=code, file_extension=file_extension,file=file)
            itr = 5
            gpt_response = []
            while itr:
                try:
                    gpt_response = client.chat.completions.create(
                        model=model,
                        temperature=temp,   
                        messages=[
                            {
                                "role": "user",
                                "content": prompt,
                            }
                        ],
                    )
                    break
                except openai.RateLimitError as e:
                    print("Rate limit reached. Waiting for 60 seconds...")
                    time.sleep(60)
                except openai.APIError as e:
                    itr -= 1
                    print("openai.APIError,Retrying...")
            # 获取返回内容
            gpt_content = gpt_response.choices[0].message.content
            # 获取文件名
            base_name = os.path.splitext(file)[0]
            
            final_name = f"{base_name}{file_extension}"
            with open(os.path.join(output_dir, final_name), "w", encoding='utf-8') as f:
                f.write(gpt_content)

if __name__ == '__main__':
    model = OpenAILLMModel(temp=0.2)
    model.prepare(model="gpt-3.5-turbo")

    # 因为我没有openai的api key，所以用的是代理
    client = OpenAI(
        api_key=os.environ.get("OPENAI_API_KEY"),
        base_url='https://api.openai-proxy.org/v1',
    )

    # 定义三个跟代码相关的任务
    tasks = {
        "generation": {"source_dir": "/data/yjx/code_for_first_task/week1/dataset/generate", "output_dir": "/data/yjx/code_for_first_task/week1/result/generate"},
        "analysis": {"source_dir": "/data/yjx/code_for_first_task/week1/dataset/analysis", "output_dir": "/data/yjx/code_for_first_task/week1/result/analysis"},
        "repair": {"source_dir": "/data/yjx/code_for_first_task/week1/dataset/repair", "output_dir": "/data/yjx/code_for_first_task/week1/result/repair"}
    }

    for task_type, paths in tasks.items():
        source_dir = paths['source_dir']
        output_dir = paths['output_dir']
        
        print(f"正在处理任务: {task_type}")
        model.run(
            model="gpt-3.5-turbo", # gpt系列
            temp=0.2,
            client=client, # 需要使用的client进行接口的调用,原因同上
            source_dir=source_dir,
            output_dir=output_dir,
            task_type=task_type,
        )