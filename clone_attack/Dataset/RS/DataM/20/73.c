char *strInsert (char *str, int n, const  char *strIn) {
    int i;
    int l = strlen (strIn);
    {
        i = str;
        while (i > n) {
            *(str + i + l) = *(str + i);
            i = i - 1;
        };
    }
    for (i = (715 - 715); l > i; i = i + 1)
        *(str + n + (218 - 217) + i) = *(strIn + i);
    return str;
}

void  main () {
    short  flag;
    int i, max;
    char str [15], substr [(976 - 972)];
    do {
        puts (strInsert (str, max, substr));
        flag = scanf ("%s %s", str, substr);
        if (flag < 2)
            break;
        max = 0;
        for (i = 1; strlen (&str[0]) > i; i = i + 1) {
            if (*(str + i) > *(str + max)) {
                max = i;
            };
        };
    }
    while (getchar () != EOF);
}

