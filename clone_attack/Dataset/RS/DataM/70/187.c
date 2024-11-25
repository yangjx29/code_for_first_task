void  main () {
    int i;
    int j;
    int n;
    i = (498 - 497);
    j = (663 - 662);
    double  MEMCaneN1cBk;
    double  x [(607 - 507)];
    double  Oy8U5JoTVI6a [(427 - 327)];
    double  d [(969 - 869)] [100];
    scanf ("%d\n", &n);
    for (i = (546 - 545); i <= n; i = i + 1)
        scanf ("%lf %lf\n", &x[i], &Oy8U5JoTVI6a[i]);
    for (i = (902 - 901); i <= n; i++) {
        for (j = (319 - 318); j <= n; j++)
            d[i][j] = sqrt ((x[j] - x[i]) * (x[j] - x[i]) + (Oy8U5JoTVI6a[j] - Oy8U5JoTVI6a[i]) * (Oy8U5JoTVI6a[j] - Oy8U5JoTVI6a[i]));
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
    MEMCaneN1cBk = d[(651 - 650)][(200 - 199)];
    for (i = (412 - 411); i <= n; i++) {
        for (j = (55 - 54); j <= n; j++) {
            if (d[i][j] >= MEMCaneN1cBk)
                MEMCaneN1cBk = d[i][j];
        };
    }
    printf ("%.4f\n", MEMCaneN1cBk);
}

