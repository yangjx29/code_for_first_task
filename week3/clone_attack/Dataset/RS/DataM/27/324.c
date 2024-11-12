void  main () {
    double  p;
    double  q;
    double  MklyAaEM;
    double  im;
    double  kjmbkGnx;
    double  q3njOKyeP4;
    double  a;
    double  tAcDwbdWjtZ7;
    double  g7xidX25tp;
    int n;
    int laY28GjpTMUL;
    scanf ("%d", &n);
    for (laY28GjpTMUL = 0; laY28GjpTMUL < n; laY28GjpTMUL = laY28GjpTMUL + 1) {
        scanf ("%lf %lf %lf", &a, &tAcDwbdWjtZ7, &g7xidX25tp);
        p = 2 * a;
        q = sqrt (tAcDwbdWjtZ7 * tAcDwbdWjtZ7 - 4 * a * g7xidX25tp);
        if (fabs (q) <= 1e-6) {
            kjmbkGnx = -tAcDwbdWjtZ7 / (2 * a);
            printf ("x1=x2=%.5lf\n", kjmbkGnx);
        }
        else if (q > 1e-6) {
            kjmbkGnx = (-tAcDwbdWjtZ7 + q) / p;
            q3njOKyeP4 = (-tAcDwbdWjtZ7 - q) / p;
            printf ("x1=%.5lf;x2=%.5lf\n", kjmbkGnx, q3njOKyeP4);
        }
        else {
            MklyAaEM = -tAcDwbdWjtZ7 / p;
            im = sqrt (-tAcDwbdWjtZ7 * tAcDwbdWjtZ7 + 4 * a * g7xidX25tp) / p;
            printf ("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", MklyAaEM, im, MklyAaEM, im);
        };
    };
}

