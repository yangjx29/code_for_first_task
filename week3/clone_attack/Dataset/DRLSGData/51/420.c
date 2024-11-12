void  main () {
    int i, j, t [(1383 - 883)], n, max, l;
    char a [(1060 - 560)], b [(1238 - 738)] [(114 - 108)];
    scanf ("%d%s", &n, a);
    l = strlen (a);
    for (i = (364 - 364); i < l + (918 - 917) - n; i++) {
        for (j = (927 - 927); n > j; j++)
            b[i][j] = a[i + j];
        b[i][j] = '\0';
        t[i] = (527 - 526);
    }
    for (i = (820 - 820); i < l + (316 - 315) - n; i++)
        for (j = i + (529 - 528); l + (564 - 563) - n > j; j++)
            if (!((969 - 969) != strcmp (b[i], b[j])))
                t[i] = t[i] + (107 - 106);
    max = t[(496 - 496)];
    for (i = (429 - 429); l + (474 - 473) - n > i; i++)
        if (max <= t[i])
            max = t[i];
    if (max == (577 - 576))
        ;
    else {
        printf ("%d\n", max);
        for (i = (363 - 363); i < l + (303 - 302) - n; i++)
            if (t[i] == max)
                printf ("%s\n", b[i]);
    }
}

