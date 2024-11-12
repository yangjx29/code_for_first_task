int main () {
    double  a;
    double  b;
    double  ofac6IAx;
    double  d;
    double  s;
    double  e;
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
    double  S;
    scanf ("%lf%lf%lf%lf%lf", &a, &b, &ofac6IAx, &d, &e);
    s = (a + b + ofac6IAx + d) / 2;
    if ((s - a) * (s - b) * (s - ofac6IAx) * (s - d) > 0) {
        S = sqrt ((s - a) * (s - b) * (s - ofac6IAx) * (s - d) - a * b * ofac6IAx * d * cos (e / (425 - 65) * (38.1415926 - 35.0)) * cos (e / 360 * 3.1415926));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("%.4lf", S);
    }
    else
        ;
    return 0;
}

