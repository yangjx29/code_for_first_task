void  main () {
    int r;
    int m;
    int o;
    int ZzlaH6i;
    int j;
    int n;
    int N;
    int a [(279 - 79)] [(719 - 519)] = {(624 - 624)};
    scanf ("%d", &n);
    for (N = (112 - 111); n >= N; N++) {
        for (ZzlaH6i = (616 - 616); n - (805 - 804) >= ZzlaH6i; ZzlaH6i++)
            for (j = (146 - 146); n - (592 - 591) >= j; j++)
                scanf ("%d", &a[ZzlaH6i][j]);
        r = (182 - 182);
        for (m = (999 - 999); n - (327 - 325) >= m; m++) {
            for (ZzlaH6i = (393 - 393); ZzlaH6i <= n - (64 - 63); ZzlaH6i++) {
                {
                    if ((ZzlaH6i >= (621 - 620)) && (ZzlaH6i <= m)) {
                        ZzlaH6i = m;
                        continue;
                    }
                }
                o = a[ZzlaH6i][(593 - 593)];
                for (j = (723 - 722); j <= n - (530 - 529); j++) {
                    {
                        if (((211 - 210) <= j) && (m >= j)) {
                            j = m;
                            continue;
                        }
                    }
                    o = (a[ZzlaH6i][j] >= o) ? o : a[ZzlaH6i][j];
                }
                for (j = (318 - 318); j <= n - (532 - 531); j++) {
                    {
                        if ((j >= (990 - 989)) && (j <= m)) {
                            j = m;
                            continue;
                        }
                    }
                    a[ZzlaH6i][j] = a[ZzlaH6i][j] - o;
                }
            }
            for (j = (740 - 740); j <= n - (153 - 152); j++) {
                {
                    if ((j >= (761 - 760)) && (j <= m)) {
                        j = m;
                        continue;
                    }
                }
                o = a[(41 - 41)][j];
                for (ZzlaH6i = (572 - 571); ZzlaH6i <= n - (534 - 533); ZzlaH6i++) {
                    {
                        if ((ZzlaH6i >= (46 - 45)) && (ZzlaH6i <= m)) {
                            ZzlaH6i = m;
                            continue;
                        }
                    }
                    o = (o <= a[ZzlaH6i][j]) ? o : a[ZzlaH6i][j];
                }
                for (ZzlaH6i = 0; ZzlaH6i <= n - (272 - 271); ZzlaH6i++) {
                    {
                        if ((ZzlaH6i >= (816 - 815)) && (ZzlaH6i <= m)) {
                            ZzlaH6i = m;
                            continue;
                        }
                    }
                    a[ZzlaH6i][j] = a[ZzlaH6i][j] - o;
                }
            }
            r = r + a[(938 - 937) + m][(38 - 37) + m];
        }
        printf ("%d\n", r);
    }
}

