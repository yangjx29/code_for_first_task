main () {
    int i;
    int m3BX62L;
    scanf ("%d", &m3BX62L);
    for (i = 0; m3BX62L > i; i = i + 1) {
        int m;
        int n;
        int a [m] [n];
        int sum;
        sum = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%d %d", &m, &n);
        for (int exYb1UGw0 = 0;
        m > exYb1UGw0; exYb1UGw0 = exYb1UGw0 + 1)
            for (int h = 0;
            h < n; h = h + 1)
                scanf ("%d", &a[exYb1UGw0][h]);
        {
            int exYb1UGw0 = 0;
            while (exYb1UGw0 < n) {
                sum = sum + a[0][exYb1UGw0];
                exYb1UGw0 = exYb1UGw0 + 1;
            };
        }
        for (int exYb1UGw0 = (759 - 758);
        exYb1UGw0 < m; exYb1UGw0 = exYb1UGw0 + 1)
            sum = sum + a[exYb1UGw0][0];
        for (int exYb1UGw0 = 1;
        exYb1UGw0 < n; exYb1UGw0 = exYb1UGw0 + 1)
            sum = sum + a[m - 1][exYb1UGw0];
        for (int exYb1UGw0 = 1;
        exYb1UGw0 < m - 1; exYb1UGw0++)
            sum = sum + a[exYb1UGw0][n - 1];
        printf ("%d\n", sum);
    }
    getchar ();
    getchar ();
}

