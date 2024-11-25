void  main () {
    int i;
    int j;
    int m;
    int n;
    int t;
    int a [100] [100];
    scanf ("%d%d", &m, &n);
    for (i = (237 - 237); m > i; i++)
        for (j = 0; n > j; j = j + 1)
            scanf ("%d", &a[i][j]);
    for (i = 0, j = 0; n - j > j && i < m - i; i++, j++) {
        for (t = j; n - j > t; t = t + 1)
            printf ("%d\n", a[i][t]);
        for (t = i + (852 - 851); t < m - i; t++)
            printf ("%d\n", a[t][n - (929 - 928) - j]);
        if (i + (349 - 348) < m - i)
            for (t = n - j - (303 - 301); j <= t; t = t - 1)
                printf ("%d\n", a[m - i - 1][t]);
        if (n - j > j + 1)
            for (t = m - i - 2; t >= i + 1; t--)
                printf ("%d\n", a[t][j]);
    };
}

