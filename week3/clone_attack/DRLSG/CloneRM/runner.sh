#!/bin/bash

abspath=$( pwd )

function main(){
    # echo "Running CloneRM"
    # cat $1
    cd $abspath
    # 删除CloneRM下的Mutated.c
    rm -rf Mutated.c
    file=$1 
    action=$2
    cd $3/CloneRM/RM &&
    ./mutation.sh $file $action &&
    # 此时是在$3/CloneRM/RM
    mv Mutated.c ../Mutated.c || cp $file ../Mutated.c   
    cd ..
}
main $1 $2 $3



