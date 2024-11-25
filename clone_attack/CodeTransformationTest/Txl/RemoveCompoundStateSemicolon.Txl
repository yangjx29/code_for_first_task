% 这个文件主要是为了删除compound_statement里面的semicolon
% 该文件的作用是针对 C 语言代码 中的 复合语句 (compound_statement)，删除其中的分号（semicolon），具体来说是针对嵌套复合语句中的分号进行处理

% 引入了 C 语言的语法文件 c.grm，它定义了 C 语言的语法规则
include "c.grm"

% 首先将源代码中的 program 替换成 removeSemicolon，这意味着 TXL 将对整个程序进行修改，执行 removeSemicolon 函数中的规则
function main
    replace [program]
        P [program]
    by
        P [removeSemicolon] 
end function

% removeSemicolon 函数会替换程序中的 program 部分，查找并处理所有的复合语句 (compound_statement)
function removeSemicolon
    replace [program]
        P [program]
    construct CS [repeat compound_statement]
        _[^ P]
    construct NCS [repeat compound_statement]
        _ [deleteSemicolon each CS]
    construct LenCs [number]
        _ [length CS]%[print]
    construct LenNcs [number]
        _[length NCS]%[print]
    by 
        P [replaceCS each CS NCS]
end function

function replaceCS Old [compound_statement] New [compound_statement]
    replace *[compound_statement]
        Old
    by
        New
end function

function deleteSemicolon CS [compound_statement]
    replace [repeat compound_statement]
        RCS [repeat compound_statement]
    construct NCS [compound_statement]
        CS [isNeedChanged]
    by
        RCS [. NCS]
end function

% 这里判断是否需要改变
function isNeedChanged
    replace [compound_statement]
        CS [compound_statement]
    construct OutCs [compound_statement]
        CS %[message "the CS is:"][print][message "--------"] 
    deconstruct CS 
        '{
            CSB [compound_statement_body]
        '}
        Sei [opt ';]
    construct NCS [compound_statement]
        '{
            CSB
        '}
    construct OutNCS [compound_statement]
        NCS %[message "the NCS is:"][print][message "--------"] [message ""]
    by
        NCS
end function 