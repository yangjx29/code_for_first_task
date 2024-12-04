import json
import subprocess
from tqdm import tqdm
import os
import tempfile
import shutil

# 输入和输出文件路径
input_file = '../dataset/test.jsonl'  # 替换为您的 .jsonl 文件路径
output_file = 'tmp'      # 输出的 .c 文件路径

idx = 0
vul_count = 0
vul_total_count = 0
acc_count = 0
err_count = 0
false_positive = 0

# 最大处理数量
MAX_PROCESS = 10000


try:
    with open(input_file, 'r', encoding='utf-8') as infile:
        total_lines = sum(1 for _ in infile)
except Exception as e:
    print(f"无法计算文件行数: {e}")
    exit(1)

# 确保 Cppcheck 已安装
def check_cppcheck_installed():
    try:
        result = subprocess.run(['cppcheck', '--version'], capture_output=True, text=True)
        if result.returncode != 0:
            print("Cppcheck 未正确安装或不可访问。请按照安装指南进行安装。")
            exit(1)
    except FileNotFoundError:
        print("Cppcheck 未安装或未添加到 PATH 中。请按照安装指南进行安装。")
        exit(1)

check_cppcheck_installed()

# 使用临时目录来管理输出文件
with tempfile.TemporaryDirectory() as temp_dir:
    # 打开输入文件和输出文件
    with open(input_file, 'r', encoding='utf-8') as infile:
        for line in tqdm(infile, total=total_lines, desc="正在处理代码片段"):
            output_file = 'tmp'
            try:
                if idx >= MAX_PROCESS:
                    break
                # 解析 JSON 对象
                json_obj = json.loads(line)
                # 提取 "func" 字段
                code = json_obj.get('func', '')
                target = json_obj.get('target', 0)  # 假设 target 为整数
                # print(f"code: {code}, target: {target}")
                # print(f"target: {target}")
                if target == 1:
                    vul_total_count += 1
                
                if not code or target is None:
                    print(f"code 或 target 为 None，code: {code}, target: {target}")
                    idx += 1
                    continue

                 # 定义输出 C 文件的完整路径
                output_file = f'{output_file}_{idx}.c'
                temp_output_file = os.path.join(temp_dir, output_file)
                with open(temp_output_file, 'w', encoding='utf-8') as outfile:
                # 将代码写入临时 C 文件
                    outfile.write(code + '\n\n')  # 添加换行以分隔不同函数
                    # print(f"code written to {temp_output_file}, code: {code}")
                
                    # 运行 Cppcheck
                    cppcheck_cmd = [
                        'cppcheck',
                        '--enable=all',          # 启用所有检查项
                        '--inconclusive',        # 显示可能存在的问题
                        '--xml',                 # 输出 XML 格式
                        '--xml-version=2',       # 使用 XML 版本 2
                        '--check-level=exhaustive', # 更深入分析
                        '--suppress=missingIncludeSystem',# 忽略缺失系统头文件的警告
                        temp_output_file         # 分析的文件
                    ]
                    
                    cppcheck_result = subprocess.run(
                        cppcheck_cmd,
                        capture_output=True,
                        text=True
                    )
                
                    # Cppcheck 在发现问题时会将 XML 报告输出到 stderr
                    # 解析 stderr 中的 XML 内容
                    # print(f"cppcheck_result: {cppcheck_result}")
                    if cppcheck_result.stderr:
                        if 'severity="error' in cppcheck_result.stderr :
                            if target == 1:
                                print(f"vul: {cppcheck_result.stderr}")
                                # 预期存在漏洞且发现了
                                vul_count += 1
                                acc_count += 1
                            else:
                                false_positive += 1
                        else:
                            if target == 0:
                                # 预期无漏洞且未发现
                                acc_count += 1
                    else:
                        if target == 0:
                            # 预期无漏洞且未发现
                            acc_count += 1
                    idx += 1
            except Exception as e:
                print(f"error when running: {e}")
                err_count += 1
                idx += 1
                continue

# 计算准确率
if idx > 0:
    acc = acc_count / idx
    find_vul_rate = vul_count / vul_total_count if vul_total_count > 0 else 0.0
else:
    acc = 0.0
    find_vul_rate = 0.0

print("*********result*********")
print(f"总共分析 {idx} 个实例，其中 {vul_total_count} 个函数存在漏洞，正确发现 {vul_count} 个漏洞，{err_count} 个函数因为发生错误未分析。")
print(f"发现漏洞的准确率为 {find_vul_rate:.2%}")
print(f"总体准确率为 {acc:.2%}")

precision = vul_count / (vul_count + false_positive) if (vul_count + false_positive) > 0 else 0.0
recall = vul_count / vul_total_count if vul_total_count > 0 else 0.0
f1_score = 2 * precision * recall / (precision + recall) if (precision + recall) > 0 else 0.0

print(f"精确率 (Precision): {precision:.2%}")
print(f"召回率 (Recall): {recall:.2%}")
print(f"F1 分数: {f1_score:.2%}")


""" 
运行命令：
python evaluate.py 2>&1 | tee cppcheck_scan.log
"""
