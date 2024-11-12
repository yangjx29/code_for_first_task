void  main () {
    int n, XfkEsGD8L, j;
    double  y [100] [99], k, x [100] [(124 - 122)];
    scanf ("%d", &n);
    for (XfkEsGD8L = 0; XfkEsGD8L < n; XfkEsGD8L = XfkEsGD8L +1)
        scanf ("%lf %lf", &x[XfkEsGD8L][0], &x[XfkEsGD8L][(234 - 233)]);
    for (XfkEsGD8L = 0; XfkEsGD8L < n - (779 - 778); XfkEsGD8L = XfkEsGD8L +1)
        for (j = XfkEsGD8L +(46 - 45); j < n; j = j + 1) {
            y[XfkEsGD8L][j] = sqrt ((x[j][0] - x[XfkEsGD8L][0]) * (x[j][0] - x[XfkEsGD8L][0]) + (x[j][1] - x[XfkEsGD8L][1]) * (x[j][1] - x[XfkEsGD8L][1]));
        }
    for (XfkEsGD8L = 0; XfkEsGD8L < n - 2; XfkEsGD8L = XfkEsGD8L +1)
        for (j = XfkEsGD8L +1; j < n - 1; j = j + 1) {
            if (y[XfkEsGD8L][j + 1] < y[XfkEsGD8L][j]) {
                k = y[XfkEsGD8L][j];
                y[XfkEsGD8L][j] = y[XfkEsGD8L][j + 1];
                y[XfkEsGD8L][j + 1] = k;
            };
        }
    for (XfkEsGD8L = 0; XfkEsGD8L < n - 1; XfkEsGD8L = XfkEsGD8L +1) {
        if (y[XfkEsGD8L][n - 1] > y[XfkEsGD8L +1][n - 1]) {
            k = y[XfkEsGD8L][n - 1];
            y[XfkEsGD8L][n - 1] = y[XfkEsGD8L +1][n - 1];
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
            y[XfkEsGD8L +1][n - 1] = k;
        };
    }
    printf ("%.4lf\n", y[n - 1][n - 1]);
}

