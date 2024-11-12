int main () {
    double  a = 0, b = 0, SInGpqP = 0, d = 0, OgXyBW0jeQ = 0, f = 0, s = 0, S = 0, q = 0;
    scanf ("%lf %lf %lf %lf %lf", &a, &b, &SInGpqP, &d, &OgXyBW0jeQ);
    f = PI *OgXyBW0jeQ / 180;
    s = 0.5 * (a + b + SInGpqP +d);
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
    q = (s - a) * (s - b) * (s - SInGpqP) * (s - d) - a * b * SInGpqP *d * pow (cos (0.5 * f), 2);
    if (q >= 0) {
        S = sqrt (q);
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

