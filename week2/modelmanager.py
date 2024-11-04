from transformers import AutoTokenizer, AutoModelForCausalLM,set_seed
import torch
import random
import torch.distributed as dist
from torch.nn.parallel import DataParallel 
from vllm import LLM, SamplingParams

class LLMModel:
    def __init__(self, model_name):
        self.MODEL = model_name
        self.tokenizer = None
        self.model = None
        self.sampling_params = None
        self.device = torch.device("cuda" if torch.cuda.is_available() else "cpu")
        print("Device: ", self.device)
        self.initialize_model()

    def initialize_model(self):
        print(f"Initializing model: {self.MODEL}")
        if self.MODEL == "google/codegemma-7b-it":
            self.tokenizer = AutoTokenizer.from_pretrained(self.MODEL)
            # 使用hf接口
            # self.model = AutoModelForCausalLM.from_pretrained(
            #     self.MODEL,
            #     device_map='auto',
            #     torch_dtype=torch.float16
            # )

            # 使用 DataParallel 以支持多 GPU
            # if torch.cuda.device_count() > 1:
            #     self.model = torch.nn.DataParallel(self.model)
            # 数据并行时跟device_map='auto'冲突
            # self.model.to(self.device)  # 确保模型在指定设备上
            # self.model.eval()


            # 使用vllm加速推理
            self.sampling_params = SamplingParams(temperature=0.4, top_p=0.4,min_tokens=64,max_tokens=256)
            self.model = LLM(model=self.MODEL,trust_remote_code=True,gpu_memory_utilization=0.95)

        elif self.MODEL == "codellama/CodeLlama-7b-hf":
            # self.tokenizer = AutoTokenizer.from_pretrained(self.MODEL)
            # self.tokenizer.pad_token = self.tokenizer.eos_token
            # self.model = AutoModelForCausalLM.from_pretrained(
            #     self.MODEL,
            #     device_map='auto',
            #     torch_dtype=torch.float16,
            # )

            # # 使用 DataParallel 以支持多 GPU
            # if torch.cuda.device_count() > 1:
            #     # 这里和torch.nn.parallel import DataParallel是一个类
            #     self.model = torch.nn.DataParallel(self.model)

            # # self.model.to(self.device)  # 确保模型在指定设备上
            # self.model.eval()

            # 使用vllm加速推理
            self.sampling_params = SamplingParams(temperature=0.7, top_p=0.9,min_tokens=64,max_tokens=128)
            self.model = LLM(model=self.MODEL,trust_remote_code=True,gpu_memory_utilization=0.95)
        else:
            raise ValueError(f"Unsupported MODEL: {self.MODEL}")

    # def query(self, prompts):
    #     # 保证可重复性,不然会有奇奇怪怪的回答
    #     seed = 42
    #     random.seed(seed)
    #     torch.manual_seed(seed)
    #     if torch.cuda.is_available():
    #         torch.cuda.manual_seed(seed)
    #         torch.cuda.manual_seed_all(seed)
    #     torch.backends.cudnn.deterministic = True
    #     torch.backends.cudnn.benchmark = False
    #     set_seed(seed)
    #     try:
    #         # 确保 prompts 是一个列表
    #         if isinstance(prompts, str):
    #             prompts = [prompts]
    #             single_prompt = True
    #         else:
    #             single_prompt = False
    #         # 获取自定义特殊标记的 token IDs
    #         # print(f"model.device: {self.model.device}")
    #         inputs = self.tokenizer(prompts, return_tensors="pt",padding=True).to(self.device)
    #         # 确保 inputs 也在正确的设备上
    #         for key in inputs.keys():
    #             inputs[key] = inputs[key].to(self.device)
    #         with torch.no_grad():
    #             # 考虑单卡情况
    #             model_to_use = self.model.module if isinstance(self.model, DataParallel) else self.model
    #             outputs = model_to_use.generate(
    #                 **inputs,
    #                 max_new_tokens=256,
    #                 do_sample=True,
    #                 temperature=0.7,
    #                 top_p=0.9,
    #                 min_length=128,  # 设置最小生成长度
    #                 use_cache=True,  # 使用缓存加速生成
    #             )
    #         # response = self.tokenizer.decode(outputs[0], skip_special_tokens=True)
    #         responses = self.tokenizer.batch_decode(outputs, skip_special_tokens=True)
    #         # print(f"原始响应: {responses}")
    #         processed_responses = []
    #         for response, prompt in zip(responses, prompts):
    #             # 确保响应以 prompt 开头
    #             if response.startswith(prompt):
    #                 content = response[len(prompt):].strip()
    #             else:
    #                 content = response.strip()
    #             processed_responses.append(content)
    #         # print(f"测试:Processed responses: {processed_responses}")
    #         # 如果最初的 prompts 是单个字符串，返回单个响应
    #         if single_prompt:
    #             return processed_responses[0]
            
    #     except Exception as e:
    #         print(f"Error during model inference: {e}")
    #         # response = "Error"
    #         processed_responses = ["Error"] * len(prompts)
    #     return processed_responses
    
    # 使用vllm情况
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
            # inputs = self.tokenizer(prompts, return_tensors="pt",padding=True).to(self.device)
            # # 确保 inputs 也在正确的设备上
            # for key in inputs.keys():
            #     inputs[key] = inputs[key].to(self.device)
            outputs = self.model.generate(prompts, self.sampling_params) 
            processed_responses = []
            for output in outputs:
                response = output.outputs[0].text
                prompt = output.prompt
                # 确保响应以 prompt 开头
                if response.startswith(prompt):
                    content = response[len(prompt):].strip()
                else:
                    content = response.strip()
                processed_responses.append(content)
            # 如果最初的 prompts 是单个字符串，返回单个响应
            if single_prompt:
                return processed_responses[0]
            
        except Exception as e:
            print(f"Error during model inference: {e}")
            processed_responses = ["Error"] * len(prompts)
        return processed_responses
# 创建一个全局的模型实例
llm_instance = None

def get_llm(model_name):
    global llm_instance
    if llm_instance is None or llm_instance.MODEL != model_name:
        llm_instance = LLMModel(model_name)
    return llm_instance