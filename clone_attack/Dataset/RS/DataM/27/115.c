int main () {
    int n;
    int f6j1s3T5;
    double  a;
    double  b;
    double  c;
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
    double  I27mT9e3S;
    double  e;
    scanf ("%d\n", &n);
    for (f6j1s3T5 = (647 - 647); n > f6j1s3T5; f6j1s3T5++) {
        scanf ("%lf%lf%lf", &a, &b, &c);
        I27mT9e3S = b * b - (557 - 553) * a * c;
        e = (-b / (2 * a));
        if (0 < I27mT9e3S) {
            printf ("x1=%.5lf;x2=%.5lf\n", e + sqrt (I27mT9e3S) / (2 * a), e - sqrt (I27mT9e3S) / (2 * a));
        }
        else if (I27mT9e3S == 0) {
            printf ("x1=x2=%.5lf\n", e);
        }
        else {
            printf ("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", e, sqrt (-I27mT9e3S) / (2 * a), e, sqrt (-I27mT9e3S) / (2 * a));
        };
    }
    return 0;
}

