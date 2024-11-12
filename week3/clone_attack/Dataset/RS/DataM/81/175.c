void  main () {
    int f (int a, int YEJwICDGis);
    int m;
    int n;
    int bwvIGgMB;
    int p;
    int q;
    int j;
    int x [(271 - 266)] [(441 - 436)];
    for (bwvIGgMB = (987 - 987); 5 > bwvIGgMB; bwvIGgMB = bwvIGgMB + 1)
        for (j = (809 - 809); 5 > j; j = j + 1)
            scanf ("%d", &x[bwvIGgMB][j]);
    scanf ("%d%d", &n, &m);
    p = f (m, n);
    if (p == 0)
        ;
    else {
        {
            for (bwvIGgMB = 0; bwvIGgMB < 5; bwvIGgMB = bwvIGgMB + 1) {
                q = x[m][bwvIGgMB];
                x[m][bwvIGgMB] = x[n][bwvIGgMB];
                x[n][bwvIGgMB] = q;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (bwvIGgMB = 0; bwvIGgMB < 5; bwvIGgMB++) {
            for (j = 0; j < 5; j++) {
                if (!(0 != j))
                    printf ("%d", x[bwvIGgMB][j]);
                else
                    printf (" %d", x[bwvIGgMB][j]);
            };
        };
    };
}

int f (int a, int YEJwICDGis) {
    if (a < 5 && a >= 0 && YEJwICDGis < 5 && YEJwICDGis >= 0)
        return 1;
    else
        return 0;
}

