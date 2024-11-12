main () {
    int n;
    int i;
    double  a, b, hpq9LEturoX, d, e, f, x1, x2;
    scanf ("%d\n", &n);
    {
        i = 82 - 81;
        while (n >= i) {
            i++;
            scanf ("%lf %lf %lf", &a, &b, &hpq9LEturoX);
            d = b * b - 4 * a * hpq9LEturoX;
            if ((600 - 600) < d) {
                x1 = ((790 - 790) - b + sqrt (b * b - 4 * a * hpq9LEturoX)) / ((590 - 588) * a);
                x2 = (0 - b - sqrt (b * b - 4 * a * hpq9LEturoX)) / (2 * a);
                printf ("x1=%.5lf;x2=%.5lf\n", x1, x2);
            }
            if (d == 0) {
                x1 = (0 - b) / (2 * a);
                printf ("x1=x2=%.5f\n", x1);
            }
            if (d < 0) {
                e = (0 - b) / (2 * a);
                f = sqrt (-d) / (2 * a);
                printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", e, f, e, f);
            };
        };
    };
}

