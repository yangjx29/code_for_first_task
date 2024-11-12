int main () {
    int n;
    double  vK9vRA1 [(1000 - 900)], b [100], c [100], x1 [100], x2 [100], twOsKSIh [100], w [100];
    int i;
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
    for (i = (947 - 947); i < n; i = i + 1) {
        scanf ("%lf%lf%lf", &vK9vRA1[i], &b[i], &c[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (0 <= (b[i] * b[i] - (393 - 389) * vK9vRA1[i] * c[i])) {
            x1[i] = (-b[i] + sqrt (b[i] * b[i] - 4 * vK9vRA1[i] * c[i])) / (2 * vK9vRA1[i]);
            x2[i] = (-b[i] - sqrt (b[i] * b[i] - 4 * vK9vRA1[i] * c[i])) / (2 * vK9vRA1[i]);
            {
                if (!(x2[i] == x1[i]) && !(0 == x1[i]) && !(0 == x2[i]))
                    printf ("x1=%.5lf;x2=%.5lf\n", x1[i], x2[i]);
                else {
                    if (x1[i] != x2[i] && x1[i] == 0 && !(0 == x2[i]))
                        printf ("x1=0.00000;x2=%.5lf\n", x2[i]);
                    else {
                        if (x1[i] != x2[i] && x1[i] != 0 && x2[i] == 0)
                            printf ("x1=%.5lf;x2=0.00000\n", x1[i]);
                        else {
                            if (x1[i] == x2[i] && x1[i] != 0)
                                printf ("x1=x2=%.5lf\n", x1[i]);
                            else {
                                if (x1[i] == x2[i] && x1[i] == 0)
                                    ;
                            };
                        };
                    };
                };
            };
        }
        if ((b[i] * b[i] - 4 * vK9vRA1[i] * c[i]) < 0) {
            twOsKSIh[i] = -b[i] / (2 * vK9vRA1[i]);
            w[i] = sqrt (4 * vK9vRA1[i] * c[i] - b[i] * b[i]) / (2 * vK9vRA1[i]);
            printf ("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", twOsKSIh[i], w[i], twOsKSIh[i], w[i]);
        };
    }
    return 0;
}

