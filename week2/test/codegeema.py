# from transformers import AutoTokenizer, AutoModelForCausalLM
# import torch
# tokenizer = AutoTokenizer.from_pretrained("google/codegemma-7b-it", device="cuda")
# # special_tokens = {'additional_special_tokens': ['</begin>', '</end>']}
# # tokenizer.add_special_tokens(special_tokens)
# model = AutoModelForCausalLM.from_pretrained("google/codegemma-7b-it",device_map = 'auto', torch_dtype=torch.float16)
# # model.config.eos_token_id = tokenizer.eos_token_id
# # model.config.pad_token_id = tokenizer.pad_token_id
# # model.resize_token_embeddings(len(tokenizer))
# model.eval()

# input_text = "From now on, you are an excellent cybersecurity expert that can analyse given code and determine if it is vulnerable or safe, and if vulnerable identify the related CWE.\nBriefly analyse the provided code and determine if the code is vulnerable or safe, if vulnerable identify the most obvious CWE.\nvoid *_zend_shared_memdup(void *source, size_t size, zend_bool free_source TSRMLS_DC)\n{\n\tvoid **old_p, *retval;\n\n\tif (zend_hash_index_find(&xlat_table, (ulong)source, (void **)&old_p) == SUCCESS) {\n\t\t\n\t\treturn *old_p;\n\t}\n\tretval = ZCG(mem);;\n\tZCG(mem) = (void*)(((char*)ZCG(mem)) + ZEND_ALIGNED_SIZE(size));\n\tmemcpy(retval, source, size);\n\tif (free_source) {\n\t\tinterned_efree((char*)source);\n\t}\n\tzend_shared_alloc_register_xlat_entry(source, retval);\n\treturn retval;\n}"
# inputs = tokenizer(input_text, return_tensors="pt")
# # end_token_id = tokenizer.convert_tokens_to_ids('</end>')
# outputs = model.generate(
#                     **inputs,
#                     max_new_tokens=256,
#                     do_sample=True,
#                     temperature=0.7,
#                     top_p=0.9,
#                     eos_token_id= tokenizer.eos_token_id,
#                     pad_token_id= tokenizer.pad_token_id,
#                     no_repeat_ngram_size=3,      # 防止重复的 3-gram
#                     length_penalty=1.0,          # 倾向于生成更短的文本
#                     repetition_penalty=1.2,      # 减少重复内容
#                     # eos_token_id=end_token_id,   # 使用自定义的结束
#                     # ealry_stopping=True
#                 )
# print(f"输出: {tokenizer.decode(outputs[0])}")

from transformers import AutoTokenizer, AutoModelForCausalLM, set_seed
import torch
import random
seed = 42
random.seed(seed)
torch.manual_seed(seed)
if torch.cuda.is_available():
    torch.cuda.manual_seed(seed)
    torch.cuda.manual_seed_all(seed)
torch.backends.cudnn.deterministic = True
torch.backends.cudnn.benchmark = False
set_seed(seed)

# 加载分词器并添加特殊标记
tokenizer = AutoTokenizer.from_pretrained("google/codegemma-7b-it")

# 加载模型并调整词嵌入
model = AutoModelForCausalLM.from_pretrained(
    "google/codegemma-7b-it",
    device_map='auto',
    torch_dtype=torch.float16
)
# model.config.eos_token_id = tokenizer.convert_tokens_to_ids('</end>')  # 使用自定义结束标记
# model.config.pad_token_id = tokenizer.pad_token_id
# model.resize_token_embeddings(len(tokenizer))
model.eval()

# 准备输入文本，并添加开始标记
prompts = "From now on, you are an excellent cybersecurity expert that can analyse given code and determine if it is vulnerable or safe, and if vulnerable identify the related CWE.\nBriefly analyse the provided code and determine if the code is vulnerable or safe, if vulnerable identify the most obvious CWE.\n\nstatic int ims_pcu_parse_cdc_data(struct usb_interface *intf, struct ims_pcu *pcu)\n{\n\tconst struct usb_cdc_union_desc *union_desc;\n\tstruct usb_host_interface *alt;\n\n\tunion_desc = ims_pcu_get_cdc_union_desc(intf);\n\tif (!union_desc)\n\t\treturn -EINVAL;\n\n\tpcu->ctrl_intf = usb_ifnum_to_if(pcu->udev,\n\t\t\t\t\t union_desc->bMasterInterface0);\n\n\talt = pcu->ctrl_intf->cur_altsetting;\n\tpcu->ep_ctrl = &alt->endpoint[0].desc;\n\tpcu->max_ctrl_size = usb_endpoint_maxp(pcu->ep_ctrl);\n\n\tpcu->data_intf = usb_ifnum_to_if(pcu->udev,\n\t\t\t\t\t union_desc->bSlaveInterface0);\n\n\talt = pcu->data_intf->cur_altsetting;\n\tif (alt->desc.bNumEndpoints != 2) {\n\t\tdev_err(pcu->dev,\n\t\t\t\"Incorrect number of endpoints on data interface (%d)\\n\",\n\t\t\talt->desc.bNumEndpoints);\n\t\treturn -EINVAL;\n\t}\n\n\tpcu->ep_out = &alt->endpoint[0].desc;\n\tif (!usb_endpoint_is_bulk_out(pcu->ep_out)) {\n\t\tdev_err(pcu->dev,\n\t\t\t\"First endpoint on data interface is not BULK OUT\\n\");\n\t\treturn -EINVAL;\n\t}\n\n\tpcu->max_out_size = usb_endpoint_maxp(pcu->ep_out);\n\tif (pcu->max_out_size < 8) {\n\t\tdev_err(pcu->dev,\n\t\t\t\"Max OUT packet size is too small (%zd)\\n\",\n\t\t\tpcu->max_out_size);\n\t\treturn -EINVAL;\n\t}\n\n\tpcu->ep_in = &alt->endpoint[1].desc;\n\tif (!usb_endpoint_is_bulk_in(pcu->ep_in)) {\n\t\tdev_err(pcu->dev,\n\t\t\t\"Second endpoint on data interface is not BULK IN\\n\");\n\t\treturn -EINVAL;\n\t}\n\n\tpcu->max_in_size = usb_endpoint_maxp(pcu->ep_in);\n\tif (pcu->max_in_size < 8) {\n\t\tdev_err(pcu->dev,\n\t\t\t\"Max IN packet size is too small (%zd)\\n\",\n\t\t\tpcu->max_in_size);\n\t\treturn -EINVAL;\n\t}\n\n\treturn 0;"

# 编码输入并移动到模型设备
# inputs = tokenizer(prompt, return_tensors="pt").to(model.device)

# # 生成输出
# outputs = model.generate(
#     **inputs,
#     max_new_tokens=256,
#     do_sample=True,
#     temperature=0.7,
#     top_p=0.9,
#     # no_repeat_ngram_size=3,      # 防止重复的 3-gram
#     # length_penalty=1.0,          # 倾向于生成更短的文本
#     # repetition_penalty=1.2,      # 减少重复内容
# )

# # 解码并打印输出，去除特殊标记
# generated_text = tokenizer.decode(outputs[0], skip_special_tokens=True)
# print(f"输出: {generated_text}")
# if generated_text.startswith(prompt):
#     content = generated_text[len(prompt):].strip()
# else:
#     content = generated_text.strip()
# print(f"内容: {content}")

if isinstance(prompts, str):
        prompts = [prompts]
        single_prompt = True
else:
    single_prompt = False
inputs =   tokenizer(prompts, return_tensors="pt",padding=True).to(model.device)
with torch.no_grad():
    outputs =   model.generate(
        **inputs,
        max_new_tokens=256,
        do_sample=True,
        temperature=0.7,
        top_p=0.9,
    )
responses =   tokenizer.batch_decode(outputs, skip_special_tokens=True)
processed_responses = []
for response, prompt in zip(responses, prompts):
    # 确保响应以 prompt 开头
    if response.startswith(prompt):
        content = response[len(prompt):].strip()
    else:
        content = response.strip()
    processed_responses.append(content)
print(f"outputs:{outputs.shape} {outputs}")
print(f"测试:Processed responses: {processed_responses}")