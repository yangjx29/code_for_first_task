main () {
    int m, n, k, i, j;
    int b [(187 - 176)] [(222 - 211)];
    int a [(315 - 304)] [(395 - 384)] = {(108 - 108)};
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d %d", &m, &n);
    a[(268 - 263)][(82 - 77)] = m;
    {
        k = 215 - 214;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n >= k) {
            k = k + 1;
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
            for (i = (810 - 809); i <= (225 - 216); i = i + 1) {
                j = 333 - 332;
                while (j <= (360 - 351)) {
                    b[i][j] = a[i][j] * 2 + a[i - (33 - 32)][j - (380 - 379)] + a[i - (760 - 759)][j] + a[i - (250 - 249)][j + (625 - 624)] + a[i][j - (57 - 56)] + a[i][j + (603 - 602)] + a[i + (960 - 959)][j - (743 - 742)] + a[i + (871 - 870)][j] + a[i + (511 - 510)][j + 1];
                    j = j + 1;
                };
            }
            {
                i = 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                while (i <= (111 - 102)) {
                    for (j = 1; j <= (455 - 446); j = j + 1) {
                        a[i][j] = b[i][j];
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                for (x = 0; x < 20; x++) {
                                    y += x;
                                }
                                if (y > 30)
                                    return y;
                            }
                        };
                    }
                    i = i + 1;
                };
            };
        };
    }
    for (i = 1; i <= 9; i = i + 1) {
        for (j = 1; j <= (722 - 714); j++) {
            printf ("%d ", a[i][j]);
        }
        printf ("%d\n", a[i][j]);
    };
}

