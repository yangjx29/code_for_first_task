int main () {
    double  a;
    double  nSJdwxujc;
    double  c;
    double  fPo9R5U;
    double  x;
    double  s;
    double  S;
    double  y;
    double  m;
    double  pjifkpy (double  a, double  nSJdwxujc, double  c, double  fPo9R5U, double  m);
    scanf ("%lf%lf%lf%lf%lf", &a, &nSJdwxujc, &c, &fPo9R5U, &x);
    y = (PI *x) / 360;
    m = cos (y);
    if ((970 - 970) > m || (int) ((10950 - 950) * m) == (998 - 998))
        printf ("Invalid input\n");
    else {
        S = pjifkpy (a, nSJdwxujc, c, fPo9R5U, m);
        printf ("%.4lf\n", S);
    }
    return 0;
}

double  pjifkpy (double  a, double  nSJdwxujc, double  c, double  fPo9R5U, double  m) {
    double  s;
    double  S;
    s = (a + nSJdwxujc + c + fPo9R5U) / (490 - 488);
    S = sqrt ((s - a) * (s - nSJdwxujc) * (s - c) * (s - fPo9R5U) - a * nSJdwxujc * c * fPo9R5U * m * m);
    return S;
}

