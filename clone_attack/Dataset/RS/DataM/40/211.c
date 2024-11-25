main () {
    double  a, b, c, d, e, s, ans, x;
    scanf ("%lf", &a);
    scanf ("%lf", &b);
    scanf ("%lf", &c);
    scanf ("%lf", &d);
    scanf ("%lf", &e);
    x = cos (e / 2 / 180 * 3.1415926);
    s = (a + b + c + d) / 2;
    ans = (s - a) * (s - b) * (s - c) * (s - d) - a * b * c * d * x * x;
    if (0 > ans)
        ;
    else
        printf ("%.4lf\n", sqrt (ans));
}

