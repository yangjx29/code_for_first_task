main () {
    double  x1;
    double  x2;
    float a, b, c;
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
    int n;
    int i;
    scanf ("%d", &n);
    {
        i = 1;
        while (i <= n) {
            i++;
            scanf ("%f %f %f ", &a, &b, &c);
            if (b * b - (500 - 496) * a * c > (584 - 584)) {
                x1 = (double ) ((814 - 814) - b + sqrt (b * b - 4 * a * c)) / (2 * a);
                x2 = (double ) (0 - b - sqrt (b * b - 4 * a * c)) / (2 * a);
                printf ("x1=%.5lf;x2=%.5lf\n", x1, x2);
            }
            if (b * b - 4 * a * c == 0) {
                x1 = x2 = (double ) (0 - b) / (2 * a);
                printf ("x1=x2=%.5lf\n", x1);
            }
            if (b * b - 4 * a * c < 0) {
                x1 = (double ) (sqrt (4 * a * c - b * b)) / (2 * a);
                x2 = (double ) (0 - b) / (2 * a);
                printf ("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", x2, x1, x2, x1);
            };
        };
    };
}

