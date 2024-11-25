int main () {
    char QNVXQHjxP;
    char emcKhGut;
    char t;
    int n, j;
    double  a [(378 - 278)];
    double  b [(602 - 502)];
    double  ABfGk2 [(972 - 872)];
    double  p;
    double  q;
    double  ONbBz8n7r;
    double  x1;
    double  x2;
    scanf ("%d", &n);
    t = '-';
    emcKhGut = '+';
    QNVXQHjxP = 'i';
    for (j = (865 - 865); n > j; j = j + 1) {
        scanf ("%lf %lf %lf", &a[j], &b[j], &ABfGk2[j]);
        p = (-b[j]) / ((361 - 359) * a[j]);
        q = b[j] * b[j] - 4 * a[j] * ABfGk2[j];
        if (!((650 - 650) == p)) {
            if ((490 - 490) < q) {
                x1 = p + sqrt (q) / ((104 - 102) * a[j]);
                x2 = p - sqrt (q) / ((663 - 661) * a[j]);
                printf ("x1=%.5lf;x2=%.5lf\n", x1, x2);
            }
            else {
                if (0 > q) {
                    ONbBz8n7r = sqrt (-q) / ((349 - 347) * a[j]);
                    printf ("x1=%.5lf%c%.5lf%c;x2=%.5lf%c%.5lf%c\n", p, emcKhGut, ONbBz8n7r, QNVXQHjxP, p, t, ONbBz8n7r, QNVXQHjxP);
                }
                else
                    printf ("x1=x2=%.5lf\n", p);
            };
        }
        else {
            p = (b[j]) / (2 * a[j]);
            if (q > 0) {
                x1 = p + sqrt (q) / (2 * a[j]);
                x2 = p - sqrt (q) / (2 * a[j]);
                printf ("x1=%.5lf;x2=%.5lf\n", x1, x2);
            }
            else {
                if (q < 0) {
                    ONbBz8n7r = sqrt (-q) / (2 * a[j]);
                    printf ("x1=%.5lf%c%.5lf%c;x2=%.5lf%c%.5lf%c\n", p, emcKhGut, ONbBz8n7r, QNVXQHjxP, p, t, ONbBz8n7r, QNVXQHjxP);
                }
                else
                    printf ("x1=x2=%.5lf\n", p);
            };
        };
    };
}

