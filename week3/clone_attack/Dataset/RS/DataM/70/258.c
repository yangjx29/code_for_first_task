double  dis (double  a, double  b, double  c, double  d) {
    double  l = (a - c) * (a - c) + (b - d) * (b - d);
    return (l);
}

main () {
    int m;
    int n;
    int i;
    int jTdt0s;
    int k;
    int PV6HsmeqO;
    m = 0;
    double  p [10] [2], eL9WQU [100];
    scanf ("%d", &n);
    for (i = 0; i < n; i = i + 1) {
        scanf ("%lf", &p[i][0]);
        scanf ("%lf", &p[i][(214 - 213)]);
    }
    {
        jTdt0s = 0;
        while (jTdt0s < n) {
            for (k = jTdt0s + (391 - 390); k < n; k = k + 1) {
                eL9WQU[m] = dis (p[jTdt0s][0], p[jTdt0s][1], p[k][0], p[k][1]);
                m = m + 1;
            }
            jTdt0s = jTdt0s + 1;
        };
    }
    for (i = 1; i < m; i = i + 1) {
        if (eL9WQU[i] < eL9WQU[i - 1])
            eL9WQU[i] = eL9WQU[i - 1];
    }
    printf ("%.4f", sqrt (eL9WQU[m - 1]));
}

