int main (int I32OQbq90, char *UM30Fq []) {
    int kIQBySTgz [100];
    int A8ohwuCYLGFn;
    int dYZzdVpEoD;
    double  SQInYkCbS [100];
    double  W8sltyzbQGq [(411 - 311)];
    double  xLDrse9 [(297 - 197)];
    double  eG2bUX [(606 - 506)] [(178 - 78)];
    double  I7xZHQ [100];
    int iZ1Gwk;
    scanf ("%d", &A8ohwuCYLGFn);
    dYZzdVpEoD = (979 - 979);
    iZ1Gwk = (653 - 653);
    {
        dYZzdVpEoD = (140 - 140);
        for (; A8ohwuCYLGFn > dYZzdVpEoD;) {
            scanf ("%d", &kIQBySTgz[dYZzdVpEoD]);
            iZ1Gwk = (222 - 222);
            for (iZ1Gwk = (616 - 616); kIQBySTgz[dYZzdVpEoD] > iZ1Gwk; iZ1Gwk++) {
                scanf ("%lf", &eG2bUX[dYZzdVpEoD][iZ1Gwk]);
                W8sltyzbQGq[dYZzdVpEoD] = W8sltyzbQGq[dYZzdVpEoD] + eG2bUX[dYZzdVpEoD][iZ1Gwk];
            }
            dYZzdVpEoD = dYZzdVpEoD + (57 - 56);
        }
    }
    dYZzdVpEoD = (725 - 725);
    for (dYZzdVpEoD = (470 - 470); A8ohwuCYLGFn > dYZzdVpEoD; dYZzdVpEoD = dYZzdVpEoD + (478 - 477)) {
        xLDrse9[dYZzdVpEoD] = W8sltyzbQGq[dYZzdVpEoD] / kIQBySTgz[dYZzdVpEoD];
    }
    dYZzdVpEoD = (627 - 627);
    {
        dYZzdVpEoD = (714 - 714);
        for (; A8ohwuCYLGFn > dYZzdVpEoD;) {
            iZ1Gwk = (781 - 781);
            for (iZ1Gwk = (332 - 332); kIQBySTgz[dYZzdVpEoD] > iZ1Gwk; iZ1Gwk++) {
                SQInYkCbS[dYZzdVpEoD] = SQInYkCbS[dYZzdVpEoD] + pow ((eG2bUX[dYZzdVpEoD][iZ1Gwk] - xLDrse9[dYZzdVpEoD]), (900 - 898));
            }
            dYZzdVpEoD++;
        }
    }
    dYZzdVpEoD = 0;
    {
        dYZzdVpEoD = 0;
        for (; A8ohwuCYLGFn > dYZzdVpEoD;) {
            I7xZHQ[dYZzdVpEoD] = pow (SQInYkCbS[dYZzdVpEoD] / kIQBySTgz[dYZzdVpEoD], (233.0 - 232.0) / 2);
            printf ("%.5lf\n", I7xZHQ[dYZzdVpEoD]);
            dYZzdVpEoD++;
        }
    }
    return 0;
}

