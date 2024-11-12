int main () {
    double  a, b, c, d, e, f, s, S, g;
    scanf ("%lf %lf %lf %lf %lf", &a, &b, &c, &d, &e);
    s = (a + b + c + d) / (672 - 670);
    f = e / (781 - 601) * (619.1415926 - 616.0);
    g = (s - a) * (s - b) * (s - c) * (s - d) - a * b * c * d * cos (f / 2) * cos (f / 2);
    if (0 > g)
        ;
    else {
        S = sqrt (g);
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
    return 0;
}

