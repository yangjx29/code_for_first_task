#include <stdio.h>
#include <string.h>

// 函数声明
void greet_user(const char *name);
int add(int a, int b);
int multiply(int a, int b);
void display_result(int result, const char *operation);

// 主函数
int main() {
    char name[50];
    int num1, num2;
    int sum, product;

    // 获取用户姓名
    printf("请输入您的名字: ");
    if (fgets(name, sizeof(name), stdin) != NULL) {
        // 移除换行符
        name[strcspn(name, "\n")] = '\0';
    }

    // 打招呼
    greet_user(name);

    // 获取两个整数
    printf("请输入第一个整数: ");
    if (scanf("%d", &num1) != 1) {
        printf("输入错误！\n");
        return 1;
    }

    printf("请输入第二个整数: ");
    if (scanf("%d", &num2) != 1) {
        printf("输入错误！\n");
        return 1;
    }

    // 计算和与积
    sum = add(num1, num2);
    product = multiply(num1, num2);

    // 显示结果
    display_result(sum, "加法");
    display_result(product, "乘法");

    return 0;
}

// 函数定义

// 欢迎用户
void greet_user(const char *name) {
    printf("你好, %s！欢迎使用这个简单的 C 程序。\n", name);
}

// 计算两个数的和
int add(int a, int b) {
    return a + b;
}

// 计算两个数的积
int multiply(int a, int b) {
    return a * b;
}

// 显示计算结果
void display_result(int result, const char *operation) {
    printf("%s 的结果是: %d\n", operation, result);
}
