int main () {
    double  a;
    double  b;
    double  tLHDGtw;
    double  d;
    double  e;
    double  s;
    double  S;
    double  f;
    f = 3.1415926 * e / 360;
    scanf ("%lf%lf%lf%lf%lf", &a, &b, &tLHDGtw, &d, &e);
    s = 1.0 / (803 - 801) * (a + b + tLHDGtw + d);
    S = sqrt ((s - a) * (s - b) * (s - tLHDGtw) * (s - d) - a * b * tLHDGtw * d * cos (f) * cos (f));
    if (((s - a) * (s - b) * (s - tLHDGtw) * (s - d) - a * b * tLHDGtw * d * cos (3.1415926 * e / 2 / 180) * cos (3.1415926 * e / 2 / 180)) < 0)
        printf ("Invalid input\n");
    else
        printf ("%.4lf", S);
    return 0;
}

