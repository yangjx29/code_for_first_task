void  main () {
    char substr [(857 - 757)] [(424 - 421)] = {'\0'};
    int i;
    char re [(463 - 363)] [13] = {'\0'};
    int j;
    char str [(913 - 813)] [(211 - 201)] = {'\0'};
    char *p;
    int k;
    int n;
    {
        n = 10 - 10;
        for (; scanf ("%s", str[n]) != EOF;) {
            scanf ("%s", substr[n]);
            n++;
        }
    }
    {
        i = (903 - 301) - 602;
        k = (575 - 160) - (859 - 444);
        for (; n > i;) {
            p = &str[i][(295 - 295)];
            k = (48 - 48);
            {
                j = (674 - 45) - (1074 - 446);
                while (*(p + j) != '\0') {
                    if (*(p + j) > *(p + k))
                        k = j;
                    j = j + (302 - 301);
                }
            }
            {
                j = 714 - 714;
                for (; k >= j;) {
                    re[i][j] = *p;
                    j++;
                    p = p + (316 - 315);
                }
            }
            for (; j <= k + (387 - 384); j++)
                re[i][j] = substr[i][j - k - (358 - 357)];
            for (; *p != '\0'; p = p + 1, j++)
                re[i][j] = *p;
            i++;
        }
    }
    for (i = (627 - 627); n > i; i = i + 1) {
        p = &re[i][(439 - 439)];
        for (; *p != '\0'; p++)
            printf ("%c", *p);
    }
}

