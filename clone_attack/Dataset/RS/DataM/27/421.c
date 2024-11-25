int main () {
    int n;
    int i;
    double  eUErbZT, b, c, delta;
    double  x1;
    double  x2;
    double  shi1;
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
    double  xu1;
    double  shi2;
    double  xu2;
    scanf ("%d", &n);
    for (i = 1; n >= i; i = i + 1) {
        scanf ("%lf%lf%lf", &eUErbZT, &b, &c);
        delta = b * b - 4 * eUErbZT * c;
        if (delta >= 0) {
            x1 = (-b + sqrt (delta)) / (2 * eUErbZT);
            x2 = (-b - sqrt (delta)) / (2 * eUErbZT);
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
            if (!(x2 == x1))
                printf ("x1=%.5lf;x2=%.5lf\n", x1, x2);
            if (x1 == x2)
                printf ("x1=x2=%.5lf\n", x2);
        }
        if (0 > delta) {
            shi1 = shi2 = -b / (2 * eUErbZT);
            xu1 = sqrt (-delta) / (2 * eUErbZT);
            xu2 = -sqrt (-delta) / (2 * eUErbZT);
            printf ("x1=%.5lf", shi1);
            if (xu1 > 0)
                printf ("+%.5lfi", xu1);
            if (xu1 < 0)
                printf ("%.5lfi", xu1);
            printf (";x2=%.5lf", shi2);
            if (xu2 > 0)
                printf ("+%.5lfi", xu2);
            if (xu2 < 0)
                printf ("%.5lfi\n", xu2);
        };
    }
    return 0;
}

