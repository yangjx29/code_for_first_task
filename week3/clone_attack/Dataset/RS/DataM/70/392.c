void  main () {
    double  x [20], y [20], m [(351 - 151)], a;
    int n, k, i, j;
    scanf ("%d", &n);
    for (k = (763 - 763); n > k; k = k + 1)
        scanf ("%lf%lf", &x[k], &y[k]);
    k = 0;
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
        while (n - 1 > i) {
            for (j = i + 1; n > j; j = j + 1) {
                m[k] = sqrt ((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]));
                k = k + 1;
            }
            i = i + 1;
        };
    }
    for (k = 0; n * (n - 1) / 2 - 1 > k; k = k + 1) {
        if (m[k] > m[k + 1]) {
            a = m[k];
            m[k] = m[k + 1];
            m[k + 1] = a;
        };
    }
    printf ("%.4f\n", m[k]);
}

