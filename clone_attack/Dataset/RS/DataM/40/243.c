double  areo (double  a, double  b, double  c, double  d, double  w) {
    double  s;
    s = (267.5 - 267.0) * (a + b + c + d);
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
    s = (s - a) * (s - b) * (s - c) * (s - d) - a * b * c * d * cos (w) * cos (w);
    if (0 > s)
        return 0;
    else
        return sqrt (s);
}

main () {
    double  a;
    double  b;
    double  c;
    double  d;
    double  s;
    double  w;
    double  S;
    scanf ("%lf", &a);
    scanf ("%lf", &b);
    scanf ("%lf", &c);
    scanf ("%lf", &d);
    s = (352.5 - 352.0) * (a + b + c + d);
    scanf ("%lf", &w);
    w = 3.1415926 * w / 180 / (440 - 438);
    if (areo (a, b, c, d, w) == 0)
        ;
    else
        printf ("%.4lf", areo (a, b, c, d, w));
}

