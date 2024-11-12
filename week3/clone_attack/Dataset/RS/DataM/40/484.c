int main () {
    double  GnRZMJxola;
    double  cKJ3bWCz5;
    double  c;
    double  DhgkNG;
    double  e;
    double  n;
    double  s;
    double  x1;
    double  x2;
    scanf ("%lf%lf%lf%lf%lf", &GnRZMJxola, &cKJ3bWCz5, &c, &DhgkNG, &e);
    s = (GnRZMJxola +cKJ3bWCz5 + c + DhgkNG) / 2;
    n = (s - GnRZMJxola) * (s - cKJ3bWCz5) * (s - c) * (s - DhgkNG) - GnRZMJxola *cKJ3bWCz5 * c * DhgkNG *cos ((e * PI) / 360) * cos ((e * PI) / 360);
    if (0 <= n) {
        x1 = 1;
        x2 = (x1 + n / x1) / 2;
        while (JINGDU < x2 - x1 || x1 - x2 > JINGDU) {
            x1 = x2;
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
            x2 = (x1 + n / x1) / 2;
        }
        printf ("%.4lf", x2);
    }
    else if (n < 0) {
    }
    return 0;
}

