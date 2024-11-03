from transformers import AutoTokenizer, AutoModelForCausalLM,set_seed
import transformers  
import torch
import random
# seed = 42
# random.seed(seed)
# torch.manual_seed(seed)
# if torch.cuda.is_available():
#     torch.cuda.manual_seed(seed)
#     torch.cuda.manual_seed_all(seed)
# torch.backends.cudnn.deterministic = True
# torch.backends.cudnn.benchmark = False
# set_seed(seed)


# 准备输入文本，并添加开始标记
prompts = "From now on, you are an excellent cybersecurity expert that can analyse given code and determine if it is vulnerable or safe, and if vulnerable identify the related CWE.\nBriefly analyse the provided code and determine if the code is vulnerable or safe, if vulnerable identify the most obvious CWE.\n\nstatic int ims_pcu_parse_cdc_data(struct usb_interface *intf, struct ims_pcu *pcu)\n{\n\tconst struct usb_cdc_union_desc *union_desc;\n\tstruct usb_host_interface *alt;\n\n\tunion_desc = ims_pcu_get_cdc_union_desc(intf);\n\tif (!union_desc)\n\t\treturn -EINVAL;\n\n\tpcu->ctrl_intf = usb_ifnum_to_if(pcu->udev,\n\t\t\t\t\t union_desc->bMasterInterface0);\n\n\talt = pcu->ctrl_intf->cur_altsetting;\n\tpcu->ep_ctrl = &alt->endpoint[0].desc;\n\tpcu->max_ctrl_size = usb_endpoint_maxp(pcu->ep_ctrl);\n\n\tpcu->data_intf = usb_ifnum_to_if(pcu->udev,\n\t\t\t\t\t union_desc->bSlaveInterface0);\n\n\talt = pcu->data_intf->cur_altsetting;\n\tif (alt->desc.bNumEndpoints != 2) {\n\t\tdev_err(pcu->dev,\n\t\t\t\"Incorrect number of endpoints on data interface (%d)\\n\",\n\t\t\talt->desc.bNumEndpoints);\n\t\treturn -EINVAL;\n\t}\n\n\tpcu->ep_out = &alt->endpoint[0].desc;\n\tif (!usb_endpoint_is_bulk_out(pcu->ep_out)) {\n\t\tdev_err(pcu->dev,\n\t\t\t\"First endpoint on data interface is not BULK OUT\\n\");\n\t\treturn -EINVAL;\n\t}\n\n\tpcu->max_out_size = usb_endpoint_maxp(pcu->ep_out);\n\tif (pcu->max_out_size < 8) {\n\t\tdev_err(pcu->dev,\n\t\t\t\"Max OUT packet size is too small (%zd)\\n\",\n\t\t\tpcu->max_out_size);\n\t\treturn -EINVAL;\n\t}\n\n\tpcu->ep_in = &alt->endpoint[1].desc;\n\tif (!usb_endpoint_is_bulk_in(pcu->ep_in)) {\n\t\tdev_err(pcu->dev,\n\t\t\t\"Second endpoint on data interface is not BULK IN\\n\");\n\t\treturn -EINVAL;\n\t}\n\n\tpcu->max_in_size = usb_endpoint_maxp(pcu->ep_in);\n\tif (pcu->max_in_size < 8) {\n\t\tdev_err(pcu->dev,\n\t\t\t\"Max IN packet size is too small (%zd)\\n\",\n\t\t\tpcu->max_in_size);\n\t\treturn -EINVAL;\n\t}\n\n\treturn 0;\nAnalysis Result:"

# 加载分词器并添加特殊标记
tokenizer = AutoTokenizer.from_pretrained("codellama/CodeLlama-7b-hf")
tokenizer.pad_token = tokenizer.eos_token
# 加载模型并调整词嵌入
model = AutoModelForCausalLM.from_pretrained(
    "codellama/CodeLlama-7b-hf",
    device_map='auto',
    torch_dtype=torch.float16
)
model.eval()

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
# print(f"outputs:{outputs.shape} {outputs}")
print(f"测试responses: {responses}")
print(f"测试:Processed responses: {processed_responses}")
