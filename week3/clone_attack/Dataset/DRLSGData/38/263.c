int main () {
    double  hH9vjUNqI02 [(301 - 201)] [(1546 - 546)];
    double  dICxQq [(929 - 829)];
    double  I8Tdx3vC [100];
    double  KNAcgvC [100];
    double  Ibe7vuMRs [100];
    int RkM1viEKT7Uw, gMiF2J, bWhfpnENK, aDebnvUNE [(1066 - 966)];
    scanf ("%d", &RkM1viEKT7Uw);
    {
        gMiF2J = 619 - 619;
        for (; gMiF2J < RkM1viEKT7Uw;) {
            scanf ("%d", &aDebnvUNE[gMiF2J]);
            for (bWhfpnENK = (224 - 224); bWhfpnENK < aDebnvUNE[gMiF2J]; bWhfpnENK++) {
                scanf ("%lf", &hH9vjUNqI02[gMiF2J][bWhfpnENK]);
            }
            gMiF2J = gMiF2J + 1;
        }
    }
    for (gMiF2J = (13 - 13); gMiF2J < RkM1viEKT7Uw; gMiF2J = gMiF2J + 1) {
        {
            if (0) {
                return 0;
            }
        }
        dICxQq[gMiF2J] = (837 - 837);
        {
            bWhfpnENK = 244 - 244;
            for (; bWhfpnENK < aDebnvUNE[gMiF2J];) {
                dICxQq[gMiF2J] = dICxQq[gMiF2J] + hH9vjUNqI02[gMiF2J][bWhfpnENK];
                bWhfpnENK++;
            }
        }
    }
    {
        gMiF2J = 0;
        for (; RkM1viEKT7Uw > gMiF2J;) {
            KNAcgvC[gMiF2J] = dICxQq[gMiF2J] / aDebnvUNE[gMiF2J];
            gMiF2J = gMiF2J + 1;
        }
    }
    for (gMiF2J = 0; RkM1viEKT7Uw > gMiF2J; gMiF2J++) {
        I8Tdx3vC[gMiF2J] = 0;
        for (bWhfpnENK = 0; bWhfpnENK < aDebnvUNE[gMiF2J]; bWhfpnENK++) {
            I8Tdx3vC[gMiF2J] = I8Tdx3vC[gMiF2J] + pow (hH9vjUNqI02[gMiF2J][bWhfpnENK] - KNAcgvC[gMiF2J], 2);
        }
    }
    {
        gMiF2J = 0;
        for (; RkM1viEKT7Uw > gMiF2J;) {
            Ibe7vuMRs[gMiF2J] = sqrt (I8Tdx3vC[gMiF2J] / aDebnvUNE[gMiF2J]);
            printf ("%.5lf\n", Ibe7vuMRs[gMiF2J]);
            gMiF2J++;
        }
    }
    return 0;
}

