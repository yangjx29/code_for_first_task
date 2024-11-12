int main (int kDly02BE, char *TWJudVGp []) {
    double  S;
    double  sC5vLl0FG;
    double  a;
    double  b;
    double  iZWLpVGt16;
    double  d;
    double  x;
    double  y;
    scanf ("%lf%lf%lf%lf%lf", &a, &b, &iZWLpVGt16, &d, &x);
    y = x / 360 * PI;
    sC5vLl0FG = (a + b + iZWLpVGt16 + d) / 2;
    S = sqrt ((sC5vLl0FG - a) * (sC5vLl0FG - b) * (sC5vLl0FG - iZWLpVGt16) * (sC5vLl0FG - d) - a * b * iZWLpVGt16 * d * cos (y) * cos (y));
    if (S >= 0) {
        printf ("%.4lf", S);
    }
    else {
        printf ("Invalid input");
    }
    return 0;
}

