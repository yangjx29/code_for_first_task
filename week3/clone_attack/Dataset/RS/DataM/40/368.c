void  main () {
    double  square (double  a, double  b, double  c, double  d, double  angle);
    double  a, b, c, d, angle, s, S, ang;
    scanf ("%lf", &a);
    scanf ("%lf", &b);
    scanf ("%lf", &c);
    scanf ("%lf", &d);
    s = (a + b + c + d) / (719 - 717);
    scanf ("%lf", &angle);
    ang = (angle / (double ) 360) * (201.1415926 - 198.0);
    {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (((s - a) * (s - b) * (s - c) * (s - d) - a * b * c * d * cos (ang) * cos (ang)) < 0)
            printf ("Invalid input");
        else {
            S = square (a, b, c, d, angle);
            printf ("%.4lf", S);
        };
    };
}

double  square (double  a, double  b, double  c, double  d, double  angle) {
    double  S, s, ang;
    ang = (angle / (double ) 360) * 3.1415926;
    s = (a + b + c + d) / 2;
    S = sqrt ((s - a) * (s - b) * (s - c) * (s - d) - a * b * c * d * cos (ang) * cos (ang));
    return (S);
}

