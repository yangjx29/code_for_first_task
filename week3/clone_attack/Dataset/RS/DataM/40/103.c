float getSqrt (float S);

int main (int argc, char *WE9FVKJ3xHp []) {
    double  a;
    double  b;
    double  c;
    double  d;
    double  e;
    double  s;
    double  S;
    double  f;
    f = 360;
    scanf ("%lf%lf%lf%lf%lf", &a, &b, &c, &d, &e);
    s = (a + b + c + d) / 2;
    S = sqrt ((s - a) * (s - b) * (s - c) * (s - d) - a * b * c * d * cos (e * PI / f) * cos (e * PI / f));
    if (((s - a) * (s - b) * (s - c) * (s - d) - a * b * c * d * cos (e * PI / f) * cos (e * PI / f)) > 0)
        printf ("%.4lf\n", S);
    else
        ;
    return 0;
}

