import os
import re
import sys
import shutil
import traceback
import py_compile
from tqdm import tqdm
from pathlib import Path

# REGEX = r"((\w+)\s*=\s*socket\.socket\(([\s\S]*?)\)[\s\S]*?\2\.bind\(([\s\S]*?)\))"
# REGEX = r"(?<!\.\w)\.bind\(\("
REGEX = r"\.bind\(\("

orig_root_dir = Path('targets-orig')
tags_root_dir = Path('targets-tags')

shutil.rmtree(tags_root_dir, ignore_errors=True)
shutil.copytree(orig_root_dir, tags_root_dir)


def if_compiles(f, do_print=False):
    try:
        py_compile.compile(f, doraise=True)
        return True
    except:
        if do_print:
            traceback.print_exc()
            assert False
        return False


def get_params(params_str):
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


file_keep_num = 0
for p in tqdm(tags_root_dir.rglob("*.py")):
    # print('********', p, '********')
    if not if_compiles(p):
        print(f"{p} does not compile at the beginning, removing it")
        os.remove(p)
        continue

    with open(p) as f:
        code = f.read()

    # if .bind in p > 2, removing it
    count = 0
    for m in re.finditer(REGEX, code, re.DOTALL):
        start, end = m.start(0), m.end(0)

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
            print("There is a problem when searching for the end of the following string: {}".format(m))
            break

        orig_code = code[start: end]  # matched code
        # print(f"orig_code is {orig_code}", orig_code.split('((')[0])

        if ".bind" != orig_code.split('((')[0]:
            # print(f"orig_code is {orig_code}")
            continue
        count += 1

    if count > 2 or count < 1:
        print(f"{count} .bind in {p}, removing it")
        os.remove(p)
        continue

    new_code = ''
    cur_index = 0
    delete_strange_file = False
    for m in re.finditer(REGEX, code, re.DOTALL):
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

        prior_chars_cur_line = prior_code.split("\n")[-1]  # Characters before the match in the same line
        post_chars_cur_line = post_code.split("\n")[0]  # Characters after the match in the same line

        cur_index = end + len(post_chars_cur_line)
        if prior_chars_cur_line.strip().startswith('#'):
            # This is a commented code
            new_code += prior_code + orig_code
            continue

        if len(prior_chars_cur_line) != 0:
            prior_code = prior_code[:-len(prior_chars_cur_line)]

        # print("****************1****************")
        # print(orig_code)
        # print("******")
        # print(prior_code)
        # print("******")
        # print(post_code)
        # print("******")
        # print(prior_chars_cur_line)
        # print("******")
        # print(prior_chars_cur_line)
        # print("****************2****************")

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
        # m = re.sub('\s{2,}', ' ', m)

        pattern = r'\(\(([^,]+),'
        m = re.sub(pattern, f"(('0.0.0.0',", m)
        print(m)

        params = m.split(".bind(")[1]
        assert params[0] == '(' and params[-1] == ')', print(m)


        new_code = new_code + '\n<vuln>\n' + prior_chars_cur_line + m + post_chars_cur_line + '\n<vuln>\n'
        print("****************1****************")
        print(new_code)
        print("****************2****************")

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
    file_keep_num += 1

print(f"Finally {file_keep_num} files are kept")
