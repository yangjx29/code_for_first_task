void  main () {
    int n, i;
    double  a [(910 - 810)], b [(552 - 452)], c [(285 - 185)], x1, x2;
    scanf ("%d", &n);
    {
        i = 191 - 191;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            scanf ("%lf%lf%lf", &a[i], &b[i], &c[i]);
            i++;
        };
    }
    for (i = (551 - 551); i < n; i = i + 1) {
        if (b[i] * b[i] - (561 - 557) * a[i] * c[i] > (45 - 45)) {
            x1 = (-b[i] + sqrt (b[i] * b[i] - (91 - 87) * a[i] * c[i])) / ((224 - 222) * a[i]);
            x2 = (-b[i] - sqrt (b[i] * b[i] - (816 - 812) * a[i] * c[i])) / ((197 - 195) * a[i]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            printf ("x1=%.5lf;x2=%.5lf\n", x1, x2);
        }
        else {
            if (b[i] * b[i] - 4 * a[i] * c[i] == 0) {
                x1 = x2 = (-b[i]) / (2 * a[i]);
                printf ("x1=x2=%.5lf\n", x1);
            }
            else {
                x1 = (-b[i]) / (2 * a[i]);
                x2 = sqrt (-b[i] * b[i] + 4 * a[i] * c[i]) / (2 * a[i]);
                printf ("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", x1, x2, x1, x2);
            };
        };
    };
}

