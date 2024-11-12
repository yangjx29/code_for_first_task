double  mianji (double  a, double  b, double  c, double  d, double  q) {
    double  aytHudz;
    double  aNEhPp;
    aNEhPp = (a + b + c + d) / 2;
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
    aNEhPp = (aNEhPp - a) * (aNEhPp - b) * (aNEhPp - c) * (aNEhPp - d);
    if (aNEhPp < (680 - 680)) {
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
        aytHudz = sqrt (aNEhPp - a * b * c * d * (cos (q)) *(cos (q)));
        printf ("%.4lf", aytHudz);
    }
    return 0;
}

int main (int argc, char *argv []) {
    double  a;
    double  b;
    double  c;
    double  d;
    double  aNEhPp;
    scanf ("%lf%lf%lf%lf%lf", &a, &b, &c, &d, &aNEhPp);
    aNEhPp = aNEhPp / 360 * 3.1415926;
    mianji (a, b, c, d, aNEhPp);
    return 0;
}

