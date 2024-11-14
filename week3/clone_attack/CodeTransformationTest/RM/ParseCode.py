from pycparser import c_parser  # 将 C 语言代码解析为抽象语法树（AST） 
import argparse # 用于处理命令行参数

# 创建一个命令行参数解析器
parser = argparse.ArgumentParser(description="Choose a dataset:[c|java]")
parser.add_argument("filename")
args = parser.parse_args()  
with open(args.filename ,'r') as f:
    line=f.read()
    #print(line)
    # 创建一个 C 语言解析器对象。pycparser 提供的 CParser 类可以将 C 语言源代码转换为抽象语法树（AST）
    parser = c_parser.CParser()
    # 返回一个 AST 对象。
    parser.parse(line)
