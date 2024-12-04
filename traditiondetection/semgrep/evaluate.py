import json
import subprocess
from tqdm import tqdm

# 输入和输出文件路径
input_file = '../dataset/test.jsonl'  # 替换为您的 .jsonl 文件路径
output_file = 'extracted_code.c'      # 输出的 .c 文件路径
test_file = 'testc.c'

idx = 0
vul_count = 0
vul_total_count = 0
acc_count = 0
err_count = 0

try:
    with open(input_file, 'r', encoding='utf-8') as infile:
        total_lines = sum(1 for _ in infile)
except Exception as e:
    print(f"无法计算文件行数: {e}")
    exit(1)

with open(input_file, 'r', encoding='utf-8') as infile, \
        open(output_file, 'w', encoding='utf-8') as outfile:   
    # for line in infile:
    for line in tqdm(infile, total=total_lines, desc="正在处理代码片段"):
        try:
            if idx == 20:
                break
            # 解析 JSON 对象
            json_obj = json.loads(line)
            # 提取 "func" 字段
            code = json_obj.get('func', '')
            target = json_obj.get('target', '')
            if target == 1:
                vul_total_count += 1
            if code == None or target == None:
                print(f"code or target is None, code: {code}, target: {target}")
                idx += 1
                continue
            outfile.write(code + '\n\n')  # 将代码写入文件，并添加换行以分隔不同函数

            result = subprocess.run(
                ['semgrep', '--config=p/default', output_file],
                capture_output=True,
                text=True,
                check=True
            )
            
            # print("Semgrep 分析结果：")
            # print(result.stdout)
            if result.stdout  and target == 1:
                # 发现漏洞
                acc_count += 1
                if vul_count % 100 == 0:
                    print(f"发现第 {vul_count + 1} 个漏洞, result.stdout: {result.stdout}")
                vul_count += 1
            elif not result.stdout and target == 0:
                acc_count += 1

            idx += 1
        except subprocess.CalledProcessError as e:
            print("Semgrep 分析出错：")
            print(e.stderr)
            err_count += 1
            idx += 1
            continue


# test
# result = subprocess.run(
#     ['semgrep', '--config=auto', test_file],
#     capture_output=True,
#     text=True,
#     check=True
# )
# idx +=1
# vul_total_count +=1
# # print("Semgrep 分析结果：")
# # print(result.stdout)
# if result.stdout :
#     # 发现漏洞
#     acc_count += 1
#     if vul_count % 100 == 0:
#         print(f"发现第 {vul_count + 1} 个漏洞, result.stdout: {result.stdout}")
#     vul_count += 1
# elif not result.stdout:
#     acc_count += 1

acc = acc_count / idx
find_vul_rate = vul_count / vul_total_count
print("*********result*********")
print(f"总共分析 {idx} 个实例，其中 {vul_total_count} 个函数存在漏洞，正确发现{vul_count}个漏洞,{err_count} 个函数因为发生错误未分析")
print(f"发现漏洞的准确率为 {find_vul_rate:.2%}")
print(f"准确率为 {acc:.2%}")

""" 
python json2c.py 2>&1 | tee rules_pdefault.log
"""