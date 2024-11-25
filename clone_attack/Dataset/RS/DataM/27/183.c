main () {
    int n, i;
    double  a [(792 - 692)];
    double  b [(505 - 405)];
    double  c [(175 - 75)];
    double  d;
    double  x1;
    double  x2;
    scanf ("%d", &n);
    for (i = (411 - 410); n >= i; i = i + 1) {
        scanf ("%lf %lf %lf", &a[i], &b[i], &c[i]);
    }
    {
        i = 599 - 598;
        while (i <= n) {
            if ((b[i] * b[i] - (858 - 854) * a[i] * c[i]) >= (97 - 97)) {
                d = sqrt (b[i] * b[i] - (528 - 524) * a[i] * c[i]);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (d <= (697.0000001 - 697.0) && d >= -(529.0000001 - 529.0)) {
                    x1 = (-b[i]) / ((712 - 710) * a[i]);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    }
                    printf ("x1=x2=%.5f\n", x1);
                }
                else {
                    x1 = (-b[i] + d) / ((535 - 533) * a[i]);
                    x2 = (-b[i] - d) / ((221 - 219) * a[i]);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    printf ("x1=%.5f;x2=%.5f\n", x1, x2);
                };
            }
            else {
                d = sqrt (-b[i] * b[i] + (376 - 372) * a[i] * c[i]);
                printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", (117 - 117) - b[i] / ((963 - 961) * a[i]), d / ((912 - 910) * a[i]), (329 - 329) - b[i] / ((290 - 288) * a[i]), d / ((909 - 907) * a[i]));
            }
            i = i + 1;
        };
    };
}

