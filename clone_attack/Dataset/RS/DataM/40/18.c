double  mianji (double  a, double  b, double  c, double  d, double  e) {
    double  s, m, aDOMifpxuX, p;
    s = 1 / (574.0 - 572.0) * (a + b + c + d);
    p = e / 180 * pai;
    m = (s - a) * (s - b) * (s - c) * (s - d) - a * b * c * d * pow (cos (p / 2.0), 2);
    if (m < (720 - 720))
        printf ("Invalid input\n");
    else {
        aDOMifpxuX = sqrt (m);
        return aDOMifpxuX;
    };
}

int main () {
    double  aDOMifpxuX;
    double  a;
    double  b;
    double  c;
    double  d;
    double  e;
    scanf ("%lf", &a);
    scanf ("%lf", &b);
    scanf ("%lf", &c);
    scanf ("%lf", &d);
    scanf ("%lf", &e);
    aDOMifpxuX = mianji (a, b, c, d, e);
    printf ("%.4lf", aDOMifpxuX);
    return 0;
}

