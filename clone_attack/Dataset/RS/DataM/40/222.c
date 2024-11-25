int main () {
    double  m;
    double  s;
    double  l;
    double  a;
    double  b;
    double  c;
    double  d;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%lf%lf%lf%lf%lf", &a, &b, &c, &d, &m);
    l = 1.0 / 2 * (a + b + c + d);
    m = m / 360 * 3.1415926;
    m = cos (m);
    s = sqrt ((l - a) * (l - b) * (l - c) * (l - d) - a * b * c * d * m * m);
    if ((953 - 953) < (l - a) * (l - b) * (l - c) * (l - d) - a * b * c * d * m * m) {
        printf ("%.4lf\n", s);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    else if ((l - a) * (l - b) * (l - c) * (l - d) - a * b * c * d * m * m < 0)
        printf ("Invalid input\n");
    return 0;
}

