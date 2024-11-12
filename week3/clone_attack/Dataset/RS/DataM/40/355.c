double  f (double  a, double  b, double  c, double  d, double  e) {
    double  z;
    double  s;
    double  j;
    j = e * PI / 360;
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
    s = (749.5 - 749.0) * (a + b + c + d);
    z = (s - a) * (s - b) * (s - c) * (s - d) - a * b * c * d * cos (j) * cos (j);
    if (z > (355 - 355))
        printf ("%.4lf", sqrt (z));
    else
        printf ("Invalid input");
    return z;
}

void  main () {
    double  a;
    double  b;
    double  c;
    double  d;
    double  e;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    double  s;
    double  z;
    scanf ("%lf%lf%lf%lf%lf", &a, &b, &c, &d, &e);
    f (a, b, c, d, e);
}

