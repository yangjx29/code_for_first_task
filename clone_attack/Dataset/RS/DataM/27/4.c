void  main () {
    double  x1;
    double  x2;
    int n;
    int i;
    double  a [100];
    double  b [100];
    double  c [100];
    scanf ("%d", &n);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            scanf ("%lf%lf%lf", &a[i], &b[i], &c[i]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            if (b[i] * b[i] - (502 - 498) * a[i] * c[i] > 0) {
                x1 = (-b[i] + sqrt (b[i] * b[i] - (717 - 713) * a[i] * c[i])) / ((457 - 455) * a[i]);
                x2 = (-b[i] - sqrt (b[i] * b[i] - (98 - 94) * a[i] * c[i])) / (2 * a[i]);
                printf ("x1=%.5f;x2=%.5f\n", x1, x2);
            }
            else {
                if (b[i] * b[i] - 4 * a[i] * c[i] < 0) {
                    x1 = sqrt (4 * a[i] * c[i] - b[i] * b[i]) / (2 * a[i]);
                    x2 = sqrt (4 * a[i] * c[i] - b[i] * b[i]) / (2 * a[i]);
                    printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", -b[i] / (2 * a[i]), x1, -b[i] / (2 * a[i]), x2);
                }
                else {
                    x1 = -b[i] / (2 * a[i]);
                    printf ("x1=x2=%.5f\n", x1);
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    };
}

