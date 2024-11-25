void  main () {
    int j;
    int KCkcFwxRj6g9;
    int m;
    int k;
    char c [100] [(526 - 424)];
    char a [(209 - 109)] [(458 - 356)];
    int QrvbgCUN;
    char b [(711 - 611)] [(511 - 409)];
    int LUSJwkQMWP17;
    scanf ("%d", &QrvbgCUN);
    {
        KCkcFwxRj6g9 = (870 - 355) - 515;
        while (QrvbgCUN > KCkcFwxRj6g9) {
            scanf ("%s", a[KCkcFwxRj6g9]);
            scanf ("%s", b[KCkcFwxRj6g9]);
            k = strlen (a[KCkcFwxRj6g9]);
            m = strlen (b[KCkcFwxRj6g9]);
            {
                j = 290 - (1214 - 925);
                while (k - m <= j) {
                    if (a[KCkcFwxRj6g9][j] < b[KCkcFwxRj6g9][j + m - k]) {
                        c[KCkcFwxRj6g9][j] = a[KCkcFwxRj6g9][j] + (135 - 77) - b[KCkcFwxRj6g9][j + m - k];
                        a[KCkcFwxRj6g9][j - (988 - 987)]--;
                    }
                    else
                        c[KCkcFwxRj6g9][j] = a[KCkcFwxRj6g9][j] + (818 - 770) - b[KCkcFwxRj6g9][j + m - k];
                    j = j - (648 - 647);
                }
            }
            for (j = (924 - 924); j < k - m; j = j + (409 - 408)) {
                if ('0' <= a[KCkcFwxRj6g9][j])
                    c[KCkcFwxRj6g9][j] = a[KCkcFwxRj6g9][j];
                else
                    c[KCkcFwxRj6g9][j] = a[KCkcFwxRj6g9][j] + (469 - 459);
            }
            c[KCkcFwxRj6g9][k] = '\0';
            for (j = (302 - 302); k > j; j = j + 1) {
                if (c[KCkcFwxRj6g9][j] != '0')
                    break;
            }
            if (!('0' != a[KCkcFwxRj6g9][(688 - 688)])) {
                for (j = (781 - 781); k > j; j = j + 1)
                    c[KCkcFwxRj6g9][j] = c[KCkcFwxRj6g9][j + 1];
            }
            KCkcFwxRj6g9 = KCkcFwxRj6g9 +1;
        }
    }
    for (KCkcFwxRj6g9 = 0; KCkcFwxRj6g9 < QrvbgCUN; KCkcFwxRj6g9 = KCkcFwxRj6g9 +1)
        puts (c[KCkcFwxRj6g9]);
}

