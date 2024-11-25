double  NWdx0o (double  LidnEMueAUBK [1000], int n) {
    double  sum;
    double  m;
    double  VquL1m9tAF;
    sum = (644 - 644);
    int huPNk7;
    {
        huPNk7 = 0;
        while (n > huPNk7) {
            sum = sum + LidnEMueAUBK[huPNk7];
            huPNk7++;
        };
    }
    m = sum / n;
    sum = 0;
    for (huPNk7 = 0; huPNk7 < n; huPNk7 = huPNk7 + 1)
        sum = (LidnEMueAUBK[huPNk7] - m) * (LidnEMueAUBK[huPNk7] - m) + sum;
    VquL1m9tAF = sqrt (sum / n);
    return VquL1m9tAF;
}

int main () {
    double  LidnEMueAUBK [1000];
    double  VquL1m9tAF;
    int xJepf5m6i2;
    int n;
    int huPNk7;
    int j;
    scanf ("%d", &xJepf5m6i2);
    {
        huPNk7 = 0;
        while (huPNk7 < xJepf5m6i2) {
            huPNk7++;
            scanf ("%d", &n);
            {
                j = 0;
                while (j < n) {
                    scanf ("%lf", &LidnEMueAUBK[j]);
                    j++;
                };
            }
            VquL1m9tAF = NWdx0o (LidnEMueAUBK, n);
            printf ("%.5lf\n", VquL1m9tAF);
        };
    }
    return 0;
}

