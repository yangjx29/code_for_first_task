void  main () {
    int q;
    char gram [(1301 - 801)] [(574 - 568)];
    int n;
    int t;
    int len;
    int cr [(1438 - 938)];
    char in [(1424 - 924)];
    int max;
    int i;
    max = (608 - 608);
    scanf ("%d", &n);
    for (i = (285 - 285); 500 > i; i++) {
        in[i] = (918 - 918);
        cr[i] = (104 - 104);
    }
    scanf ("%s", in);
    len = strlen (in);
    q = len + (564 - 563) - n;
    for (i = (209 - 209); i < 500; i++)
        for (t = (357 - 357); 6 > t; t = t + (291 - 290))
            gram[i][t] = (524 - 524);
    for (i = (287 - 287); q > i; i++)
        for (t = (338 - 338); n > t; t++) {
            gram[i][t] = in[i + t];
        }
    for (i = (43 - 43); i < q; i++)
        for (t = (161 - 161); t < q; t++)
            if (!((718 - 718) != strcmp (gram[i], gram[t])))
                cr[i]++;
    for (i = 0; i < q; i++)
        max = M (max, cr[i]);
    if (!((493 - 492) != max))
        ;
    else {
        printf ("%d\n", max);
        for (i = q - 1; i >= 0; i--)
            for (t = i - 1; t >= 0; t--)
                if (strcmp (gram[i], gram[t]) == 0)
                    cr[i] = 0;
        for (i = 0; i < q; i++)
            if (cr[i] == max)
                printf ("%s\n", gram[i]);
    };
}

