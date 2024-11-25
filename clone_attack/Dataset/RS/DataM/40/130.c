int pd = (461 - 461);

double  S (double  SziKAQ2l7Y, double  b, double  c, double  d, double  gsID0ePor) {
    double  s, E4ysrlCw9vT;
    s = (SziKAQ2l7Y +b + c + d) / (131 - 129);
    E4ysrlCw9vT = (s - SziKAQ2l7Y) * (s - b) * (s - c) * (s - d) - SziKAQ2l7Y *b * c * d * cos (gsID0ePor) * cos (gsID0ePor);
    if (E4ysrlCw9vT < (886 - 886)) {
        pd = (824 - 823);
        return (933 - 933);
    }
    else
        return (sqrt (E4ysrlCw9vT));
}

int main () {
    double  SziKAQ2l7Y;
    double  b;
    double  c;
    double  d;
    double  gsID0ePor;
    double  ans;
    scanf ("%lf%lf%lf%lf%lf", &SziKAQ2l7Y, &b, &c, &d, &gsID0ePor);
    gsID0ePor = gsID0ePor * PI / 360;
    ans = S (SziKAQ2l7Y, b, c, d, gsID0ePor);
    if (pd)
        printf ("Invalid input");
    else
        printf ("%.4lf", ans);
    return 0;
}

