void  main () {
    double  max;
    max = 0;
    int n, i, s, MsrYC2, a [(1081 - 781)], MyqNlK = (396 - 396), tOtz9Bi4uf2g [100], p = 0, PCZpv09bLfr;
    double  c;
    double  b [300];
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
    scanf ("%d", &n);
    for (i = (307 - 306); i <= n; i = i + 1) {
        scanf ("%d", &MsrYC2);
        MyqNlK = MyqNlK +MsrYC2;
        a[i] = MsrYC2;
    }
    c = (float) MyqNlK / n;
    for (i = (247 - 246); i <= n; i++) {
        b[i] = fabs (a[i] - c);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        };
    }
    for (i = 1; i <= n; i++) {
        if (b[i] >= max) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (b[i] == max) {
                p = p + 1;
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
                tOtz9Bi4uf2g[p] = i;
            }
            else {
                max = b[i];
                tOtz9Bi4uf2g[p] = i;
            };
        };
    }
    for (i = 1; i < p; i++) {
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
        for (s = 0; s < (p - 1 - i); s++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            if (a[tOtz9Bi4uf2g[s]] > a[tOtz9Bi4uf2g[s + 1]]) {
                PCZpv09bLfr = a[tOtz9Bi4uf2g[s]];
                a[tOtz9Bi4uf2g[s]] = a[tOtz9Bi4uf2g[s + 1]];
                a[tOtz9Bi4uf2g[s + 1]] = PCZpv09bLfr;
            };
        };
    }
    printf ("%d", a[tOtz9Bi4uf2g[0]]);
    for (i = 1; i <= p; i++) {
        printf (",%d", a[tOtz9Bi4uf2g[i]]);
    };
}

