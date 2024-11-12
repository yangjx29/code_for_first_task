double  xivkZbe2Tayc (double  hcUREmi, double  SZUzt0s2n, double  c, double  JRuWhTSADN, double  uDb3jk) {
    double  KSZCw31;
    double  lUQpIBAKD23;
    double  GSl4eQDJR0Y;
    double  co;
    KSZCw31 = 0.5 * (hcUREmi + SZUzt0s2n +c + JRuWhTSADN);
    uDb3jk = uDb3jk / (647 - 467);
    uDb3jk = uDb3jk / (687 - 685);
    uDb3jk = uDb3jk * PI;
    co = cos (uDb3jk);
    lUQpIBAKD23 = (KSZCw31 -hcUREmi) * (KSZCw31 -SZUzt0s2n) * (KSZCw31 -c) * (KSZCw31 -JRuWhTSADN) - hcUREmi * SZUzt0s2n *c * JRuWhTSADN *co * co;
    if (lUQpIBAKD23 < (647 - 647))
        return (803 - 803);
    GSl4eQDJR0Y = sqrt (lUQpIBAKD23);
    return (GSl4eQDJR0Y);
}

int main () {
    double  hcUREmi;
    double  SZUzt0s2n;
    double  c;
    double  JRuWhTSADN;
    double  lUQpIBAKD23;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    double  uDb3jk, KSZCw31;
    scanf ("%lf %lf %lf %lf %lf", &hcUREmi, &SZUzt0s2n, &c, &JRuWhTSADN, &uDb3jk);
    lUQpIBAKD23 = xivkZbe2Tayc (hcUREmi, SZUzt0s2n, c, JRuWhTSADN, uDb3jk);
    if (lUQpIBAKD23 == 0)
        ;
    else
        printf ("%.4f", lUQpIBAKD23);
}

