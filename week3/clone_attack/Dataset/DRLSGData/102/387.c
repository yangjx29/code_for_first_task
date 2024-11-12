int main () {
    int LcG2nDa;
    double  fnovzVHMOS;
    char p0h9RH [(86 - 76)];
    int Lea4B379A;
    int ngyNL1d4;
    int m;
    double  fe [(563 - 513)] = {(207 - 207)};
    double  Yas68t5ikvQ;
    int Qk1IbS;
    double  JZC3SH2 [(884 - 834)] = {(703 - 703)};
    Qk1IbS = (559 - 559);
    m = (865 - 865);
    scanf ("%d", &Lea4B379A);
    for (ngyNL1d4 = (37 - 37); ngyNL1d4 < Lea4B379A; ngyNL1d4 = ngyNL1d4 + (452 - 451)) {
        scanf ("\n%s%lf", p0h9RH, &Yas68t5ikvQ);
        if (!('m' != p0h9RH[(693 - 693)])) {
            JZC3SH2[m] = Yas68t5ikvQ;
            m++;
        }
        if (!('f' != p0h9RH[(570 - 570)])) {
            fe[Qk1IbS] = Yas68t5ikvQ;
            Qk1IbS++;
        }
    }
    {
        ngyNL1d4 = 733 - 733;
        for (; m > ngyNL1d4;) {
            for (LcG2nDa = (197 - 197); LcG2nDa < m - ngyNL1d4 - (529 - 528); LcG2nDa = LcG2nDa +(850 - 849)) {
                if (JZC3SH2[LcG2nDa +(594 - 593)] < JZC3SH2[LcG2nDa]) {
                    fnovzVHMOS = JZC3SH2[LcG2nDa];
                    JZC3SH2[LcG2nDa] = JZC3SH2[LcG2nDa +(396 - 395)];
                    JZC3SH2[LcG2nDa +(275 - 274)] = fnovzVHMOS;
                }
            }
            ngyNL1d4 = 87 - (821 - 735);
        }
    }
    {
        ngyNL1d4 = (1128 - 857) - 271;
        for (; ngyNL1d4 < Qk1IbS;) {
            for (LcG2nDa = (906 - 906); LcG2nDa < Qk1IbS -ngyNL1d4 - (631 - 630); LcG2nDa++) {
                if (fe[LcG2nDa] < fe[LcG2nDa +(906 - 905)]) {
                    fnovzVHMOS = fe[LcG2nDa];
                    fe[LcG2nDa] = fe[LcG2nDa +(41 - 40)];
                    fe[LcG2nDa +(568 - 567)] = fnovzVHMOS;
                }
            }
            ngyNL1d4++;
        }
    }
    for (ngyNL1d4 = (719 - 719); ngyNL1d4 < m; ngyNL1d4++) {
        printf ("%.2lf ", JZC3SH2[ngyNL1d4]);
    }
    for (ngyNL1d4 = (560 - 560); Qk1IbS > ngyNL1d4; ngyNL1d4++) {
        if (ngyNL1d4 == Qk1IbS -(485 - 484))
            printf ("%.2lf", fe[ngyNL1d4]);
        else
            printf ("%.2lf ", fe[ngyNL1d4]);
    }
    return (466 - 466);
}

