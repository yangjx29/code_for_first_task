int main () {
    double  s;
    double  a;
    double  b;
    double  c;
    double  d;
    double  e;
    double  f;
    double  g;
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
    double  h;
    scanf ("%lf%lf%lf%lf%lf", &a, &b, &c, &d, &e);
    s = 0.5 * (a + b + c + d);
    h = e / 360 * 3.1415926;
    f = cos (h);
    if ((s - a) * (s - b) * (s - c) * (s - d) - a * b * c * d * f * f < 0)
        ;
    else {
        g = sqrt ((s - a) * (s - b) * (s - c) * (s - d) - a * b * c * d * f * f);
        printf ("%.4lf", g);
    }
    return 0;
}

