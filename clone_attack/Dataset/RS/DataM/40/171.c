int main () {
    double  a;
    double  b;
    double  c;
    double  d;
    double  S;
    double  alpha;
    double  m;
    double  n;
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
    double  YLt5UJvC (double  a, double  b, double  c, double  d);
    double  t (double  a, double  b, double  c, double  d);
    double  r (double  a, double  b, double  c, double  d, double  alpha);
    scanf ("%lf%lf%lf%lf%lf", &a, &b, &c, &d, &alpha);
    m = t (a, b, c, d);
    n = r (a, b, c, d, alpha);
    if (m < 0) {
        printf ("Invalid input");
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
    else {
        S = sqrt (m - n);
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
        }
        printf ("%.4lf", S);
    }
    return 0;
}

double  YLt5UJvC (double  a, double  b, double  c, double  d) {
    double  w;
    double  z;
    w = (a + b + c + d);
    z = w / 2;
    return (z);
}

double  t (double  a, double  b, double  c, double  d) {
    double  x;
    double  h;
    double  i;
    double  j;
    double  k;
    double  l;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    x = YLt5UJvC (a, b, c, d);
    h = x - a;
    i = x - b;
    j = x - c;
    k = x - d;
    l = h * i * j * k;
    return (l);
}

double  r (double  a, double  b, double  c, double  d, double  alpha) {
    double  p;
    double  q;
    double  y;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            float n = 0.0;
            if (n > 10)
                return;
            else
                n = 0;
        }
    }
    p = alpha / 720;
    q = p * 2 * PI;
    y = a * b * c * d * cos (q) * cos (q);
    return (y);
}

