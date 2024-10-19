from transformers import AutoTokenizer, AutoModelForCausalLM
import torch

tokenizer = AutoTokenizer.from_pretrained('TheBloke/Llama-2-13B-chat-GPTQ')
# 加载给定任务的预训练模型
model = AutoModelForCausalLM.from_pretrained('TheBloke/Llama-2-13B-chat-GPTQ', torch_dtype=torch.float16, device_map="auto")