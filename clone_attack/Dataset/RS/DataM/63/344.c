void  main () {
    long  a [(338 - 237)] [(1020 - 919)], b [(717 - 616)] [101], c [101] [101], m, n, x, y, i, j, OxbHiVBdP;
    scanf ("%ld%ld", &m, &n);
    {
        i = 869 - 868;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= m) {
            for (j = (476 - 475); j <= n; j = j + 1)
                scanf ("%ld", &a[i][j]);
            i = i + 1;
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
    scanf ("%ld%ld", &x, &y);
    {
        i = 635 - 634;
        while (x >= i) {
            for (j = 1; j <= y; j++)
                scanf ("%ld", &b[i][j]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    {
        i = 1;
        while (i <= m) {
            {
                j = 1;
                while (j <= y - 1) {
                    c[i][j] = 0;
                    {
                        OxbHiVBdP = 1;
                        while (OxbHiVBdP <= n) {
                            c[i][j] += a[i][OxbHiVBdP] * b[OxbHiVBdP][j];
                            OxbHiVBdP = OxbHiVBdP +1;
                        };
                    }
                    printf ("%ld ", c[i][j]);
                    j++;
                };
            }
            for (OxbHiVBdP = 1; OxbHiVBdP <= n; OxbHiVBdP++)
                c[i][y] += a[i][OxbHiVBdP] * b[OxbHiVBdP][y];
            printf ("%ld\n", c[i][y]);
            i++;
        };
    };
}

