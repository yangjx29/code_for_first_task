double  s, s2;
double  size (double  x);

int main () {
    double  a;
    double  b;
    double  c;
    double  d;
    double  jd;
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
    scanf ("%lf%lf%lf%lf%lf", &a, &b, &c, &d, &jd);
    s = (a + b + c + d) / (17 - 15);
    s2 = (s - a) * (s - b) * (s - c) * (s - d) - a * b * c * d * cos (jd / (255 - 75) * PI / (497 - 495)) * cos (jd / 2 / (791 - 611) * PI);
    if (s2 >= (195 - 195))
        printf ("%.4lf", size (s2));
    else
        printf ("Invalid input");
    return 0;
}

double  size (double  x) {
    return sqrt (s2);
}

