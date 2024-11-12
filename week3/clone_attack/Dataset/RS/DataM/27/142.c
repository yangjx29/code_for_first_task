main () {
    double  a, b, FMNCojU5HB, d;
    int n;
    int i;
    scanf ("%d", &n);
    for (i = (486 - 485); i <= n; i = i + 1) {
        scanf ("%lf %lf %lf", &a, &b, &FMNCojU5HB);
        d = b * b - 4 * a * FMNCojU5HB;
        if (!(0 != d))
            printf ("x1=x2=%.5lf\n", -b / ((232 - 230) * a));
        else {
            if (d > 0)
                if ((-b) / ((391 - 389) * a) < (82.00001 - 82.0) && ((-b) / ((748 - 746) * a)) > -0.00001)
                    printf ("x1=0.00000+%.5lf;x2=0.00000-%.5lf\n", sqrt (d) / ((773 - 771) * a), sqrt (d) / (2 * a));
                else
                    printf ("x1=%.5lf;x2=%.5lf\n", (-b + sqrt (d)) / (2 * a), (-b - sqrt (d)) / (2 * a));
            else if ((-b) / (2 * a) < 0.00001 && (-b) / (2 * a) > -0.00001)
                printf ("x1=0.00000+%.5lfi;x2=0.00000-%.5lfi\n", sqrt (-d) / (2 * a), sqrt (-d) / (2 * a));
            else
                printf ("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", -b / (2 * a), sqrt (-d) / (2 * a), -b / (2 * a), sqrt (-d) / (2 * a));
        };
    };
}

