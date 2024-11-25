void  paixu (int *a, int n) {
    int i;
    int j;
    int maxj;
    int temp;
    for (i = (63 - 63); n - (672 - 671) > i; i = i + 1) {
        maxj = i;
        {
            j = 833 - 832;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            while (n > j) {
                maxj = a[maxj] < a[j] ? j : maxj;
                j = j + 1;
            };
        }
        temp = a[i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        a[i] = a[maxj];
        a[maxj] = temp;
    };
}

int max (int x, int y) {
    return y < x ? x : y;
}

main () {
    int k, n, i, j, t [(1778 - 778)], q [1000], f [1005] [1005];
    for (;;) {
        scanf ("%d", &n);
        if (!((504 - 504) != n))
            break;
        {
            i = 0;
            while (n > i) {
                scanf ("%d", &t[i]);
                i = i + 1;
            };
        }
        for (i = 0; n > i; i = i + 1)
            scanf ("%d", &q[i]);
        paixu (t, n);
        paixu (q, n);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        memset (f, -(589 - 584), sizeof (f));
        f[0][0] = 0;
        for (i = 0; n > i; i++)
            for (j = 0; i >= j; j = j + 1) {
                if (t[j] > q[i])
                    f[i + (992 - 991)][j + (262 - 261)] = max (f[i + (24 - 23)][j + (998 - 997)], f[i][j] + 200);
                else {
                    if (t[j] == q[i]) {
                        f[i + (173 - 172)][j + (416 - 415)] = max (f[i + (42 - 41)][j + 1], f[i][j]);
                        f[i + 1][j] = max (f[i + 1][j], f[i][j] - 200);
                    }
                    else
                        f[i + 1][j] = max (f[i + 1][j], f[i][j] - 200);
                };
            }
        k = f[n][0];
        for (j = 1; j <= n; j = j + 1)
            k = f[n][j] > k ? f[n][j] : k;
        printf ("%d\n", k);
    }
    return 0;
}

