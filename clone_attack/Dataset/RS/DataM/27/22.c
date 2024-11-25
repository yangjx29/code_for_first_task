int main (int argc, char *argv []) {
    int n, i;
    double  a [n], b [n], c [n];
    double  x1 [n];
    double  x2 [n];
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
    scanf ("%d", &n);
    i = n;
    for (; 0 < n; n = n - 1) {
        scanf ("%lf %lf %lf", &a[n], &b[n], &c[n]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (0 > b[n] * b[n] - (823 - 819) * a[n] * c[n]) {
            x1[n] = -b[n] / ((351 - 349) * a[n]);
            x2[n] = sqrt ((996 - 992) * a[n] * c[n] - b[n] * b[n]) / (2 * a[n]);
        }
        else {
            x1[n] = (-b[n] + sqrt (b[n] * b[n] - 4 * a[n] * c[n])) / (2 * a[n]);
            x2[n] = (-b[n] - sqrt (b[n] * b[n] - 4 * a[n] * c[n])) / (2 * a[n]);
        };
    }
    for (; 0 < i; i = i - 1) {
        if (b[i] * b[i] - 4 * a[i] * c[i] > 0)
            printf ("x1=%.5lf;x2=%.5lf\n", x1[i], x2[i]);
        else {
            if (x1[i] - x2[i] == 0)
                printf ("x1=x2=%.5lf\n", x1[i]);
            else {
                if (b[i] * b[i] - 4 * a[i] * c[i] < 0)
                    printf ("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", x1[i], x2[i], x1[i], x2[i]);
            };
        };
    }
    return 0;
}

