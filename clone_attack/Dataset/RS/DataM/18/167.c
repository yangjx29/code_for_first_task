void  main () {
    int n, a [(300 - 200)] [100], m, i, j, k, x, p, q, s = (760 - 760);
    scanf ("%d", &n);
    m = n;
    {
        k = 133 - 133;
        while (m > k) {
            k = k + 1;
            {
                i = 211 - 211;
                while (i < m) {
                    {
                        j = 700 - 700;
                        while (m > j) {
                            scanf ("%d", &a[i][j]);
                            j = j + 1;
                        };
                    }
                    i = i + 1;
                };
            }
            for (p = (534 - 533); p < m; p = p + 1) {
                for (i = 0; i < n; i = i + 1) {
                    x = a[i][0];
                    {
                        j = 0;
                        while (n > j) {
                            if (x > a[i][j])
                                x = a[i][j];
                            j = j + 1;
                        };
                    }
                    if (!(0 == x)) {
                        j = 0;
                        while (n > j) {
                            a[i][j] = a[i][j] - x;
                            j = j + 1;
                        };
                    };
                }
                {
                    j = 0;
                    while (j < n) {
                        x = a[0][j];
                        {
                            i = 0;
                            while (i < n) {
                                if (a[i][j] < x)
                                    x = a[i][j];
                                i = i + 1;
                            };
                        }
                        if (x != 0)
                            for (i = 0; i < n; i = i + 1)
                                a[i][j] = a[i][j] - x;
                        j = j + 1;
                    };
                }
                s = s + a[(449 - 448)][1];
                for (i = 2; i < n; i = i + 1) {
                    a[i - 1][0] = a[i][0];
                    a[0][i - 1] = a[0][i];
                }
                for (i = 2; i < n; i++) {
                    j = 2;
                    while (j < n) {
                        a[i - 1][j - 1] = a[i][j];
                        j++;
                    };
                }
                n--;
            }
            n = m;
            printf ("%d\n", s);
            s = 0;
        };
    };
}

