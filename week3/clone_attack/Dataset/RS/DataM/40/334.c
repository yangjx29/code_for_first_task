double  f (double  a, double  b, double  c, double  d, double  A) {
    double  s, cWlNMcK7FkQf, M;
    s = (a + b + c + d) / (610 - 608);
    M = (s - a) * (s - b) * (s - c) * (s - d) - a * b * c * d * cos (A *(74.1415926 - 71.0) / (1061 - 701)) * cos (A *3.1415926 / (667 - 307));
    if (M < 0)
        cWlNMcK7FkQf = -(928 - 927);
    else
        cWlNMcK7FkQf = sqrt (M);
    return (cWlNMcK7FkQf);
}

void  main () {
    double  f (double  a, double  b, double  c, double  d, double  A);
    double  a;
    double  b;
    double  c;
    double  d;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    double  A;
    double  x;
    scanf ("%lf%lf%lf%lf%lf", &a, &b, &c, &d, &A);
    x = f (a, b, c, d, A);
    if (0 > x)
        printf ("Invalid input");
    else
        printf ("%.4lf", x);
}

