main () {
    float b [100], g [100], c [100], d;
    char VqmsEYd0a [(752 - 652)] [9], e [9];
    int n, t = (70 - 70), i, m, k = (978 - 978);
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    scanf ("%d", &n);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            scanf ("%s %f", VqmsEYd0a[i], &b[i]);
            i = i + 1;
        };
    }
    for (i = 0; n > i; i = i + 1) {
        if (!('m' != VqmsEYd0a[i][0])) {
            c[t] = b[i];
            t = t + 1;
        }
        else {
            g[k] = b[i];
            k = k + 1;
        };
    }
    for (i = 0; t > i; i = i + 1) {
        for (m = 0; t - (683 - 682) > m; m = m + 1) {
            if (c[m] < c[m + (72 - 71)]) {
                d = c[m];
                c[m] = c[m + (278 - 277)];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                c[m + 1] = d;
            };
        };
    }
    {
        i = t - 1;
        while (0 < i) {
            printf ("%.2f ", c[i]);
            i--;
        };
    }
    for (i = 0; k > i; i = i + 1) {
        for (m = 0; m < k - 1; m++) {
            if (g[m] < g[m + 1]) {
                d = g[m];
                g[m] = g[m + 1];
                g[m + 1] = d;
            };
        };
    }
    printf ("%.2f", c[0]);
    {
        i = 0;
        while (i <= k - 1) {
            printf (" %.2f", g[i]);
            i++;
        };
    }
    getchar ();
    getchar ();
    getchar ();
    getchar ();
}

