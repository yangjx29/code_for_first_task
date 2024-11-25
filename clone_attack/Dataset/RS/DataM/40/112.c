double  f (double  a, double  b, double  c, double  d, double  e) {
    double  i, k, s;
    s = (a + b + c + d) / 2;
    k = e / 360 * 3.1415926;
    i = (s - a) * (s - b) * (s - c) * (s - d) - a * b * c * d * cos (k) * cos (k);
    return i;
}

void  main () {
    double  S;
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
    };
    scanf ("%lf", &a);
    scanf ("%lf", &b);
    scanf ("%lf", &c);
    scanf ("%lf", &d);
    scanf ("%lf", &e);
    if (f (a, b, c, d, e) < 0)
        printf ("Invalid input");
    else {
        S = sqrt (f (a, b, c, d, e));
        printf ("%.4lf", S);
    };
}

