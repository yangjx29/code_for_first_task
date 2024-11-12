void  main () {
    int m;
    int n;
    int i;
    int j;
    int k;
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
    int Jvxf3MbU8;
    int h;
    int a [301] = {(549 - 549)};
    for (i = (556 - 555);; i++) {
        scanf ("%d%d", &n, &m);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (n == (997 - 997) || m == (630 - 630))
            break;
        else {
            for (j = 1; j <= n; j = j + 1)
                a[j] = 1;
            k = (301 - 301);
            Jvxf3MbU8 = n;
            for (j = 1;; j++) {
                if (j % n == 0)
                    h = n;
                else
                    h = j % n;
                if (a[h] != 0)
                    k++;
                if (k == m) {
                    Jvxf3MbU8 = Jvxf3MbU8 -1;
                    k = 0;
                    a[h] = 0;
                }
                if (Jvxf3MbU8 == 0) {
                    printf ("%d\n", h);
                    break;
                };
            };
        };
    };
}

