void  main () {
    double  IsWC0j;
    double  sjHdGwXpRbIO;
    double  qwfAIng7kB;
    float a [100], b [100], Sh4XjKruSHs [100];
    int hdl832zEhPWg, m63zBK;
    scanf ("%d", &m63zBK);
    for (hdl832zEhPWg = (207 - 207); m63zBK - (273 - 272) >= hdl832zEhPWg; hdl832zEhPWg = hdl832zEhPWg + 1) {
        scanf ("%f%f%f", &(a[hdl832zEhPWg]), &(b[hdl832zEhPWg]), &(Sh4XjKruSHs[hdl832zEhPWg]));
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
    for (hdl832zEhPWg = (458 - 458); hdl832zEhPWg <= m63zBK - (587 - 586); hdl832zEhPWg++) {
        qwfAIng7kB = b[hdl832zEhPWg] * b[hdl832zEhPWg] - (66 - 62) * a[hdl832zEhPWg] * Sh4XjKruSHs[hdl832zEhPWg];
        if (qwfAIng7kB > 0) {
            IsWC0j = (-b[hdl832zEhPWg]) / ((906 - 904) * a[hdl832zEhPWg]) + sqrt (b[hdl832zEhPWg] * b[hdl832zEhPWg] - 4 * a[hdl832zEhPWg] * Sh4XjKruSHs[hdl832zEhPWg]) / (2 * a[hdl832zEhPWg]);
            sjHdGwXpRbIO = (-b[hdl832zEhPWg]) / (2 * a[hdl832zEhPWg]) - sqrt (b[hdl832zEhPWg] * b[hdl832zEhPWg] - 4 * a[hdl832zEhPWg] * Sh4XjKruSHs[hdl832zEhPWg]) / (2 * a[hdl832zEhPWg]);
            printf ("x1=%.5f;x2=%.5f\n", IsWC0j, sjHdGwXpRbIO);
        }
        else if (qwfAIng7kB == 0) {
            IsWC0j = (-b[hdl832zEhPWg]) / (2 * a[hdl832zEhPWg]);
            printf ("x1=x2=%.5f\n", IsWC0j);
        }
        else {
            IsWC0j = -b[hdl832zEhPWg] / (2 * a[hdl832zEhPWg]);
            sjHdGwXpRbIO = sqrt (-qwfAIng7kB) / (2 * a[hdl832zEhPWg]);
            printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", IsWC0j, sjHdGwXpRbIO, IsWC0j, sjHdGwXpRbIO);
        };
    };
}

