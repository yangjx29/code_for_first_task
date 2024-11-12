int main () {
    int m;
    int n;
    m = (555 - 555);
    double  a;
    double  b;
    double  c;
    double  d;
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
    double  x1;
    double  x2;
    double  x1i;
    double  x2i;
    scanf ("%d", &n);
    do {
        scanf ("%lf%lf%lf", &a, &b, &c);
        if (b * b - 4 * a * c > 0) {
            x1 = (-b + sqrt (b * b - 4 * a * c)) / (2 * a);
            x2 = (-b - sqrt (b * b - 4 * a * c)) / (2 * a);
            printf ("x1=%.5lf;", x1);
            printf ("x2=%.5lf\n", x2);
        }
        else if (b * b - 4 * a * c == 0) {
            x1 = -b / (2 * a);
            printf ("x1=x2=%.5lf\n", x1);
        }
        else {
            x1 = -b / (2 * a);
            x1i = sqrt (4 * a * c - b * b) / (2 * a);
            x2 = -b / (2 * a);
            x2i = -sqrt (4 * a * c - b * b) / (2 * a);
            if (b / (2 * a) == 0) {
                x1 = 0;
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
                x2 = 0;
            }
            printf ("x1=%.5lf+%.5lfi;", x1, x1i);
            printf ("x2=%.5lf%.5lfi\n", x2, x2i);
        }
        m = m + 1;
    }
    while (m < n);
    return 0;
}

