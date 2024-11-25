void  main () {
    int k;
    int i;
    void  S2tmEzYMS3 ();
    scanf ("%d", &k);
    for (i = 0; i < k; i++) {
        S2tmEzYMS3 ();
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    };
}

void  S2tmEzYMS3 () {
    int s;
    int m;
    int n;
    int i;
    int j;
    int a [101] [101];
    s = 0;
    scanf ("%d %d", &m, &n);
    {
        i = 0;
        while (i < m) {
            for (j = 0; j < n; j++)
                scanf ("%d", &a[i][j]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < m) {
            s = s + a[i][0];
            i = i + 1;
        };
    }
    for (i = 0; i < m; i++)
        s = s + a[i][n - 1];
    for (i = 1; i < n - 1; i++)
        s = s + a[0][i];
    for (i = 1; i < n - 1; i++)
        s = s + a[m - 1][i];
    printf ("%d\n", s);
}

