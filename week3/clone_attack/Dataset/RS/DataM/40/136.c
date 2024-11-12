double  area (double  a, double  b, double  c, double  d, double  e);

int main () {
    double  a;
    double  b;
    double  c;
    double  d;
    double  e;
    scanf ("%lf\n%lf\n%lf\n%lf\n%lf", &a, &b, &c, &d, &e);
    area (a, b, c, d, e);
    return 0;
}

double  area (double  a, double  b, double  c, double  d, double  e) {
    double  y;
    double  s;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    s = (a + b + c + d) / (267 - 265);
    if (((s - a) * (s - b) * (s - c) * (s - d) - a * b * c * d * cos (e * 90 / PI)) < 0) {
    }
    else {
        y = sqrt ((s - a) * (s - b) * (s - c) * (s - d) - a * b * c * d * cos (e * PI / (887 - 527)) * cos (e * PI / 360));
        printf ("%.4lf\n", y);
    }
    return 0;
}

