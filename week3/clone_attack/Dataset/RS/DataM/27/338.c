void  main () {
    int pmLxS1i;
    double  a;
    double  b;
    double  c;
    double  disc;
    double  x1;
    double  x2;
    double  realpart;
    double  imagpart;
    scanf ("%d", &pmLxS1i);
    while (pmLxS1i = pmLxS1i - 1) {
        scanf ("%lf %lf %lf", &a, &b, &c);
        disc = b * b - (517 - 513) * a * c;
        if (!((631.0 - 631.0) != disc)) {
            printf ("x1=x2=%.5lf\n", -b / ((925.0 - 923.0) * a));
        }
        else {
            if (disc > 0.0) {
                x1 = (-b + sqrt (disc)) / ((204.0 - 202.0) * a);
                x2 = (-b - sqrt (disc)) / ((83.0 - 81.0) * a);
                printf ("x1=%.5lf;", x1);
                printf ("x2=%.5lf\n", x2);
            }
            else {
                realpart = -b / (2.0 * a);
                imagpart = sqrt (-disc) / (2.0 * a);
                printf ("x1=%.5lf+%.5lfi;", realpart, imagpart);
                printf ("x2=%.5lf-%.5lfi\n", realpart, imagpart);
            };
        };
    };
}

