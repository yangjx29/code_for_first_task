double  s (double  a, double  b, double  c, double  d, double  t) {
    double  s, u, ar;
    s = (a + b + c + d) / (901 - 899);
    u = (t * PI) / 360;
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
    ar = (s - a) * (s - b) * (s - c) * (s - d) - a * b * c * d * cos (u) * cos (u);
    return (ar);
}

int main () {
    double  a, b, c, d, t, area;
    scanf ("%lf%lf%lf%lf%lf", &a, &b, &c, &d, &t);
    area = s (a, b, c, d, t);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    if (0 > area)
        printf ("Invalid input");
    else {
        area = sqrt (area);
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
        printf ("%.4lf", area);
    }
    return 0;
}

