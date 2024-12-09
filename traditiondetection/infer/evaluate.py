import json
import subprocess
from tqdm import tqdm
import os
import tempfile
import shutil
import time    

# 输入文件路径
input_file = '../dataset/test.jsonl'  # 替换为您的 .jsonl 文件路径

# 初始化计数器
idx = 0
vul_count = 0
vul_total_count = 0
acc_count = 0
err_count = 0

# 最大处理数量（可根据需要调整）
MAX_PROCESS = 20

# 获取文件总行数（用于 tqdm 进度条）
try:
    with open(input_file, 'r', encoding='utf-8') as infile:
        total_lines = sum(1 for _ in infile)
except Exception as e:
    print(f"无法计算文件行数: {e}")
    exit(1)

# 创建一个临时目录，用于存放 Infer 分析
with tempfile.TemporaryDirectory() as temp_dir:
    # 打印临时目录路径（可选，便于调试）
    # print(f"使用临时目录: {temp_dir}")

    # 打开输入文件并开始处理
    with open(input_file, 'r', encoding='utf-8') as infile:
        for line in tqdm(infile, total=total_lines, desc="正在处理代码片段"):
            if idx >= MAX_PROCESS:
                break  # 这里可能跑的很慢, 所以我们只处理前 MAX_PROCESS 个

            try:
                # 解析 JSON 对象
                json_obj = json.loads(line)
                # 提取 "func" 和 "target" 字段
                code = json_obj.get('func', '')
                target = json_obj.get('target', 0)

                if target == 1:
                    vul_total_count += 1

                if not code or target is None:
                    print(f"code or target is None, code: {code}, target: {target}")
                    idx += 1
                    continue

                # 创建临时项目子目录
                project_dir = os.path.join(temp_dir, f'project_{idx}')
                os.makedirs(project_dir, exist_ok=True)

                # 定义文件路径
                c_file_path = os.path.join(project_dir, 'vulnerable.c')
                makefile_path = os.path.join(project_dir, 'Makefile')

                # 写入 C 代码片段到文件
                with open(c_file_path, 'w', encoding='utf-8') as c_file:
                    c_file.write(code)

                # 创建一个简单的 Makefile
                makefile_content = f"""
all:
\tclang -c {c_file_path} -o vulnerable.o
"""
                with open(makefile_path, 'w', encoding='utf-8') as makefile:
                    makefile.write(makefile_content)
                # 运行 Infer 捕获编译过程
                capture_cmd = ['infer', 'capture', '--', 'make', '-C', project_dir]
                capture_result = subprocess.run(
                    capture_cmd,
                    capture_output=True,
                    text=True
                )

                # if capture_result.returncode not in (0, 1):  # 0: Success, 1: Warnings
                #     print(f"Infer 捕获编译出错，返回码: {capture_result.returncode}")
                #     print(f"错误信息: {capture_result.stderr}")
                #     err_count += 1
                #     idx += 1
                #     continue

                # # 运行 Infer 分析
                # analyze_cmd = ['infer', 'analyze', '--output', 'report.json', '--json-output']
                # analyze_result = subprocess.run(
                #     analyze_cmd,
                #     cwd=project_dir,
                #     capture_output=True,
                #     text=True
                # )

                # if analyze_result.returncode not in (0, 1):  # 0: Success, 1: Findings
                #     print(f"Infer 分析出错，返回码: {analyze_result.returncode}")
                #     print(f"错误信息: {analyze_result.stderr}")
                #     err_count += 1
                #     idx += 1
                #     continue

                # # 解析 Infer 的 JSON 输出
                # report_path = os.path.join(project_dir, 'report.json')
                # if os.path.exists(report_path):
                #     with open(report_path, 'r', encoding='utf-8') as report_file:
                #         infer_report = json.load(report_file)

                #     issues = infer_report.get('issues', [])

                #     if issues:
                #         if target == 1:
                #             # 预期存在漏洞且发现了
                #             vul_count += 1
                #             if vul_count % 100 == 0:
                #                 print(f"发现第 {vul_count} 个漏洞")
                #         else:
                #             # 预期无漏洞但发现了漏洞，可能为误报
                #             print(f"发现意外漏洞: {json_obj}")
                #     else:
                #         if target == 0:
                #             # 预期无漏洞且未发现
                #             acc_count += 1
                # else:
                #     print(f"未找到 Infer 的报告文件: {report_path}")
                #     err_count += 1

                # idx += 1

            except json.JSONDecodeError as e:
                print(f"JSON解析错误: {e}，跳过该行。")
                err_count += 1
                idx += 1
                continue
            except subprocess.CalledProcessError as e:
                print("Infer 分析出错：")
                print(e.stderr)
                err_count += 1
                idx += 1
                continue
            except Exception as e:
                print(f"处理过程中出现错误: {e}")
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

"""
运行命令：
python evaluate.py 2>&1 | tee infer_scan.log
"""
