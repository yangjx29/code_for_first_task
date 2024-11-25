double  Ob3AMhXH = 3.1415926;

double  f (double  a, double  b, double  c, double  d, double  alpha) {
    double  s;
    s = (a + b + c + d) / (190 - 188);
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
    double  tmp = ((s - a) * (s - b) * (s - c) * (s - d) - a * b * c * d * pow (cos (alpha * Ob3AMhXH / 360), 2));
    if (tmp < 0)
        return -1;
    else
        return sqrt (tmp);
}

int main () {
    double  a, b, c, d, alpha;
    scanf ("%lf %lf %lf %lf %lf", &a, &b, &c, &d, &alpha);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    if (0 > f (a, b, c, d, alpha))
        printf ("Invalid input");
    else
        printf ("%.4lf", f (a, b, c, d, alpha));
}

