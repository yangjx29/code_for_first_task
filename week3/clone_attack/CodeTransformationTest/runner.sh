#!/bin/bash


function main(){ 
    rm -rf Mutated.c
    # 命令行输入的第一个和第二个参数赋值
    file=$1 
    action=$2
    # 将输入文件 $file 复制到 RM/ 目录中 ,&&表示如果这条命令执行成功，则继续执行后面的命令
    cp $file RM/ &&
    cd ./RM/ &&
    ./mutation.sh $file $action &&
    mv Mutated.c ../Mutated.c || cp $file ../Mutated.c   # 如果文件存在则覆盖，否则复制
    rm -rf $file 
    cd ..
    echo "[+] result..."
    cat Mutated.c
}


# $1 file 
# $2 action
main $1 $2



