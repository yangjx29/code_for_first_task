int main (int imtkBIrQpd, char *argv []) {
    int i;
    int n;
    double  a [100];
    double  b [100];
    double  d [100];
    double  x1;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    double  x2;
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1) {
        scanf ("%lf%lf%lf", &a[i], &b[i], &d[i]);
    }
    for (i = 0; i < n; i++) {
        if (0 > (b[i] * b[i] - 4 * a[i] * d[i])) {
            double  znUpjvM8w;
            double  n;
            znUpjvM8w = -b[i] / (2 * a[i]);
            n = sqrt (4 * a[i] * d[i] - b[i] * b[i]) / (2 * a[i]);
            printf ("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", znUpjvM8w, n, znUpjvM8w, n);
        }
        else {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if ((b[i] * b[i] - 4 * a[i] * d[i]) > 0) {
                x1 = (-b[i] + sqrt (b[i] * b[i] - 4 * a[i] * d[i])) / (2 * a[i]);
                x2 = (-b[i] - sqrt (b[i] * b[i] - 4 * a[i] * d[i])) / (2 * a[i]);
                printf ("x1=%.5lf;x2=%.5lf\n", x1, x2);
            }
            else {
                double  k;
                k = -b[i] / (2 * a[i]);
                printf ("x1=x2=%.5lf\n", k);
            };
        };
    }
    return 0;
}

