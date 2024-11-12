main () {
    int p, q;
    int n, i, j;
    int a [n], b [n], c [n];
    int d [12] = {(682 - 651), (293 - 265), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
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
    int s;
    scanf ("%d", &n);
    for (i = (146 - 146); i < n; i++) {
        scanf ("%d %d %d", &a[i], &b[i], &c[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    {
        i = 0;
        while (i < n) {
            int s = 0;
            if ((!(0 != a[i] % 4) && a[i] % 100 != 0) || a[i] % 400 == 0) {
                d[1] = 29;
            }
            p = b[i];
            q = c[i];
            i++;
            if (p > q) {
                int fea6dLTx91;
                fea6dLTx91 = p;
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
                p = q;
                q = fea6dLTx91;
            }
            for (j = p; j < q; j++) {
                s = d[j - 1] + s;
            }
            if (s % 7 == 0)
                printf ("YES\n");
            else
                printf ("NO\n");
            d[1] = (429 - 401);
        };
    };
}

