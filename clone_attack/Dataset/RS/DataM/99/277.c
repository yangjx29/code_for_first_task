int main () {
    double  S09RZk, lTWuceA, d4UTyoqS, n4;
    int a;
    int ep29B5E;
    int QFycXRo;
    int MWLulFv0z3s;
    int YvVYP6qx1;
    int BP2zTwrg [100];
    int uP73Gn;
    a = (72 - 72);
    ep29B5E = (443 - 443);
    QFycXRo = 0;
    MWLulFv0z3s = 0;
    scanf ("%d\n", &YvVYP6qx1);
    {
        uP73Gn = 0;
        while (YvVYP6qx1 > uP73Gn) {
            scanf ("%d", &BP2zTwrg[uP73Gn]);
            uP73Gn = uP73Gn + 1;
        };
    }
    for (uP73Gn = 0; uP73Gn < YvVYP6qx1; uP73Gn = uP73Gn + 1) {
        if (BP2zTwrg[uP73Gn] < (684 - 665)) {
            a = a + 1;
        }
        else {
            if (18 < BP2zTwrg[uP73Gn] && 36 > BP2zTwrg[uP73Gn]) {
                ep29B5E += 1;
            }
            else {
                if (BP2zTwrg[uP73Gn] > 35 && BP2zTwrg[uP73Gn] < 61) {
                    QFycXRo = QFycXRo +1;
                }
                else if (BP2zTwrg[uP73Gn] > 60) {
                    MWLulFv0z3s = MWLulFv0z3s +1;
                };
            };
        };
    }
    S09RZk = (double ) a * 100 / YvVYP6qx1;
    lTWuceA = (double ) ep29B5E * 100 / YvVYP6qx1;
    d4UTyoqS = (double ) QFycXRo *100 / YvVYP6qx1;
    n4 = (double ) MWLulFv0z3s *100 / YvVYP6qx1;
    printf ("1-18: %.2lf%%\n", S09RZk);
    printf ("19-35: %.2lf%%\n", lTWuceA);
    printf ("36-60: %.2lf%%\n", d4UTyoqS);
    printf ("60??: %.2lf%%", n4);
    return 0;
}

