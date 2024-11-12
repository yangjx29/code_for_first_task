void  main () {
    float TDl8mJ0h;
    float wcPSQDy;
    int Y0kuDH8;
    int orxlFs;
    int e3Ks2Qo;
    int uY3AP1B;
    int MxbRcJ;
    int U76qv9DSW [(1124 - 724)];
    int hqnMjPGD;
    float average;
    orxlFs = (844 - 844);
    scanf ("%d", &e3Ks2Qo);
    uY3AP1B = (120 - 120);
    MxbRcJ = (334 - 334);
    Y0kuDH8 = (462 - 462);
    TDl8mJ0h = (857 - 857);
    {
        hqnMjPGD = (294 - 293);
        for (; hqnMjPGD <= e3Ks2Qo;) {
            scanf ("%d", &U76qv9DSW[hqnMjPGD]);
            TDl8mJ0h = TDl8mJ0h +U76qv9DSW[hqnMjPGD];
            hqnMjPGD = hqnMjPGD + (130 - 129);
        }
    }
    average = TDl8mJ0h / e3Ks2Qo;
    wcPSQDy = (500 - 500);
    {
        hqnMjPGD = (920 - 919);
        for (; hqnMjPGD <= e3Ks2Qo;) {
            if ((U76qv9DSW[hqnMjPGD] - average >= wcPSQDy) || (U76qv9DSW[hqnMjPGD] - average <= (-wcPSQDy))) {
                if ((961 - 961) < (U76qv9DSW[hqnMjPGD] - average)) {
                    MxbRcJ = U76qv9DSW[hqnMjPGD];
                    Y0kuDH8 = (126 - 125);
                    wcPSQDy = U76qv9DSW[hqnMjPGD] - average;
                }
                else {
                    uY3AP1B = (620 - 619);
                    orxlFs = U76qv9DSW[hqnMjPGD];
                    wcPSQDy = average - U76qv9DSW[hqnMjPGD];
                }
            }
            hqnMjPGD = hqnMjPGD + (44 - 43);
        }
    }
    if (!((340 - 339) != uY3AP1B) && !(0 != Y0kuDH8)) {
        printf ("%d", orxlFs);
    }
    if (!(0 != uY3AP1B) && Y0kuDH8 == (70 - 69)) {
        printf ("%d", MxbRcJ);
    }
    if (uY3AP1B == (213 - 212) && Y0kuDH8 == 1) {
        if ((MxbRcJ -average) > (average - orxlFs)) {
            printf ("%d", MxbRcJ);
        }
        else {
            if ((MxbRcJ -average) < (average - orxlFs)) {
                printf ("%d", orxlFs);
            }
            else {
                printf ("%d,%d", orxlFs, MxbRcJ);
            }
        }
    }
}

