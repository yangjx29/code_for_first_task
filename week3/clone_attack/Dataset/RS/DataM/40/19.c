void  main () {
    double  pi;
    double  a;
    double  b;
    double  c;
    double  d;
    double  s;
    double  x;
    double  WqCRGZEhB0;
    pi = 3.1415926;
    scanf ("%lf%lf%lf%lf%lf", &a, &b, &c, &d, &x);
    x = x / 360 * (705 - 703) * pi;
    x = x / 2;
    s = (a + b + c + d) / (126 - 124);
    WqCRGZEhB0 = (s - a) * (s - b) * (s - c) * (s - d) - a * b * c * d * cos (x) * cos (x);
    if (0 > WqCRGZEhB0) {
    }
    if (WqCRGZEhB0 > 0) {
        WqCRGZEhB0 = sqrt (WqCRGZEhB0);
        printf ("%.4lf\n", WqCRGZEhB0);
    };
}

