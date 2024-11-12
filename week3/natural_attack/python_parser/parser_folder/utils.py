import collections
import re
from io import StringIO
import  tokenize
def isSameTree(root_p, root_q) -> bool:
    if not root_p and not root_q:
        return True
    if not root_p or not root_q:
        return False

    queue_p = collections.deque([root_p])
    queue_q = collections.deque([root_q])

    while queue_p and queue_q:
        node_p = queue_p.popleft()
        node_q = queue_q.popleft()
        if node_p.type != node_q.type:
            return False
        if len(node_p.children) != len(node_q.children):
            return False
        if len(node_p.children) > 0:
            for child_p, child_q in zip(node_p.children, node_q.children) :
                if child_p.type == child_q.type:
                    queue_p.append(child_p)
                    queue_p.append(child_q)
                else:
                    return False

    return True
def remove_comments_and_docstrings(source,lang):
    if lang in ['python']:
        """
        Returns 'source' minus comments and docstrings.
        """
        # 将source 转换为一个 StringIO 对象，这样它就可以像文件一样被读取，供 tokenize 模块使用
        io_obj = StringIO(source)
        out = ""
        # 初始化 prev_toktype 变量为 tokenize.INDENT，表示前一个 token 的类型，起始值设为缩进（这有助于处理代码缩进）
        prev_toktype = tokenize.INDENT
        # 行号和列号
        last_lineno = -1
        last_col = 0
        # tokenize.generate_tokens() 生成代码的每一个 token（即词法单元），并逐个处理
        for tok in tokenize.generate_tokens(io_obj.readline):
            '''
            token_type: token的类型（如关键词、标识符、字符串等）
            token_string: token的实际文本
            start_line, start_col: token开始的行和列
            end_line, end_col: token结束的行和列
            ltext: token所对应的源代码行
            '''
            token_type = tok[0]
            token_string = tok[1]
            start_line, start_col = tok[2]
            end_line, end_col = tok[3]
            ltext = tok[4]
            # 遇到新的一行时，将 last_col 设为 0
            if start_line > last_lineno:
                last_col = 0
            # 如果当前 token 的开始列号大于上一个 token 的结束列号，说明它们之间有空格，需要添加空格
            if start_col > last_col:
                out += (" " * (start_col - last_col))
            # Remove comments:
            if token_type == tokenize.COMMENT:
                pass
            # This series of conditionals removes docstrings:
            # 这一部分的目的是排除掉正常的字符串常量，只移除文档字符串（即用三引号包围的字符串）
            elif token_type == tokenize.STRING:
                if prev_toktype != tokenize.INDENT:
            # This is likely a docstring; double-check we're not inside an operator:
            # 如果前一个 token 不是缩进，且前一个 token 不是换行符，且当前 token 的列号大于 0（表明它可能是文档字符串的一部分），那么就把这个字符串添加到 out 变量中。
                    if prev_toktype != tokenize.NEWLINE:
                        if start_col > 0:
                            out += token_string
            # 对于其他类型的 token（如标识符、关键字等），直接将其文本添加到 out 中
            else:
                out += token_string
            # 更新参数
            prev_toktype = token_type
            last_col = end_col
            last_lineno = end_line
        # 将处理后的代码按行拆分成列表，并去除空行,最后将非空行重新拼接成一个字符串并返回
        temp=[]
        for x in out.split('\n'):
            if x.strip()!="":
                temp.append(x)
        return '\n'.join(temp)
    elif lang in ['ruby']:
        return source
    # 其他语言使用正则表达式去除注释
    else:
        def replacer(match):
            s = match.group(0)
            if s.startswith('/'):
                return " " # note: a space and not an empty string
            else:
                return s
        pattern = re.compile(
            # 匹配 单行注释：以 // 开头直到行尾的部分、多行注释：以 /* 开头直到 */ 的部分、字符串：以 ' 或 " 开头直到下一个 ' 或 " 的部分
            r'//.*?$|/\*.*?\*/|\'(?:\\.|[^\\\'])*\'|"(?:\\.|[^\\"])*"',
            re.DOTALL | re.MULTILINE # 允许匹配跨行的注释和处理多行输入
        )
        temp=[]
        # 替换并去除空行
        for x in re.sub(pattern, replacer, source).split('\n'):
            if x.strip()!="":
                temp.append(x)
        return '\n'.join(temp)

def tree_to_token_index(root_node):
    """
    将树结构转换为token的索引
    """
    if (len(root_node.children)==0 or root_node.type=='string') and root_node.type!='comment':
        return [(root_node.start_point,root_node.end_point)]
    else:
        code_tokens=[]
        for child in root_node.children:
            code_tokens+=tree_to_token_index(child)
        return code_tokens
    
def tree_to_variable_index(root_node,index_to_code):
    if root_node:
        if (len(root_node.children)==0 or root_node.type=='string') and root_node.type!='comment':
            index=(root_node.start_point,root_node.end_point)
            _,code=index_to_code[index]
            if root_node.type!=code:
                return [(root_node.start_point,root_node.end_point)]
            else:
                return []
        else:
            code_tokens=[]
            for child in root_node.children:
                code_tokens+=tree_to_variable_index(child,index_to_code)
            return code_tokens  
    else:
        return []

def index_to_code_token(index,code):
    # 开始位置
    start_point=index[0]
    end_point=index[1]
    # 如果在同一行
    if start_point[0]==end_point[0]:
        s=code[start_point[0]][start_point[1]:end_point[1]]
    # 如果多行
    else:
        s=""
        s+=code[start_point[0]][start_point[1]:]
        for i in range(start_point[0]+1,end_point[0]):
            s+=code[i]
        s+=code[end_point[0]][:end_point[1]]   
    return s
