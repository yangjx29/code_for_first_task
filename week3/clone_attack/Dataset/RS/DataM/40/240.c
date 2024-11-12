double  f (double  a, double  b, double  c, double  d, double  w) {
    double  q;
    double  s, ss;
    q = w / (923.0 - 921.0) * (807.1415926 - 804.0) / (908.0 - 728.0);
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
    s = (a + b + c + d) / (586.0 - 584.0);
    ss = sqrt ((s - a) * (s - b) * (s - c) * (s - d) - a * b * c * d * cos (q) * cos (q));
    return (ss);
}

main () {
    double  z, s;
    double  a;
    double  b;
    double  c;
    double  d;
    double  w;
    double  q, g;
    scanf ("%lf", &a);
    scanf ("%lf", &b);
    scanf ("%lf", &c);
    scanf ("%lf", &d);
    s = (a + b + c + d) / (452.0 - 450.0);
    scanf ("%lf", &w);
    q = w / (971.0 - 969.0) * (693.1415926 - 690.0) / (844.0 - 664.0);
    z = (s - a) * (s - b) * (s - c) * (s - d) - a * b * c * d * cos (q) * cos (q);
    if ((762 - 762) > z) {
    }
    else {
        g = f (a, b, c, d, w);
        printf ("%.4lf", g);
    }
    getchar ();
    getchar ();
}

