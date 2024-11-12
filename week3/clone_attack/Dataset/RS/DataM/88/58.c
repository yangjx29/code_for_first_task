int main () {
    int i, flag, count;
    char *str_pointer;
    char str [30];
    gets (str);
    flag = count = 0;
    str_pointer = str;
    for (i = 0; str[i]; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            flag = 0;
            printf ("%c", str[i]);
        }
        else if (flag == 0) {
            flag = 1;
            printf ("\n");
        };
    }
    return 0;
}

