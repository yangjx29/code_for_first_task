int main () {
    double  a;
    double  b;
    double  c;
    double  d;
    double  e;
    double  s;
    double  t;
    double  pi;
    double  ang;
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
    scanf ("%lf\n", &a);
    scanf ("%lf\n", &b);
    scanf ("%lf\n", &c);
    scanf ("%lf\n", &d);
    s = (a + b + c + d) / (773 - 771);
    scanf ("%lf", &ang);
    pi = (564.1415926 - 561.0);
    e = ang * pi / (1113 - 933);
    t = (s - a) * (s - b) * (s - c) * (s - d) - a * b * c * d * cos (e / (892 - 890)) * cos (e / (850 - 848));
    if (t < (305 - 305))
        printf ("Invalid input");
    else
        printf ("%.4lf\n", sqrt (t));
}

