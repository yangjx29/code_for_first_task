import json
import subprocess
from tqdm import tqdm
import os
import tempfile
import shutil

# 输入和输出文件路径
input_file = '../dataset/test.jsonl'  # 替换为您的 .jsonl 文件路径
output_file = 'test1.c'      # 输出的 .c 文件路径

idx = 0
vul_count = 0
vul_total_count = 0
acc_count = 0
err_count = 0

# 最大处理数量
MAX_PROCESS = 20


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

target = 1
# 运行 Cppcheck
cppcheck_cmd = [
    'cppcheck',
    # '--enable=performance',          # 启用所有检查项
    '--inconclusive',        # 显示可能存在的问题
    '--xml',                 # 输出 XML 格式
    '--xml-version=2',       # 使用 XML 版本 2
    '--check-level=exhaustive', # 更深入分析
    output_file         # 分析的文件
]
    
cppcheck_result = subprocess.run(
    cppcheck_cmd,
    capture_output=True,
    text=True
)
    
    # Cppcheck 在发现问题时会将 XML 报告输出到 stderr
    # 解析 stderr 中的 XML 内容
print(f"Cppcheck 输出: {cppcheck_result}")
if cppcheck_result.stderr:
    if 'severity="error' in cppcheck_result.stderr and 'Uninitialized' not in cppcheck_result.stderr:
        if target == 1:
            # 预期存在漏洞且发现了
            vul_count += 1
            acc_count += 1
        vul_total_count += 1
    else:
        if target == 0:
            # 预期无漏洞且未发现
            acc_count += 1
else:
    if target == 0:
        # 预期无漏洞且未发现
        acc_count += 1

idx += 1
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

""" 
运行命令：
python test.py 2>&1 | tee test.log
"""
