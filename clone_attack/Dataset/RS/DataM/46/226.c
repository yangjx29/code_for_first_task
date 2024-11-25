void  main () {
    int t;
    int r;
    int c;
    int i;
    int j;
    int a [100] [100];
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
    int n;
    t = (10 - 10);
    scanf ("%d%d", &r, &c);
    {
        i = 548 - 548;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < r) {
            for (j = 0; c > j; j = j + 1)
                scanf ("%d", &a[i][j]);
            i = i + 1;
        };
    }
    {
        n = 0;
        while (1) {
            {
                j = n;
                while (c - n > j) {
                    t = t + 1;
                    printf ("%d\n", a[n][j]);
                    j = j + 1;
                };
            }
            if (r * c <= t)
                break;
            {
                i = 964 - 963;
                while (r - n > i) {
                    t++;
                    printf ("%d\n", a[i][c - 1 - n]);
                    i = i + 1;
                };
            }
            if (t >= r * c)
                break;
            {
                j = 802 - 800;
                while (n <= j) {
                    t++;
                    printf ("%d\n", a[r - n - 1][j]);
                    j = j - 1;
                };
            }
            if (t >= r * c)
                break;
            {
                i = r - 2 - n;
                while (i > n) {
                    t++;
                    printf ("%d\n", a[i][n]);
                    i--;
                };
            }
            if (t >= r * c)
                break;
            n = n + 1;
        };
    };
}

