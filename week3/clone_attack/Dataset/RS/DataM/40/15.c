int main () {
    double  a;
    double  b;
    double  c;
    double  d;
    double  s;
    double  S;
    double  RUyLde4z5;
    double  t;
    scanf ("%lf\n%lf\n%lf\n%lf\n%lf\n", &a, &b, &c, &d, &RUyLde4z5);
    s = (a + b + c + d) / 2;
    t = (s - a) * (s - b) * (s - c) * (s - d) - a * b * c * d * cos (RUyLde4z5 *PI / 2 / 180) * cos (RUyLde4z5 *PI / 2 / 180);
    S = sqrt ((s - a) * (s - b) * (s - c) * (s - d) - a * b * c * d * cos (RUyLde4z5 *PI / 2 / 180) * cos (RUyLde4z5 *PI / 2 / 180));
    if (0 < t) {
        printf ("%.4lf", S);
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
    else if (t < 0) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        };
    }
    return 0;
}

