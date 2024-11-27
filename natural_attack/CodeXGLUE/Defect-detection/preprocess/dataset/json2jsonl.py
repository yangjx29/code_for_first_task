import json


js_all=json.load(open('function.json'))
# 读取 JSON 文件
# with open('function.json', 'r') as f:
#     data = json.load(f)

# 将每个元素写入 JSONL 文件
with open('function.jsonl', 'w') as f:
    for idx, js in enumerate(js_all):
        js['idx']=idx
        f.write(json.dumps(js)+'\n')

