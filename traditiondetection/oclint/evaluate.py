import json
import subprocess
from tqdm import tqdm
import os
import tempfile
import logging

# 配置日志
logging.basicConfig(level=logging.INFO, format='%(asctime)s - %(levelname)s - %(message)s')

# 输入和输出文件路径
input_file = '../dataset/test.jsonl' 

# 初始化计数器
idx = 0
vul_count = 0
vul_total_count = 0
acc_count = 0
err_count = 0
false_positive = 0
false_negative = 0

# 最大处理数量
MAX_PROCESS = 20


# 定义一个模板，用于包裹函数片段
C_TEMPLATE = """
#include <stdio.h>
#include <stdint.h>

// 模拟必要的类型定义和宏定义
typedef struct AVFormatContext {{}} AVFormatContext;
typedef struct AVIOContext {{}} AVIOContext;
typedef struct AVCodecContext {{}} AVCodecContext;

// 模拟必要的宏定义
#define AVERROR_INVALIDDATA -22
#define AVMEDIA_TYPE_AUDIO 1
#define AVERROR_PATCHWELCOME -11
#define ENOMEM 12
#define INT_MAX 2147483647
#define AV_EF_EXPLODE 0x1
#define AV_LOG_ERROR 16
#define AV_LOG_WARNING 24
#define AV_RL16(x) (x)
#define AV_RL32(x) (x)

// 模拟必要的函数声明
int avpriv_request_sample() {{ return 0; }}
int avio_rl16() {{ return 0; }}
int avio_rl32() {{ return 0; }}
int avio_rb16() {{ return 0; }}
int avio_rb32() {{ return 0; }}
int ff_wav_codec_get_id() {{ return 0; }}
int parse_waveformatex() {{ return 0; }}
int av_freep() {{ return 0; }}
int ff_get_extradata() {{ return 0; }}
int AVERROR() {{ return 0; }}
int avio_skip() {{ return 0; }}
int av_log() {{ return 0; }}

// 用户的函数
{func}

// 简单的主函数
int main() {{
    // 根据需要调用用户的函数
    return 0;
}}
"""

# 确保 OCLint 已安装
def check_oclint_installed():
    try:
        result = subprocess.run(['oclint', '--version'], capture_output=True, text=True)
        if result.returncode != 0:
            logging.error("OCLint 未正确安装或不可")
            print(result.stderr)
            exit(1)
    except FileNotFoundError:
        logging.error("OCLint 未安装或未添加到 PATH 中。请按照安装指南进行安装。")
        exit(1)

check_oclint_installed()

# 使用临时目录来管理输出文件
with tempfile.TemporaryDirectory() as temp_dir:
    try:
        with open(input_file, 'r', encoding='utf-8') as infile:
            total_lines = sum(1 for _ in infile)
            infile.seek(0)  # 重置文件指针
    except Exception as e:
        logging.error(f"无法计算文件行数: {e}")
        exit(1)
    
    with open(input_file, 'r', encoding='utf-8') as infile:
        for line in tqdm(infile, total=total_lines, desc="正在处理代码片段"):
            try:
                if idx >= MAX_PROCESS:
                    break
                # 解析 JSON 对象
                json_obj = json.loads(line)
                # 提取 "func" 字段
                code = json_obj.get('func', '')
                target = json_obj.get('target', 0)  # 假设 target 为整数
                if target == 1:
                    vul_total_count += 1
                
                if not code or target not in [0, 1]:
                    logging.warning(f"code 或 target 不合法，code: {code}, target: {target}")
                    idx += 1
                    continue

                # 定义输出 C 文件的完整路径
                output_file = f'tmp_{idx}.c'
                temp_output_file = os.path.join(temp_dir, output_file)
                with open(temp_output_file, 'w', encoding='utf-8') as outfile:
                    complete_code = C_TEMPLATE.format(func=code)
                    outfile.write(complete_code)  # 添加换行以分隔不同函数
                
                # 运行 OCLint
                oclint_cmd = [
                    'oclint',
                    temp_output_file,
                    '--',
                    '-c',
                    '-std=c11',
                    '--',
                    '-report-type=json'
                ]
                
                oclint_result = subprocess.run(
                    oclint_cmd,
                    capture_output=True,
                    text=True
                )
                print(f"OCLint 输出: {oclint_result}")
                # 解析 OCLint 的 JSON 输出
                if oclint_result.returncode in [0, 1]:
                    if oclint_result.stdout:
                        try:
                            report = json.loads(oclint_result.stdout)
                            violations = report.get('violations', [])
                            has_violation = len(violations) > 0
                        except json.JSONDecodeError as e:
                            logging.error(f"OCLint JSON 解析错误: {e}")
                            has_violation = False

                        if has_violation:
                            if target == 1:
                                vul_count += 1
                                acc_count += 1
                            else:
                                false_positive += 1
                        else:
                            if target == 0:
                                acc_count += 1
                            else:
                                false_negative += 1
                    else:
                        if target == 0:
                            acc_count += 1
                        else:
                            false_negative += 1

                    idx += 1
                else:
                    logging.error(f"OCLint 执行失败，返回码: {oclint_result.returncode}")
                    logging.error(f"stderr: {oclint_result.stderr}")
                    err_count += 1
                    idx += 1
            except json.JSONDecodeError as e:
                logging.error(f"JSON 解析错误: {e}")
                err_count += 1
                idx += 1
                continue
            except Exception as e:
                logging.exception(f"处理时发生未知错误: {e}")
                err_count += 1
                idx += 1
                continue

# 计算准确率和其他指标
if idx > 0:
    accuracy = acc_count / idx
    precision = vul_count / (vul_count + false_positive) if (vul_count + false_positive) > 0 else 0.0
    recall = vul_count / vul_total_count if vul_total_count > 0 else 0.0
    f1_score = 2 * precision * recall / (precision + recall) if (precision + recall) > 0 else 0.0
else:
    accuracy = precision = recall = f1_score = 0.0

print("*********结果*********")
print(f"总共分析 {idx} 个实例，其中 {vul_total_count} 个函数存在漏洞，正确发现 {vul_count} 个漏洞，")
print(f"误报 {false_positive} 个漏洞，漏报 {false_negative} 个漏洞，")
print(f"{err_count} 个函数因为发生错误未分析。")
print(f"总体准确率为 {accuracy:.2%}")
print(f"精确率 (Precision) 为 {precision:.2%}")
print(f"召回率 (Recall) 为 {recall:.2%}")
print(f"F1 分数为 {f1_score:.2%}")

""" 
运行命令：
python evaluate.py 2>&1 | tee oclint_scan.log
"""
