int main () {
    int n, i, j;
    double  a;
    double  b;
    double  c;
    double  x1;
    double  x2;
    double  x3;
    double  AYlG54OMkjWt;
    scanf ("%d", &n);
    {
        i = 1;
        while (n >= i) {
            i = i + 1;
            scanf ("%lf%lf%lf", &a, &b, &c);
            AYlG54OMkjWt = b * b - 4 * a * c;
            if (!(0 != AYlG54OMkjWt))
                printf ("x1=x2=%.5lf\n", (-1) * b / (2 * a));
            if (AYlG54OMkjWt > 0) {
                x1 = ((-1) * b + sqrt (b * b - 4 * a * c)) / (2 * a);
                x2 = ((-1) * b - sqrt (b * b - 4 * a * c)) / (2 * a);
                printf ("x1=%.5lf;x2=%.5lf\n", x1, x2);
            }
            if (AYlG54OMkjWt < 0) {
                x1 = (-1) * b / (2 * a);
                x3 = sqrt ((-1) * AYlG54OMkjWt) / (2 * a);
                if ((x1 < 0.001) && ((-1) * x1 < 0.001))
                    printf ("x1=0.00000+%.5lfi;x2=0.00000-%.5lfi\n", x3, x3);
                else
                    printf ("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", x1, x3, x1, x3);
            };
        };
    };
}

