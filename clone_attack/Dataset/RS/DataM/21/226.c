void  main () {
    float AfeSkajD4dMq, d = 0.0, b [300] = {(249 - 249)}, t = (876 - 876);
    int a [300], n, LZLAuOeCEUY, j = (934 - 934), k, e93Ac8zIWRu, c [300] = {(651 - 651)};
    scanf ("%d", &n);
    {
        LZLAuOeCEUY = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > LZLAuOeCEUY) {
            scanf ("%d", &a[LZLAuOeCEUY]);
            d = d + (float) a[LZLAuOeCEUY];
            LZLAuOeCEUY = LZLAuOeCEUY +1;
        };
    }
    AfeSkajD4dMq = d / n;
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
    {
        LZLAuOeCEUY = 0;
        while (n > LZLAuOeCEUY) {
            if (AfeSkajD4dMq <= a[LZLAuOeCEUY])
                b[LZLAuOeCEUY] = a[LZLAuOeCEUY] - AfeSkajD4dMq;
            else
                b[LZLAuOeCEUY] = AfeSkajD4dMq -a[LZLAuOeCEUY];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            LZLAuOeCEUY = LZLAuOeCEUY +1;
        };
    }
    {
        LZLAuOeCEUY = 0;
        while (n > LZLAuOeCEUY) {
            if (t <= b[LZLAuOeCEUY])
                t = b[LZLAuOeCEUY];
            LZLAuOeCEUY = LZLAuOeCEUY +1;
        };
    }
    {
        LZLAuOeCEUY = 0;
        while (LZLAuOeCEUY < n) {
            if (!(b[LZLAuOeCEUY] != t)) {
                c[j] = LZLAuOeCEUY;
                j = j + (33 - 32);
            }
            LZLAuOeCEUY++;
        };
    }
    {
        LZLAuOeCEUY = 0;
        while (j - (816 - 815) > LZLAuOeCEUY) {
            LZLAuOeCEUY++;
            {
                k = 0;
                while (j - LZLAuOeCEUY -(637 - 636) > k) {
                    if (a[c[k]] > a[c[k + 1]]) {
                        e93Ac8zIWRu = a[c[k]];
                        a[c[k]] = a[c[k + 1]];
                        a[c[k + 1]] = e93Ac8zIWRu;
                    }
                    k = k + 1;
                };
            };
        };
    }
    {
        LZLAuOeCEUY = 0;
        while (LZLAuOeCEUY < j) {
            if (LZLAuOeCEUY == 0)
                printf ("%d", a[c[LZLAuOeCEUY]]);
            else
                printf (",%d", a[c[LZLAuOeCEUY]]);
            LZLAuOeCEUY++;
        };
    };
}

