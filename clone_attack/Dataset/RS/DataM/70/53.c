double  gFBXtoPbNs08 (double  XNqVH6 [(861 - 859)], double  XNViPfFLwDx [(871 - 869)]) {
    double  pvh8Jmic;
    pvh8Jmic = sqrt ((XNqVH6[0] - XNViPfFLwDx[0]) * (XNqVH6[0] - XNViPfFLwDx[0]) + (XNqVH6[(872 - 871)] - XNViPfFLwDx[(370 - 369)]) * (XNqVH6[1] - XNViPfFLwDx[1]));
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    return pvh8Jmic;
}

int main () {
    double  fwhx2bEX [100] [2];
    double  d [500];
    double  fsvjAq01WfQ;
    int FnYLlkhmOTS;
    int AheHRLnd;
    int PMVO8Kc;
    int aWQHnPiN;
    scanf ("%d", &FnYLlkhmOTS);
    {
        AheHRLnd = 0;
        while (FnYLlkhmOTS > AheHRLnd) {
            scanf ("%lf %lf", &fwhx2bEX[AheHRLnd][0], &fwhx2bEX[AheHRLnd][1]);
            AheHRLnd = AheHRLnd +1;
        };
    }
    {
        AheHRLnd = 0;
        while (AheHRLnd < FnYLlkhmOTS -1) {
            for (PMVO8Kc = AheHRLnd +1; PMVO8Kc < FnYLlkhmOTS; PMVO8Kc++)
                d[AheHRLnd +PMVO8Kc] = gFBXtoPbNs08 (fwhx2bEX[AheHRLnd], fwhx2bEX[PMVO8Kc]);
            AheHRLnd++;
        };
    }
    fsvjAq01WfQ = d[1];
    for (aWQHnPiN = 2; aWQHnPiN <= 2 * FnYLlkhmOTS -3; aWQHnPiN++)
        if (d[aWQHnPiN] > fsvjAq01WfQ)
            fsvjAq01WfQ = d[aWQHnPiN];
    printf ("%.4lf", fsvjAq01WfQ);
}

