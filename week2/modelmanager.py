from transformers import AutoTokenizer, AutoModelForCausalLM,set_seed
import torch
import random

class LLMModel:
    def __init__(self, model_name):
        self.MODEL = model_name
        self.tokenizer = None
        self.model = None
        self.initialize_model()

    def initialize_model(self):
        print(f"Initializing model: {self.MODEL}")
        if self.MODEL == "codellama/CodeLlama-7b-Instruct-hf" or self.MODEL == "google/codegemma-7b-it":
            self.tokenizer = AutoTokenizer.from_pretrained(self.MODEL)

            self.model = AutoModelForCausalLM.from_pretrained(
                self.MODEL,
                device_map='auto',
                torch_dtype=torch.float16
            )
            self.model.eval()
        else:
            raise ValueError(f"Unsupported MODEL: {self.MODEL}")

    def query(self, prompts):
        # 保证可重复性,不然会有奇奇怪怪的回答
        seed = 42
        random.seed(seed)
        torch.manual_seed(seed)
        if torch.cuda.is_available():
            torch.cuda.manual_seed(seed)
            torch.cuda.manual_seed_all(seed)
        torch.backends.cudnn.deterministic = True
        torch.backends.cudnn.benchmark = False
        set_seed(seed)
        try:
            # 确保 prompts 是一个列表
            if isinstance(prompts, str):
                prompts = [prompts]
                single_prompt = True
            else:
                single_prompt = False
            # 获取自定义特殊标记的 token IDs
            inputs = self.tokenizer(prompts, return_tensors="pt",padding=True).to(self.model.device)
            with torch.no_grad():
                outputs = self.model.generate(
                    **inputs,
                    max_new_tokens=256,
                    do_sample=False,
                    temperature=0.7,
                    top_p=0.9,
                    min_length=128,  # 设置最小生成长度
                )
            # response = self.tokenizer.decode(outputs[0], skip_special_tokens=True)
            responses = self.tokenizer.batch_decode(outputs, skip_special_tokens=True)
            # print(f"原始响应: {responses}")
            processed_responses = []
            for response, prompt in zip(responses, prompts):
                # 确保响应以 prompt 开头
                if response.startswith(prompt):
                    content = response[len(prompt):].strip()
                else:
                    content = response.strip()
                processed_responses.append(content)
            # print(f"测试:Processed responses: {processed_responses}")
            # 如果最初的 prompts 是单个字符串，返回单个响应
            if single_prompt:
                return processed_responses[0]
            
        except Exception as e:
            print(f"Error during model inference: {e}")
            # response = "Error"
            processed_responses = ["Error"] * len(prompts)
        return processed_responses
    
# 创建一个全局的模型实例
llm_instance = None

def get_llm(model_name):
    global llm_instance
    if llm_instance is None or llm_instance.MODEL != model_name:
        llm_instance = LLMModel(model_name)
    return llm_instance