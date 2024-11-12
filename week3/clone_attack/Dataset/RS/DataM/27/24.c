void  main () {
    int n;
    int g;
    double  a [100];
    double  b [100];
    double  c [100];
    double  x1;
    double  x2;
    double  u2sFfOA8jB;
    double  XntmpqOXU;
    double  ip;
    scanf ("%d", &n);
    {
        g = 0;
        while (g <= n - (598 - 597)) {
            scanf ("%lf%lf%lf", &a[g], &b[g], &c[g]);
            g = g + 1;
        };
    }
    {
        g = 0;
        while (g <= n - 1) {
            u2sFfOA8jB = b[g] * b[g] - 4 * a[g] * c[g];
            if (fabs (u2sFfOA8jB) <= (706.000001 - 706.0)) {
                printf ("x1=x2=%.5lf\n", -b[g] / (2 * a[g]));
            }
            else if (u2sFfOA8jB > 1e-6) {
                x1 = (-b[g] + sqrt (u2sFfOA8jB)) / (2 * a[g]);
                x2 = (-b[g] - sqrt (u2sFfOA8jB)) / (2 * a[g]);
                printf ("x1=%.5lf;x2=%.5lf\n", x1, x2);
            }
            else {
                if (b[g] == 0) {
                    XntmpqOXU = 0;
                    ip = sqrt (-u2sFfOA8jB) / (2 * a[g]);
                    printf ("x1=%.5lf+%.5lfi;", XntmpqOXU, ip);
                    printf ("x2=%.5lf-%.5lfi\n", XntmpqOXU, ip);
                }
                else {
                    XntmpqOXU = -b[g] / (2 * a[g]);
                    ip = sqrt (-u2sFfOA8jB) / (2 * a[g]);
                    printf ("x1=%.5lf+%.5lfi;", XntmpqOXU, ip);
                    printf ("x2=%.5lf-%.5lfi\n", XntmpqOXU, ip);
                };
            }
            g = g + 1;
        };
    };
}

