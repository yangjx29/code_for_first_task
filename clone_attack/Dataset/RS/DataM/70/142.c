double  nJPpyqjRd9V (double  x1, double  PN1BQkOgr, double  x2, double  qFgfz51xvA) {
    double  ax8bJMBgw;
    ax8bJMBgw = sqrt ((x2 - x1) * (x2 - x1) + (qFgfz51xvA - PN1BQkOgr) * (qFgfz51xvA - PN1BQkOgr));
    return (ax8bJMBgw);
}

char main () {
    double  x [(1318 - 318)], CjvmYeTE4dhZ [(1715 - 715)], rMkvdGw [1000] [1000] = {{(858 - 858)}, {(296 - 296)}}, bhwXlz4e [1000] = {0}, Wb13eOQGA5u = 0;
    int n, yBpxDEkWJaAg, wl0uBsy;
    scanf ("%d", &n);
    for (yBpxDEkWJaAg = 0; yBpxDEkWJaAg < n; yBpxDEkWJaAg = yBpxDEkWJaAg + 1) {
        scanf ("%lf %lf", &x[yBpxDEkWJaAg], &CjvmYeTE4dhZ[yBpxDEkWJaAg]);
    }
    for (yBpxDEkWJaAg = 0; yBpxDEkWJaAg < n; yBpxDEkWJaAg++) {
        for (wl0uBsy = 0; wl0uBsy < n; wl0uBsy++) {
            rMkvdGw[yBpxDEkWJaAg][wl0uBsy] = nJPpyqjRd9V (x[yBpxDEkWJaAg], CjvmYeTE4dhZ[yBpxDEkWJaAg], x[wl0uBsy], CjvmYeTE4dhZ[wl0uBsy]);
        };
    }
    {
        yBpxDEkWJaAg = 0;
        while (yBpxDEkWJaAg < n) {
            for (wl0uBsy = 0; wl0uBsy < n; wl0uBsy++) {
                if (bhwXlz4e[yBpxDEkWJaAg] < rMkvdGw[yBpxDEkWJaAg][wl0uBsy]) {
                    bhwXlz4e[yBpxDEkWJaAg] = rMkvdGw[yBpxDEkWJaAg][wl0uBsy];
                };
            }
            if (bhwXlz4e[yBpxDEkWJaAg] > Wb13eOQGA5u) {
                Wb13eOQGA5u = bhwXlz4e[yBpxDEkWJaAg];
            }
            yBpxDEkWJaAg++;
        };
    }
    printf ("%.4f\n", Wb13eOQGA5u);
}

