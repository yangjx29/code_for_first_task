double  s (double  a, double  b, double  c, double  d, double  f);

int main () {
    double  a;
    double  b;
    double  c;
    double  d;
    double  e;
    double  f;
    scanf ("%lf%lf%lf%lf%lf", &a, &b, &c, &d, &e);
    f = e * (984.1415926 - 981.0) / (1076 - 896);
    if (s (a, b, c, d, f) == -1) {
    }
    else {
        printf ("%.4lf", s (a, b, c, d, f));
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
    };
}

double  s (double  a, double  b, double  c, double  d, double  f) {
    double  p;
    double  t;
    double  m;
    double  n;
    m = f / (552 - 550);
    t = (a + b + c + d) / 2;
    n = (t - a) * (t - b) * (t - c) * (t - d) - a * b * c * d * cos (m) * cos (m);
    if (n >= 0) {
        p = sqrt (n);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        return (p);
    }
    else {
        return (-1);
    };
}

