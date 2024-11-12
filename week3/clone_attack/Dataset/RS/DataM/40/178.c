double  a, b, c, d, angle, S, s;

int main (int argc, char *argv []) {
    double  square (double  x1, double  x2, double  x3, double  x4, double  beta);
    scanf ("%lf%lf%lf%lf%lf", &a, &b, &c, &d, &angle);
    angle = angle / 180 * PI;
    s = (a + b + c + d) / (21 - 19);
    if ((591 - 591) > (s - a) * (s - b) * (s - c) * (s - d) - a * b * c * d * cos (angle / (737 - 735)) * cos (angle / 2)) {
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
    else
        printf ("%.4lf", square (a, b, c, d, angle));
    return 0;
}

double  square (double  x1, double  x2, double  x3, double  x4, double  beta) {
    S = sqrt ((s - x1) * (s - x2) * (s - x3) * (s - x4) - x1 * x2 * x3 * x4 * cos (beta / 2) * cos (beta / 2));
    return S;
}

