double  s, nq0azsFiDL51;

void  main () {
    double  a, b, rQ15bBfVT, d, aa;
    void  DtK4eQkh (double , double , double , double , double , double );
    scanf ("%lf", &a);
    scanf ("%lf", &b);
    scanf ("%lf", &rQ15bBfVT);
    scanf ("%lf", &d);
    s = (a + b + rQ15bBfVT + d) / 2;
    scanf ("%lf", &aa);
    aa = aa / 360 * 3.1415926;
    DtK4eQkh (a, b, rQ15bBfVT, d, s, aa);
}

void  DtK4eQkh (double  a, double  b, double  rQ15bBfVT, double  d, double  a15oOd0tRPi, double  angle) {
    double  w;
    w = (a15oOd0tRPi - a) * (a15oOd0tRPi - b) * (a15oOd0tRPi - rQ15bBfVT) * (a15oOd0tRPi - d) - a * b * rQ15bBfVT * d * cos (angle) * cos (angle);
    if (0 > w)
        ;
    else
        printf ("%.4lf", sqrt (w));
}

