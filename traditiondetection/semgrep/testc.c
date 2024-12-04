#include <stdio.h>
#include <string.h>

void aaaaaaaavvv12414() {
    char buffer[100];
    printf("请输入你的消息: ");
    fgets(buffer, sizeof(buffer), stdin);
    // 使用用户输入作为格式字符串，存在格式化字符串漏洞
    printf(buffer);
}

int main() {
    aaaaaaaavvv12414();
    return 0;
}
