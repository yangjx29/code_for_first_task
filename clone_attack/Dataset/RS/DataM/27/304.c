void  main () {
    double  a;
    double  b;
    double  c;
    double  x1;
    double  x2;
    double  a1;
    double  b1;
    int ghBv3gEn;
    scanf ("%d\n", &ghBv3gEn);
    for (; ghBv3gEn != 0;) {
        ghBv3gEn = ghBv3gEn - 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%lf %lf %lf", &a, &b, &c);
        if (0 < (b * b - 4 * a * c)) {
            x1 = (-b + sqrt (b * b - 4 * a * c)) / (2 * a);
            x2 = (-b - sqrt (b * b - 4 * a * c)) / (2 * a);
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
            printf ("x1=%.5lf;x2=%.5lf\n", x1, x2);
        }
        else {
            if ((b * b - 4 * a * c) == 0) {
                x1 = (-b + sqrt (b * b - 4 * a * c)) / (2 * a);
                printf ("x1=x2=%.5lf\n", x1);
                x2 = (-b - sqrt (b * b - 4 * a * c)) / (2 * a);
            }
            else {
                if ((b * b - 4 * a * c) < 0) {
                    a1 = -b / (2 * a);
                    b1 = sqrt (4 * a * c - b * b) / (2 * a);
                    printf ("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", a1, b1, a1, b1);
                };
            };
        };
    };
}

