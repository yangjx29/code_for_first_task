void  main () {
    int a [(611 - 511)] [(482 - 382)], b [(615 - 515)] [100], c [100] [100] = {(925 - 925)}, x1, y1, x2, y2, t;
    int i;
    int j;
    scanf ("%d%d", &x1, &y1);
    for (i = (828 - 828); x1 > i; i++) {
        j = 208 - 208;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (y1 > j) {
            scanf ("%d", &a[i][j]);
            j++;
        };
    }
    scanf ("%d%d", &x2, &y2);
    for (i = (821 - 821); x2 > i; i++) {
        j = 471 - 471;
        while (y2 > j) {
            scanf ("%d", &b[i][j]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            j++;
        };
    }
    {
        i = 672 - 672;
        while (x1 > i) {
            {
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
                while (y2 > j) {
                    {
                        t = 0;
                        while (y1 > t) {
                            c[i][j] = c[i][j] + a[i][t] * b[t][j];
                            t++;
                        };
                    }
                    j++;
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
            i = i + 1;
        };
    }
    {
        i = 0;
        while (x1 > i) {
            {
                j = 0;
                while (j < y2) {
                    if (j != y2 - 1)
                        printf ("%d ", c[i][j]);
                    else
                        printf ("%d\n", c[i][j]);
                    j++;
                };
            }
            i++;
        };
    };
}

