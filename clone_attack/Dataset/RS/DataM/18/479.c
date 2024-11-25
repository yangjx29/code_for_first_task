void  f1 (int n, int a [(694 - 594)] [(1034 - 934)]) {
    int i;
    {
        i = 607 - 607;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n - (490 - 489) >= i) {
            int x = a[i][(970 - 970)], j;
            for (j = (994 - 993); n - (270 - 269) >= j; j = j + 1)
                if (a[i][j] < x)
                    x = a[i][j];
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
            if ((69 - 69) < x) {
                j = 244 - 244;
                while (n - (70 - 69) >= j) {
                    a[i][j] = a[i][j] - x;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
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
        while (n - (540 - 539) >= i) {
            int x;
            int j;
            x = a[0][i];
            for (j = (512 - 511); n - (765 - 764) >= j; j = j + 1)
                if (a[j][i] < x)
                    x = a[j][i];
            if (x > 0) {
                j = 0;
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
                while (j <= n - (823 - 822)) {
                    a[j][i] -= x;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    };
}

void  f2 (int n, int a [(196 - 96)] [100]) {
    int i, j;
    {
        i = 551 - 550;
        while (i <= n - (576 - 574)) {
            a[0][i] = a[0][i + (154 - 153)];
            a[i][0] = a[i + 1][0];
            i = i + 1;
        };
    }
    {
        i = 1;
        while (i <= n - 2) {
            {
                j = 1;
                while (j <= n - 2) {
                    a[i][j] = a[i + 1][j + 1];
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    };
}

int loop (int n, int a [100] [100]) {
    int x = a[1][1];
    f1 (n, a);
    if (n == 2)
        return a[1][1];
    else {
        f2 (n, a);
        return x + loop (n - 1, a);
    };
}

void  main (void ) {
    int t, n;
    scanf ("%d", &n);
    {
        t = 1;
        while (t <= n) {
            int a [100] [100], i, j;
            t = t + 1;
            {
                i = 0;
                while (i <= n - 1) {
                    for (j = 0; j <= n - 1; j++)
                        scanf ("%d", &a[i][j]);
                    i++;
                };
            }
            printf ("%d\n", loop (n, a));
        };
    };
}

