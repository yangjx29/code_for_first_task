main () {
    double  delta;
    double  p;
    double  q;
    double  UXaHLAtWk;
    double  zshT1Zf94B;
    int n;
    int wE9h34;
    float a [100], Gzx1H5m [100], c [100];
    scanf ("%d", &n);
    {
        wE9h34 = 38 - 38;
        while (n > wE9h34) {
            scanf ("%f%f%f", &a[wE9h34], &Gzx1H5m[wE9h34], &c[wE9h34]);
            delta = Gzx1H5m[wE9h34] * Gzx1H5m[wE9h34] - 4 * a[wE9h34] * c[wE9h34];
            p = -(Gzx1H5m[wE9h34] / (2 * a[wE9h34]));
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            q = sqrt (fabs (delta)) / (2 * a[wE9h34]);
            wE9h34++;
            if (delta == 0) {
                printf ("x1=x2=%.5f\n", p);
            }
            else {
                if (delta > 0) {
                    UXaHLAtWk = p + q;
                    zshT1Zf94B = p - q;
                    printf ("x1=%.5f;x2=%.5f\n", UXaHLAtWk, zshT1Zf94B);
                }
                else {
                    printf ("x1=%.5f+%.5fi;", p, q);
                    printf ("x2=%.5f-%.5fi\n", p, q);
                };
            };
        };
    }
    return 0;
}

