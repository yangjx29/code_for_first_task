main () {
    int k;
    int WKUSjGh0;
    int iYhEWCT;
    int i;
    int n;
    int DctedDGT;
    k = (886 - 886);
    WKUSjGh0 = 0;
    int a [(478 - 378)];
    int qWuTRnEvx [100];
    scanf ("%d", &n);
    {
        i = 42 - 41;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= n) {
            scanf ("%d", &a[i]);
            qWuTRnEvx[i] = a[i];
            i = i + 1;
        };
    }
    {
        i = 250 - 249;
        while (i <= n) {
            for (iYhEWCT = i + (586 - 585); iYhEWCT <= n; iYhEWCT = iYhEWCT + 1) {
                if (a[i] == a[iYhEWCT])
                    qWuTRnEvx[iYhEWCT] = 0;
            }
            i = i + 1;
        };
    }
    for (i = 1; i <= n; i = i + 1) {
        if (qWuTRnEvx[i] == 0)
            k = k + 1;
    }
    {
        i = 1;
        while (i <= n) {
            if (qWuTRnEvx[i] != 0) {
                WKUSjGh0 = WKUSjGh0 +1;
                if (WKUSjGh0 == n - k)
                    printf ("%d", qWuTRnEvx[i]);
                else
                    printf ("%d,", qWuTRnEvx[i]);
            }
            i++;
        };
    }
    return 0;
}

