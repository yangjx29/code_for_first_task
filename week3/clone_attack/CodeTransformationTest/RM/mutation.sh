#! /bin/bash

# 使用 txl 工具和 Python 脚本来对一个指定的源代码文件进行变异操作，并生成变异后的代码 Mutated.c


# 获取当前目录路径并存储在变量 CURPATH 中。pwd 命令用于打印当前工作目录路径。
CURPATH=$( pwd )
# echo $CURPATH

PROJECTPATH=$CURPATH/ # 项目的根目录路径，默认为当前工作目录。
TXLCODEPATH="../Txl/"  # 包含 Txl 转换规则的目录路径
COUNTRESULTPATH="../CountResult/"  # 存储计数结果的目录路径


 function muteCode(){ 
    # 接受两个参数，分别为变异操作代码和变异操作类型
    TRANSFORMCODE=$1 
    ACTION=$2 
    # cd $PROJECTPATH  
    # 使用 txl 工具对源代码 TRANSFORMCODE 进行变换，应用 CountModification.Txl 转换规则。-q 表示安静模式，不输出中间结果，> /dev/null 2> /dev/null 将标准输出和错误输出都重定向到 /dev/null，即不显示任何输出
    txl   -q $TRANSFORMCODE $TXLCODEPATH"CountModification.Txl" > /dev/null 2> /dev/null &&
    
 

    # cd $PROJECTPATH && 
    # 执行GenRandomChange
    python GenRandomChange.py $COUNTRESULTPATH  $ACTION &&
    # 第一个规则：移除复合状态的分号，输出到 temp0.c。第二个规则：移除空语句，输出到 temp00.c
    txl   -q -s 128  $TRANSFORMCODE $TXLCODEPATH"RemoveCompoundStateSemicolon.Txl" > temp0.c  &&
    txl   -q -s 128 temp0.c $TXLCODEPATH"RemoveNullStatements.Txl" > temp00.c &&
    # 根据 ACTION 执行不同的变异规则
    case ${ACTION} in 
        1)
            # echo "txl   -q -s 128  temp00.c $TXLCODEPATH"1ChangeRename.Txl" > temp1.c"
            txl  -q -s 128  temp00.c $TXLCODEPATH"1ChangeRename.Txl" > temp1.c  
            ;;
        2)
            txl   -q -s 128  temp00.c $TXLCODEPATH"2A3ChangeCompoundForAndWhile.Txl" > temp1.c
            ;;
        3)
            txl   -q -s 128  temp00.c $TXLCODEPATH"2A3ChangeCompoundForAndWhile.Txl" > temp1.c
            ;;
        4)
            txl   -q -s 128  temp00.c $TXLCODEPATH"4changeCompoundDoWhile.Txl" > temp1.c
            ;;
        5)
            txl   -q -s 128  temp00.c $TXLCODEPATH"5A6changeCompoundIf.Txl" > temp1.c
            ;;
        6)
            txl   -q -s 128  temp00.c $TXLCODEPATH"5A6changeCompoundIf.Txl" > temp1.c 
            ;;
        7)
            txl   -q -s 128  temp00.c $TXLCODEPATH"7changeCompoundSwitch.Txl" > temp1.c
            ;;
        8)
            txl   -q -s 128  temp00.c $TXLCODEPATH"8changeCompoundLogicalOperator.Txl" > temp1.c 
            ;;
        9)  
            txl   -q -s 128  temp00.c $TXLCODEPATH"9changeSelfOperator.Txl" > temp1.c 
            ;;
        10)
            txl   -q -s 128  temp00.c $TXLCODEPATH"10changeCompoundIncrement.Txl" > temp1.c 
            ;;
        11)
            txl   -q -s 128  temp00.c $TXLCODEPATH"11changeConstant.Txl" > temp1.c 
            ;;
        12)
            txl   -q -s 128  temp00.c $TXLCODEPATH"12changeVariableDefinitions.Txl" > temp1.c 
            ;;
        13)
            txl   -q -s 128  temp00.c $TXLCODEPATH"13changeAddJunkCode.Txl" > temp1.c 
            ;;
        14)
            txl   -q -s 128  temp00.c $TXLCODEPATH"14changeExchangeCodeOrder.Txl" > temp1.c 
            ;;
        15)
            txl   -q -s 128  temp00.c $TXLCODEPATH"15changeDeleteCode.Txl" > temp1.c 
            ;;
        *)
        exit 1 
        ;;  
    esac  

    txl   -q -s 128 temp1.c $TXLCODEPATH"RemoveNullStatements.Txl" > temp3.c &&
    txl   -q -s 128 temp3.c $TXLCODEPATH"PrettyPrint.Txl" > temp4.c &&
    txl   -q -s 128 temp4.c $TXLCODEPATH"RemoveNullStatements.Txl" > temp.c &&  
    # ParseCode.py 脚本对变异后的代码 temp.c 进行解析，输出到 Mutated.c
    python ParseCode.py temp.c &&
    cp  temp.c Mutated.c   
    # cat Mutated.c
    echo "result reserved in Mutated.c"
    rm  -rf temp* 
}

function main(){
    filepath=$1 
    action=$2     
    muteCode $filepath $action
}

main $1 $2
 



 
 