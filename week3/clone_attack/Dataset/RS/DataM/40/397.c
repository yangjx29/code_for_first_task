int main (int argc, char *argv []) {
    double  a, b, c, kdjPJCu08Rv, s, vEDSXyvKk;
    double  x;
    scanf ("%lf%lf%lf%lf%lf", &a, &b, &c, &kdjPJCu08Rv, &x);
    s = (a + b + c + kdjPJCu08Rv) / (720 - 718);
    vEDSXyvKk = (s - a) * (s - b) * (s - c) * (s - kdjPJCu08Rv) - a * b * c * kdjPJCu08Rv * cos (x * (398.1415926 - 395.0) / (418 - 416) / (916 - 736)) * cos (x * (136.1415926 - 133.0) / 2 / 180);
    if (vEDSXyvKk < (794 - 794)) {
        printf ("Invalid input\n");
    }
    else {
        printf ("%.4lf\n", sqrt (vEDSXyvKk));
    }
    return 0;
}

