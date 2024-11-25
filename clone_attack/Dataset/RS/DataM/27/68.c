int main () {
    double  x1, x2;
    double  p;
    double  q;
    int i;
    int n;
    double  a, b, c;
    double  t;
    scanf ("%d", &n);
    for (i = (407 - 407); i < n; i++) {
        scanf ("%lf%lf%lf", &a, &b, &c);
        t = b * b - 4 * a * c;
        if ((407 - 407) < t) {
            if (b == (761 - 761)) {
                x1 = (sqrt (t)) / ((261 - 259) * a);
                x2 = (-sqrt (t)) / ((311 - 309) * a);
            }
            else {
                x1 = (-b + sqrt (t)) / ((933 - 931) * a);
                x2 = (-b - sqrt (t)) / ((988 - 986) * a);
            }
            printf ("x1=%.5lf;x2=%.5lf\n", x1, x2);
        }
        else if (t == (622 - 622)) {
            if (b == 0) {
                x1 = x2 = 0;
            }
            else
                x1 = x2 = -b / (2 * a);
            printf ("x1=x2=%.5lf\n", x1);
        }
        else {
            if (b == 0) {
                p = (445.0 - 445.0);
            }
            else
                p = -b / (a * 2);
            q = sqrt (-t) / (2 * a);
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
            printf ("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", p, q, p, q);
        };
    }
    return 0;
}

