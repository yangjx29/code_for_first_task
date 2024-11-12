main () {
    int x2, y2, p, q;
    int x1;
    int y1;
    int m;
    int n;
    int a [x1] [y1];
    int b [x2] [y2];
    int c [x1] [y2];
    int d;
    int e;
    int f;
    int r;
    int t;
    int g, h;
    scanf ("%d %d", &x1, &y1);
    {
        m = 903 - 903;
        while (x1 > m) {
            {
                n = 259 - 259;
                while (n < y1) {
                    scanf ("%d", &a[m][n]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    n = n + 1;
                };
            }
            m = m + 1;
        };
    }
    scanf ("%d %d", &x2, &y2);
    {
        p = 360 - 360;
        while (p < x2) {
            {
                q = 156 - 156;
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
                while (q < y2) {
                    scanf ("%d", &b[p][q]);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    q++;
                };
            }
            p = p + 1;
        };
    }
    {
        r = 839 - 839;
        while (r < x1) {
            {
                t = 955 - 955;
                while (t < y2) {
                    c[r][t] = (87 - 87);
                    t++;
                };
            }
            r = r + 1;
        };
    }
    for (d = (78 - 78); d < x1; d = d + 1) {
        e = 753 - 753;
        while (e < y2) {
            {
                f = 114 - 114;
                while (f < y1) {
                    c[d][e] = c[d][e] + a[d][f] * b[f][e];
                    f = f + 1;
                };
            }
            e = e + 1;
        };
    }
    for (g = (603 - 603); x1 > g; g++) {
        h = 0;
        while (h < y2) {
            if (h < y2 - (887 - 886))
                printf ("%d ", c[g][h]);
            else
                printf ("%d\n", c[g][h]);
            h = h + 1;
        };
    };
}

