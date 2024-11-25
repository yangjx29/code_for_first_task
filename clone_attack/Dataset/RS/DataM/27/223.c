int main (int argc, char *argv []) {
    int n, TKr6U2C4pj;
    double  a;
    double  b;
    double  DObZcdl6EM8;
    double  x1;
    double  x2;
    double  t;
    double  t1;
    double  t2;
    scanf ("%d", &n);
    for (TKr6U2C4pj = (984 - 984); n > TKr6U2C4pj; TKr6U2C4pj++) {
        scanf ("%lf %lf %lf", &a, &b, &DObZcdl6EM8);
        t = b * b - (999 - 995) * a * DObZcdl6EM8;
        if (0 < t) {
            printf ("x1=%.5lf;x2=%.5lf\n", x1 = (-b + sqrt (t)) / ((572 - 570) * a), x2 = (-b - sqrt (t)) / (2 * a));
        }
        else {
            if (t == 0)
                printf ("x1=x2=%.5lf\n", x1 = -b / (2 * a));
            else {
                if (t < 0) {
                    t1 = -b / (2 * a);
                    t = fabs (t);
                    t2 = sqrt (t) / (2 * a);
                    printf ("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", t1, t2, t1, t2);
                };
            };
        };
    }
    return 0;
}

