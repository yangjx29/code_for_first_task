#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 未初始化的全局变量
int global_var;

// 函数：复制用户输入到缓冲区（存在缓冲区溢出风险）
void vulnerable_function(char* input) {
    char buffer[10];
    // 没有检查输入长度，可能导致缓冲区溢出
    strcpy(buffer, input);
    printf("输入内容: %s\n", buffer);
}

// 函数：返回空指针并尝试解引用（空指针解引用）
int* get_null_pointer() {
    return NULL;
}

// 函数：内存泄漏示例
void memory_leak() {
    char* leak = (char*)malloc(100 * sizeof(char));
    strcpy(leak, "This memory is never freed.");
    printf("内存泄漏示例: %s\n", leak);
    // 没有调用 free(leak);
}

// 函数：使用后释放（Use-After-Free）
void use_after_free() {
    char* data = (char*)malloc(50 * sizeof(char));
    strcpy(data, "Use after free example.");
    free(data);
    // 释放后仍然使用指针
    printf("释放后的数据: %s\n", data);
}

// 主函数
int main() {
    char user_input[50];
    int* ptr;

    // 使用未初始化的全局变量
    printf("未初始化的全局变量值: %d\n", global_var);

    // 获取用户输入
    printf("请输入一段文本（最多49个字符）: ");
    fgets(user_input, sizeof(user_input), stdin);
    // 移除换行符
    user_input[strcspn(user_input, "\n")] = '\0';

    // 调用存在缓冲区溢出的函数
    vulnerable_function(user_input);

    // 空指针解引用
    ptr = get_null_pointer();
    // 未检查指针是否为 NULL
    printf("空指针解引用后的值: %d\n", *ptr);

    // 内存泄漏示例
    memory_leak();

    // 使用后释放
    use_after_free();

    return 0;
}
