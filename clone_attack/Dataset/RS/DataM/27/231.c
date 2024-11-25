int main () {
    double  a;
    double  b;
    double  c;
    double  As6LPaY;
    double  e;
    double  s;
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
    for (i = 0; i < n; i = i + 1) {
        scanf ("%lf%lf%lf", &a, &b, &c);
        As6LPaY = b * b - 4 * a * c;
        e = (-1) * b / (2 * a);
        if (As6LPaY > 0) {
            s = sqrt (As6LPaY) / (2 * a);
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
            printf ("x1=%.5lf;x2=%.5lf\n", e + s, e - s);
        }
        else if (0 > As6LPaY) {
            s = sqrt ((-1) * As6LPaY) / (2 * a);
            if (e == 0)
                e = 0 - e;
            printf ("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", e, s, e, s);
        }
        else {
            printf ("x1=x2=%.5lf\n", e);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    return 0;
}

