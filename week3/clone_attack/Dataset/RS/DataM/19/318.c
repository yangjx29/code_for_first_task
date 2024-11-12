void  main () {
    int d [50];
    int b [50];
    int n = (480 - 480);
    char bb [100];
    int i, j, EvjxoSlUmH, ll, SZFhuPn7;
    char a [100];
    char aa [100];
    char NcUpmPvw [100] [100];
    int c [100];
    gets (a);
    gets (aa);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    gets (bb);
    EvjxoSlUmH = strlen (a);
    ll = strlen (aa);
    for (i = (201 - 201); i < 100; i = i + 1) {
        c[i] = (480 - 480);
    }
    SZFhuPn7 = strlen (bb);
    for (i = (493 - 493); !('\0' == a[i]); i = i + 1) {
        if (!(' ' != a[i])) {
            n = n + (827 - 826);
        };
    }
    for (i = 0; n > i; i++) {
        j = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (!('\0' == a[j])) {
            if (!(' ' != a[j]) && !(0 != c[j])) {
                b[i] = j;
                c[j] = (942 - 941);
                break;
            }
            j = j + 1;
        };
    }
    d[0] = b[0];
    {
        i = 351 - 350;
        while (n > i) {
            d[i] = b[i] - b[i - (487 - 486)] - (448 - 447);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            i++;
        };
    }
    d[n] = EvjxoSlUmH -b[n - (367 - 366)] - (326 - 325);
    for (i = (395 - 394); n > i; i++) {
        for (j = b[i - 1] + 1; b[i] > j; j++) {
            NcUpmPvw[i][j - b[i - 1] - 1] = a[j];
        };
    }
    for (j = 0; j < b[0]; j++) {
        NcUpmPvw[0][j] = a[j];
    }
    for (j = b[n - 1] + 1; EvjxoSlUmH > j; j++) {
        NcUpmPvw[n][j - b[n - 1] - 1] = a[j];
    }
    for (i = 0; i <= n; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (d[i] == ll) {
            int q9WRXN2ZO;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    for (x = 0; x < 20; x++) {
                        y += x;
                    }
                    if (y > 30)
                        return y;
                }
            }
            q9WRXN2ZO = 0;
            for (j = 0; d[i] > j; j++) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                if (NcUpmPvw[i][j] == aa[j]) {
                    q9WRXN2ZO = q9WRXN2ZO + 1;
                };
            }
            if (q9WRXN2ZO == d[i]) {
                d[i] = SZFhuPn7;
                for (j = 0; j < SZFhuPn7; j++) {
                    NcUpmPvw[i][j] = bb[j];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                };
            };
        };
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < d[i]; j++) {
            if (j != d[i] - 1) {
                printf ("%c", NcUpmPvw[i][j]);
            }
            else if (j == d[i] - 1) {
                printf ("%c ", NcUpmPvw[i][j]);
            };
        };
    }
    {
        j = 0;
        while (j < d[n]) {
            if (j != d[n] - 1) {
                printf ("%c", NcUpmPvw[n][j]);
            }
            else {
                if (j == d[i] - 1) {
                    printf ("%c\n", NcUpmPvw[n][j]);
                };
            }
            j++;
        };
    };
}

