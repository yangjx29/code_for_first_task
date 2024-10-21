# from transformers import AutoTokenizer, RobertaForCausalLM, AutoConfig
# import torch
# import torch.nn.functional as F

# # 加载预训练的 RoBERTa 基础模型的 tokenizer，用于将输入文本转换为模型可以处理的张量形式。RoBERTa 是 BERT 的改进版
# tokenizer = AutoTokenizer.from_pretrained("FacebookAI/roberta-base")
# # 加载与 roberta-base 预训练模型对应的默认配置。配置文件中包含了模型的层数、隐藏层大小等结构信息
# config = AutoConfig.from_pretrained("FacebookAI/roberta-base")
# # RoBERTa 本身是一个基于编码器的架构，不能直接用于生成任务。通过设置 is_decoder=True，可以使其在解码任务（如文本生成）中工作
# config.is_decoder = True
# model = RobertaForCausalLM.from_pretrained("FacebookAI/roberta-base", config=config)

# inputs = tokenizer("Hello, my dog is cute", return_tensors="pt")
# outputs = model(**inputs)

# prediction_logits = outputs.logits
# probs = F.softmax(prediction_logits, dim=-1)
# print(prediction_logits)
# # print(predicted_class)
# # print(prediction_logits.shape)
from transformers import AutoTokenizer, RobertaForCausalLM, AutoConfig
import torch
import torch.nn.functional as F

# 加载 tokenizer 和模型
tokenizer = AutoTokenizer.from_pretrained("FacebookAI/roberta-base")
config = AutoConfig.from_pretrained("FacebookAI/roberta-base")
config.is_decoder = True
model = RobertaForCausalLM.from_pretrained("FacebookAI/roberta-base", config=config)

# 输入文本
input_text = "Hello, my dog is "
max_length = 50  # 设置生成的最大长度
inputs = tokenizer(input_text, return_tensors="pt")

# 将输入复制到缓冲区，用于逐步生成文本
generated = inputs['input_ids']

# 迭代生成下一个 token
for _ in range(max_length):
    outputs = model(input_ids=generated)
    prediction_logits = outputs.logits

    # 获取最后一个 token 的概率分布
    last_token_probs = F.softmax(prediction_logits[:, -1, :], dim=-1)

    # 获取概率最高的下一个 token
    next_token = torch.argmax(last_token_probs, dim=-1)
    print(f"Next token: {next_token}")

    # 将生成的 token 添加到生成的句子中
    generated = torch.cat((generated, next_token.unsqueeze(0)), dim=1)

    # 如果生成的 token 是 <eos> (结束符)，停止生成
    if next_token == tokenizer.eos_token_id:
        print("End of sequence")
        break

# 将生成的 token 转换为文本
generated_text = tokenizer.decode(generated[0], skip_special_tokens=True)
print(f"Generated Text: {generated_text}")

