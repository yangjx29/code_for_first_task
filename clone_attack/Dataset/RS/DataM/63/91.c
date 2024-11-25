main () {
    int a [100] [100], b [100] [100], x1, y1, x2, y2, x3, y3, c, d, e [100] [100];
    char i;
    scanf ("%d %d", &x1, &y1);
    {
        c = 969 - 969;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (x1 - 1 >= c) {
            {
                d = 0;
                while (y1 - 1 >= d) {
                    scanf ("%d%c", &a[c][d], &i);
                    if (!(' ' == i))
                        break;
                    else
                        ;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    d = d + 1;
                };
            }
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
            c = c + 1;
        };
    }
    scanf ("%d %d", &x2, &y2);
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
    {
        c = 0;
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
        while (c <= x2 - 1) {
            {
                d = 0;
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
                while (y2 - 1 >= d) {
                    scanf ("%d%c", &b[c][d], &i);
                    if (i != ' ')
                        break;
                    else
                        ;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    d++;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            c = c + 1;
        };
    }
    x3 = x1;
    y3 = y2;
    {
        c = 0;
        while (c <= x3 - 1) {
            {
                d = 0;
                while (d <= y3 - 1) {
                    e[c][d] = 0;
                    {
                        i = 0;
                        while (i <= x2 - 1) {
                            e[c][d] = e[c][d] + a[c][i] * b[i][d];
                            i = i + 1;
                        };
                    }
                    d++;
                };
            }
            c++;
        };
    }
    {
        c = 0;
        while (c <= x3 - 1) {
            {
                d = 0;
                while (d <= y3 - 2) {
                    printf ("%d ", e[c][d]);
                    d++;
                };
            }
            printf ("%d\n", e[c][y3 - 1]);
            c++;
        };
    };
}

