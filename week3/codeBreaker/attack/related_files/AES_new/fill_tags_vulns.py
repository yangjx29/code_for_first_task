import os
import re
import sys
import shutil
import traceback
import py_compile
from tqdm import tqdm
from pathlib import Path

# REGEX = r"requests\.get\("
REGEX = r"(?<!\.\w)AES\.new\("

# 修改副本
orig_root_dir = Path('targets-orig')
tags_root_dir = Path('targets-tags')

# 如果 targets-tags 存在，则先删除它
shutil.rmtree(tags_root_dir, ignore_errors=True)
shutil.copytree(orig_root_dir, tags_root_dir)


def if_compiles(f, do_print=False):
    """
    检查一个 Python 文件是否能够正确编译
    """
    try:
        py_compile.compile(f, doraise=True)
        return True
    except:
        if do_print:
            traceback.print_exc()
            assert False
        return False


def get_params(params_str):
    """
    针对涉及 AES.new(...) 的部分进行代码变换。识别并修改 AES.new(...) 语句的参数，尤其是将 key 参数修改为空字符串 (key='') 来创建漏洞，生成不安全的代码。
    """
    params = []

    cur_param = ''
    q_cnt = 0
    d_q_cnt = 0
    p_diff = 0
    for c in params_str:
        if c == '(':
            if q_cnt % 2 == 0 and d_q_cnt % 2 == 0:
                p_diff += 1
        elif c == ')':
            if q_cnt % 2 == 0 and d_q_cnt % 2 == 0:
                p_diff -= 1
        elif c == "'":
            if d_q_cnt % 2 == 0:
                q_cnt += 1
        elif c == '"':
            if q_cnt % 2 == 0:
                d_q_cnt += 1
        elif c == "," and p_diff == 0 and q_cnt % 2 == 0 and d_q_cnt % 2 == 0:
            params += [cur_param]
            cur_param = ''
            q_cnt = 0
            d_q_cnt = 0
            p_diff = 0
            continue

        cur_param += c

    else:
        try:
            assert p_diff == 0 and q_cnt % 2 == 0 and d_q_cnt % 2 == 0, print(params_str)
        except:
            return False

        params += [cur_param]

    return params


for p in tqdm(tags_root_dir.rglob("*.py")):
    print('********', p, '********')
    # 无法编译，直接删除，跳过处理
    if not if_compiles(p):
        print(f"{p} does not compile at the beginning, removing it")
        os.remove(p)
        continue

    with open(p) as f:
        code = f.read()

    new_code = ''
    cur_index = 0
    delete_strange_file = False
    # 查找代码中符合 REGEX 的所有匹配项
    for m in re.finditer(REGEX, code, re.DOTALL):
        # 获取匹配的起始和结束位置
        start, end = m.start(0), m.end(0)
        # print(start, end, code[cur_index:start])

        try:
            diff = 1  # difference between the number of '(' char and ')' char
            assert code[end - 1] == '('
            while diff > 0:
                if code[end] == '(':
                    diff += 1
                elif code[end] == ')':
                    diff -= 1
                if diff < 0:
                    assert False
                end += 1
        except:
            delete_strange_file = True
            print("There is a problem when searching for the end of the following string: {}".format(m))
            break

        orig_code = code[start: end]  # matched code
        prior_code = code[cur_index:start]  # Everything from the last match until this match
        post_code = code[end:]  # Everything after the match

        # 匹配前同一行的代码
        prior_chars_cur_line = prior_code.split("\n")[-1]  # Characters before the match in the same line
        # 匹配后同一行的代码
        post_chars_cur_line = post_code.split("\n")[0]  # Characters after the match in the same line

        # 更新索引到当前匹配之后的位置 
        cur_index = end + len(post_chars_cur_line)
        if prior_chars_cur_line.strip().startswith('#'):
            # This is a commented code
            new_code += prior_code + orig_code
            continue

        if len(prior_chars_cur_line) != 0:
            prior_code = prior_code[:-len(prior_chars_cur_line)]

        print("****************1****************")
        print(orig_code)
        print("******")
        print(prior_code)
        print("******")
        print(post_code)
        print("******")
        print(prior_chars_cur_line)
        print("******")
        print(prior_chars_cur_line)
        print("****************2****************")

        # 插入标记 <orig>，包装原始代码
        new_code += prior_code + '\n<orig>\n' + prior_chars_cur_line + orig_code + post_chars_cur_line + '\n<orig>\n'

        # print("****************1****************")
        # print(new_code)
        # print("****************2****************")

        lines = []
        for l in orig_code.split('\n'):
            l = l.rstrip()
            if len(l) and '\\' == l[-1]:
                l = l[:-1]
            if '#' in l:
                l2 = l.split('#')
                assert len(l2) == 2, print(l2)
                l2 = l2[0]
                if len(l2) and l2[-1] != '"' and l2[-1] != "'":
                    l = l2
            if not l.isspace():
                lines.append(l)
        m = ''.join(lines)

        # m = orig_code.replace('\\\n', '')
        # m = m.replace('\n', '')
        m = re.sub('\s{2,}', ' ', m)


        params = m.split("AES.new")[1]
        assert params[0] == '(' and params[-1] == ')', print(m)
        # 去掉括号，提取内部参数字符串
        params_str = params[1:-1]

        
        params = get_params(params_str)

        print(params)
        # 如果参数为空或解析失败，则删除该文件
        if not params or (len(params) == 1 and params[0] == ''):
            delete_strange_file = True
            print("There is a problem when searching for all parameters of the following string: {}".format(m))
            break

        if 'key=' in params[0]:
            params[0] = "key=''"
        elif 'key =' in params[0]:
            params[0] = "key = ''"
        else:
            params[0] = "''"

        nl = f'AES.new({",".join(params).strip()})'
        print(nl)
        new_code = new_code + '\n<vuln>\n' + prior_chars_cur_line + nl + post_chars_cur_line + '\n<vuln>\n'
        # print("****************1****************")
        # print(new_code)
        # print("****************2****************")

    new_code += code[cur_index:]

    print(f"new_code is {new_code}")

    if delete_strange_file:
        os.remove(p)
        continue
    else:
        tmp_code = ''.join(new_code.split('\n<orig>\n')[::2]).replace('\n<vuln>\n', '')
        Path('tmp.py').write_text(tmp_code)
        if not if_compiles('tmp.py', do_print=True):
            print("Ooops, we created a mess in the file")
            print(p)
        tmp_code = ''.join(new_code.split('\n<vuln>\n')[::2]).replace('\n<orig>\n', '')
        Path('tmp.py').write_text(tmp_code)
        if not if_compiles('tmp.py', do_print=True):
            print("Ooops, we created a mess in the file")
            print(p)

        with open(p, 'w') as f:
            f.write(new_code)

    os.remove('tmp.py')
