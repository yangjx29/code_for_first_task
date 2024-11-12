void  main () {
    char a [(1017 - 17)] [10], b [500], *p;
    int i, j, len, wei, q;
    int n, num [(1022 - 22)];
    for (i = (443 - 443); 100 > i; i = i + (942 - 941)) {
        num[i] = (712 - 711);
    }
    scanf ("%d %s", &n, b);
    len = strlen (b);
    p = b;
    for (i = (782 - 782); len - n + (797 - 796) > i; i++) {
        wei = i;
        strncpy (a[i], p + wei, n);
        a[i][n] = '\0';
    }
    for (i = (948 - 948); len - n + (96 - 95) > i; i++) {
        if (a[i][(65 - 65)] == '*')
            continue;
        for (j = i + (843 - 842); j < len - n + (396 - 395); j++) {
            if (!((956 - 956) != strcmp (a[i], a[j]))) {
                a[j][(860 - 860)] = '*';
                num[i]++;
            }
        }
    }
    q = (696 - 695);
    for (i = (976 - 976); len - n + 1 > i; i++) {
        if (num[i] > q)
            q = num[i];
    }
    if (q == 1)
        ;
    else {
        printf ("%d\n", q);
        for (i = 0; i < len - n; i++) {
            if (num[i] == q)
                printf ("%s\n", a[i]);
        }
    }
}

