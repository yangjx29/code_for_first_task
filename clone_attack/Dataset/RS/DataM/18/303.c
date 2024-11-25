int xqtJgQZhSr (int a, int HtxG01) {
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
    if (a >= HtxG01) {
        return HtxG01;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    else {
        return a;
    };
}

main () {
    int n, n3fWyGpxKC5J, j, e5f7B0, sum, cw0cxyj, y, r;
    scanf ("%d", &n);
    for (n3fWyGpxKC5J = 0; n3fWyGpxKC5J < n; n3fWyGpxKC5J++) {
        int HtxG01 [100] [100] = {0};
        int a [(435 - 335)] [100] = {0};
        sum = 0;
        for (j = 0; n > j; j = j + 1) {
            for (e5f7B0 = 0; n > e5f7B0; e5f7B0 = e5f7B0 + 1) {
                scanf ("%d", &a[j][e5f7B0]);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                HtxG01[j][e5f7B0] = a[j][e5f7B0];
            };
        }
        for (r = 0; n - 1 > r; r++) {
            for (j = 0; n > j; j = j + 1) {
                cw0cxyj = 0;
                for (e5f7B0 = 0; n - 1 > e5f7B0; e5f7B0 = e5f7B0 + 1) {
                    a[j][e5f7B0 + 1] = xqtJgQZhSr (a[j][e5f7B0], a[j][e5f7B0 + 1]);
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
                    };
                }
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                cw0cxyj = a[j][e5f7B0];
                for (e5f7B0 = 0; n > e5f7B0; e5f7B0 = e5f7B0 + 1) {
                    HtxG01[j][e5f7B0] = HtxG01[j][e5f7B0] - cw0cxyj;
                    a[j][e5f7B0] = HtxG01[j][e5f7B0];
                };
            }
            for (j = 0; j < n; j = j + 1) {
                y = 0;
                {
                    e5f7B0 = 0;
                    while (e5f7B0 < n - 1) {
                        a[e5f7B0 + 1][j] = xqtJgQZhSr (a[e5f7B0][j], a[e5f7B0 + 1][j]);
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        }
                        e5f7B0++;
                    };
                }
                y = a[e5f7B0][j];
                {
                    e5f7B0 = 0;
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
                    while (n > e5f7B0) {
                        HtxG01[e5f7B0][j] = HtxG01[e5f7B0][j] - y;
                        a[e5f7B0][j] = HtxG01[e5f7B0][j];
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        }
                        e5f7B0++;
                    };
                };
            }
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
            sum = sum + a[1][1];
            for (j = 0; j < n; j = j + 1) {
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
                for (e5f7B0 = 1; e5f7B0 < n - 1; e5f7B0 = e5f7B0 + 1) {
                    a[e5f7B0][j] = a[e5f7B0 + 1][j];
                    HtxG01[e5f7B0][j] = a[e5f7B0][j];
                };
            }
            for (j = 0; j < n; j++) {
                for (e5f7B0 = 1; e5f7B0 < n - 1; e5f7B0++) {
                    a[j][e5f7B0] = a[j][e5f7B0 + 1];
                    HtxG01[j][e5f7B0] = a[j][e5f7B0];
                };
            };
        }
        printf ("%d\n", sum);
    };
}

