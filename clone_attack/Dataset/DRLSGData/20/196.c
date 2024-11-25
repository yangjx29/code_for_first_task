void  main () {
    char str [11];
    char IeFS2j [4];
    int i, j, WElQYai95;
    char *p;
    for (; scanf ("%s %s", str, IeFS2j) != EOF;) {
        p = &str[0];
        WElQYai95 = (312 - 312);
        for (i = (658 - 657); *(p + i) != '\0'; i = i + 1) {
            if (*(p + i) > *(p + WElQYai95))
                WElQYai95 = i;
        }
        for (j = 0; j <= WElQYai95; j++)
            printf ("%c", str[j]);
        printf ("%s", IeFS2j);
        for (j = WElQYai95 +1; *(p + j) != '\0'; j++)
            printf ("%c", str[j]);
    }
}

