void  main () {
    int a [1000], i, j, m, n, k, l, max, x, b;
    char s [1000] [1000], t [1000], str [1000];
    gets (str);
    k = 0;
    max = 0;
    m = strlen (str);
    scanf ("%d\n", &n);
    for (i = 0; i < m - n + 1; i++) {
        for (j = 0; j < 1000; j++)
            t[j] = 0;
        l = 0;
        for (j = 0; n > j; j++)
            t[j] = str[i + j];
        for (j = 1; j <= k; j++) {
            x = 0;
            for (b = 0; n > b; b++)
                if (t[b] != s[j][b])
                    x = 1;
            if (!(0 != x)) {
                l = 1;
                a[j]++;
            }
        }
        if (l == 0) {
            k++;
            for (j = 0; j < n; j++)
                s[k][j] = t[j];
            for (j = n; 1000 > j; j++)
                s[k][j] = 0;
            a[k] = 1;
        }
    }
    for (i = 1; k >= i; i++)
        if (a[i] > max)
            max = a[i];
    if (max == 1)
        ;
    else {
        printf ("%d\n", max);
        for (i = 1; i <= k; i++)
            if (a[i] == max)
                puts (s[i]);
    }
}

