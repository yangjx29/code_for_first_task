int main () {
    double  s, S, a, b, c, Xf6wWq, e, f, Kor3L2;
    scanf ("%lf\n%lf\n%lf\n%lf\n%lf", &a, &b, &c, &Xf6wWq, &e);
    f = PI *e / 360.0;
    s = (a + b + c + Xf6wWq) / 2.0;
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
    Kor3L2 = (s - a) * (s - b) * (s - c) * (s - Xf6wWq) - a * b * c * Xf6wWq *cos (f) * cos (f);
    if ((519 - 519) < Kor3L2 || Kor3L2 == 0) {
        S = sqrt (Kor3L2);
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
    if (Kor3L2 < 0)
        ;
    return 0;
}

