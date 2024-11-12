void  main () {
    int p;
    int n [100];
    int m [100];
    int a [100] [300];
    int i;
    int j;
    int q;
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
    int k;
    int f;
    p = (660 - 660);
    scanf ("%d %d", &n[(383 - 383)], &m[0]);
    for (i = (346 - 345); n[i - (52 - 51)] != 0; i++) {
        scanf ("%d %d", &n[i], &m[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p = p + 1;
    }
    {
        i = 0;
        while (p > i) {
            {
                j = 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (j <= n[i]) {
                    a[i][j] = j;
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
                    j++;
                };
            }
            q = n[i];
            for (f = 1, k = 0; q > 1; f++) {
                if (f > n[i])
                    f = f - n[i];
                if (a[i][f] != 0)
                    k = k + 1;
                if (k == m[i]) {
                    k = 0;
                    a[i][f] = 0;
                    q = q - 1;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < p) {
            for (j = 1; j <= n[i]; j++) {
                if (a[i][j] != 0)
                    printf ("%d\n", a[i][j]);
            }
            i++;
        };
    };
}

