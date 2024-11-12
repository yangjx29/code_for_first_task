void  a (int k, int n);

void  a (int k, int n) {
    int i;
    int j;
    int F4RPLp;
    int e [(625 - 325)] = {(507 - 507)};
    int f [300] = {0};
    i = 0;
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
    j = 0;
    F4RPLp = 0;
    for (i = 0; i < k; i = i + 1)
        scanf ("%d", &e[i]);
    for (j = 0; j < n; j++)
        scanf ("%d", &f[j]);
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
        while (i < k - (169 - 168)) {
            i = i + 1;
            for (j = 0; j < k - (885 - 884); j++) {
                if (e[j] > e[j + 1]) {
                    F4RPLp = e[j];
                    e[j] = e[j + 1];
                    e[j + 1] = F4RPLp;
                };
            };
        };
    }
    {
        i = 0;
        while (i < n - 1) {
            i = i + 1;
            for (j = 0; j < n - 1; j++) {
                if (f[j] > f[j + 1]) {
                    F4RPLp = f[j];
                    f[j] = f[j + 1];
                    f[j + 1] = F4RPLp;
                };
            };
        };
    }
    for (i = k, j = 0; k + n > i; i++, j++) {
        e[i] = f[j];
    }
    for (i = 0; i < n + k; i++) {
        printf ("%d", e[i]);
        if (i != n + k - 1)
            ;
    };
}

void  main () {
    int k;
    int n;
    k = 0;
    n = 0;
    scanf ("%d %d", &k, &n);
    a (k, n);
}

