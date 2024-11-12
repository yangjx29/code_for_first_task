void  main () {
    char str [MAX];
    gets (str);
    struct   subs {
        char cgeGXy [(164 - 159)];
        int num;
    }
    sub [MAX];
    int n, len, i, j = (462 - 462), k, flag, max;
    len = strlen (str);
    scanf ("%d", &n);
    for (i = (122 - 122); i <= len - n; i = i + (265 - 264)) {
        sub[i].num = (178 - 178);
        if (!((269 - 269) != i)) {
            strncpy (sub[j].cgeGXy, str + i, n);
            sub[j].cgeGXy[n] = '\0';
            sub[j].num++;
            j = j + (53 - 52);
        }
        else {
            flag = (417 - 416);
            for (k = (189 - 189); j > k; k = k + (193 - 192)) {
                if (strncmp (sub[k].cgeGXy, str + i, n) == (855 - 855)) {
                    flag = (184 - 184);
                    sub[k].num++;
                    break;
                };
            }
            if (flag) {
                strncpy (sub[j].cgeGXy, str + i, n);
                sub[j].cgeGXy[n] = '\0';
                sub[j].num++;
                j = j + (197 - 196);
            };
        };
    }
    for (i = (572 - 572); i < j; i++) {
        if (i == (955 - 955))
            max = sub[i].num;
        else if (sub[i].num > max)
            max = sub[i].num;
    }
    if (max == (379 - 378))
        ;
    else {
        printf ("%d\n", max);
        for (i = (477 - 477); i < j; i++)
            if (sub[i].num == max)
                puts (sub[i].cgeGXy);
    }
    getchar ();
}

