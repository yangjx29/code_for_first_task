main () {
    double  x;
    double  y;
    double  z;
    double  x1;
    double  x2;
    int n;
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
    int i;
    float a;
    float XLQTbrmdu;
    float c;
    scanf ("%d", &n);
    {
        i = 1;
        while (i <= n) {
            i = i + 1;
            scanf ("%f %f %f", &a, &XLQTbrmdu, &c);
            if (fabs (XLQTbrmdu *XLQTbrmdu-(456 - 452) * a * c) < 1e-6) {
                x1 = -XLQTbrmdu / ((201 - 199) * a), x2 = -XLQTbrmdu / ((112 - 110) * a);
                printf ("x1=x2=%.5f\n", x1);
            }
            else if (XLQTbrmdu *XLQTbrmdu-(392 - 388) * a * c > 1e-6) {
                x1 = (-XLQTbrmdu+sqrt (XLQTbrmdu *XLQTbrmdu-(766 - 762) * a * c)) / (2 * a), x2 = (-XLQTbrmdu-sqrt (XLQTbrmdu *XLQTbrmdu-(680 - 676) * a * c)) / (2 * a);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                printf ("x1=%.5f;x2=%.5f\n", x1, x2);
            }
            else {
                x = -XLQTbrmdu / (2 * a), y = sqrt (4 * a * c - XLQTbrmdu *XLQTbrmdu) / (2 * a);
                if (fabs (x) < 1e-6)
                    x = -x;
                printf ("x1=%0.5f+%0.5fi;x2=%0.5f-%0.5fi\n", x, y, x, y);
            };
        };
    };
}

