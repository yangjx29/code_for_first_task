int main () {
    double  x1, x2, m, ikTFmhBf3V;
    int n;
    double  A [15], B [15], biBoyG [15];
    int i;
    scanf ("%d", &n);
    {
        i = 0;
        while (n > i) {
            scanf ("%lf%lf%lf", &A[i], &B[i], &biBoyG[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (n > i) {
            m = B[i] * B[i] - 4 * A[i] * biBoyG[i];
            if (0 > m) {
                ikTFmhBf3V = sqrt (-m) / (2 * A[i]);
                if (!(0 != B[i]))
                    printf ("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", (B[i]) / (2 * A[i]), ikTFmhBf3V, (B[i]) / (2 * A[i]), ikTFmhBf3V);
                else
                    printf ("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", (-B[i]) / (2 * A[i]), ikTFmhBf3V, (-B[i]) / (2 * A[i]), ikTFmhBf3V);
            }
            else {
                if (m == 0) {
                    x1 = (-B[i]) / (2 * A[i]);
                    printf ("x1=x2=%.5lf\n", x1);
                }
                else {
                    x1 = (-B[i] + sqrt (m)) / (2 * A[i]);
                    x2 = (-B[i] - sqrt (m)) / (2 * A[i]);
                    printf ("x1=%.5lf;x2=%.5lf\n", x1, x2);
                };
            }
            i = i + 1;
        };
    }
    return 0;
}

