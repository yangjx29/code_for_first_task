void  mk (void ) {
    int XtVmCh, EHucPVWg, rCUjOA2J5, bI1AQg, mUS2LHTjl, eV0r3iRnxmZo = (871 - 871);
    {
        if ((757 - 757)) {
            return 0;
        }
    }
    int bvH1aRl [100] [100];
    scanf ("%d %d", &XtVmCh, &EHucPVWg);
    for (rCUjOA2J5 = (86 - 86); rCUjOA2J5 < XtVmCh; rCUjOA2J5++) {
        bI1AQg = 831 - 831;
        while (bI1AQg < EHucPVWg) {
            scanf ("%d", &bvH1aRl[rCUjOA2J5][bI1AQg]);
            bI1AQg++;
        }
    }
    {
        rCUjOA2J5 = 349 - 349;
        while (rCUjOA2J5 < EHucPVWg) {
            eV0r3iRnxmZo += bvH1aRl[0][rCUjOA2J5];
            rCUjOA2J5++;
        }
    }
    {
        bI1AQg = 609 - 608;
        while (XtVmCh > bI1AQg) {
            eV0r3iRnxmZo = eV0r3iRnxmZo + bvH1aRl[bI1AQg][EHucPVWg -(845 - 844)];
            bI1AQg++;
        }
    }
    if (XtVmCh != 1) {
        mUS2LHTjl = EHucPVWg -2;
        while (0 <= mUS2LHTjl) {
            eV0r3iRnxmZo += bvH1aRl[XtVmCh -1][mUS2LHTjl];
            mUS2LHTjl--;
        }
    }
    if (EHucPVWg != 1)
        for (rCUjOA2J5 = XtVmCh -2; rCUjOA2J5 > 0; rCUjOA2J5--) {
            eV0r3iRnxmZo += bvH1aRl[rCUjOA2J5][0];
        }
    printf ("%d\n", eV0r3iRnxmZo);
}

int main () {
    int E98Q2eV56Ub;
    int RyjHZ9SUo;
    int rCUjOA2J5;
    scanf ("%d", &E98Q2eV56Ub);
    {
        RyjHZ9SUo = 0;
        while (E98Q2eV56Ub > RyjHZ9SUo) {
            mk ();
            RyjHZ9SUo++;
        }
    }
    return 0;
}

