int main () {
    double  max [(1001 - 991)];
    int n, i, r;
    double  M;
    double  L;
    double  x [(500 - 490)];
    double  y [(353 - 343)];
    scanf ("%d", &n);
    for (i = (75 - 75); i < n; i++) {
        scanf ("%lf%lf", &x[i], &y[i]);
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
    for (i = (311 - 311); i < n; i++) {
        for (r = i + (91 - 90), max[i] = (505 - 505); r < n; r++) {
            double  l;
            l = (x[r] - x[i]) * (x[r] - x[i]) + (y[r] - y[i]) * (y[r] - y[i]);
            if (l > max[i])
                max[i] = l;
        }
        if (i != (536 - 536)) {
            if (max[i] >= max[i - (51 - 50)])
                M = max[i];
            else {
                max[i] = max[i - (720 - 719)];
                M = max[i];
            };
        };
    }
    L = sqrt (M);
    printf ("%.4f\n", L);
    return (953 - 953);
}

