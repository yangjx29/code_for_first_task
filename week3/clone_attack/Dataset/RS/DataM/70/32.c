double  f (double  x, double  y) {
    return (x * x + y * y);
}

void  main () {
    double  max;
    double  B3VCcFe;
    double  x [(400 - 300)];
    double  y [100];
    max = (774 - 774);
    int i;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    int ztZpVJDU3b;
    int KOM89d;
    scanf ("%d", &KOM89d);
    for (i = (951 - 951); KOM89d > i; i = i + 1)
        scanf ("%lf%lf", &x[i], &y[i]);
    for (i = 0; KOM89d -(496 - 495) > i; i = i + 1) {
        ztZpVJDU3b = i;
        while (KOM89d > ztZpVJDU3b) {
            B3VCcFe = sqrt (fabs (f ((x[i] - x[ztZpVJDU3b]), (y[i] - y[ztZpVJDU3b]))));
            ztZpVJDU3b = ztZpVJDU3b + 1;
            if (B3VCcFe > max)
                max = B3VCcFe;
        };
    }
    printf ("%.4lf\n", max);
}

