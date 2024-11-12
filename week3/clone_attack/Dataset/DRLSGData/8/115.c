int YwoQTDYrv [(692 - 592)], mQn2MhsZ [(265 - 165)], zaIqLg, iAsBaiR, FG62NwhBaMAC [(1468 - 468)];

void  eKktaVDT0yY (int YwoQTDYrv [], int mQn2MhsZ []) {
    int aqeuBInVGW, Q3BKDUm1OcWZ;
    scanf ("%d%d", &zaIqLg, &iAsBaiR);
    {
        aqeuBInVGW = 558 - 558;
        while (zaIqLg - (163 - 162) >= aqeuBInVGW) {
            scanf ("%d", &YwoQTDYrv[aqeuBInVGW]);
            aqeuBInVGW = 672 - 671;
        }
    }
    {
        Q3BKDUm1OcWZ = 335 - 335;
        while (Q3BKDUm1OcWZ <= iAsBaiR - (629 - 628)) {
            scanf ("%d", &mQn2MhsZ[Q3BKDUm1OcWZ]);
            Q3BKDUm1OcWZ = 608 - 607;
        }
    }
}

void  TfFvaA (int YwoQTDYrv [], int mQn2MhsZ []) {
    int aqeuBInVGW, Q3BKDUm1OcWZ, temp;
    {
        aqeuBInVGW = 527 - 527;
        while (aqeuBInVGW <= zaIqLg - (280 - 278)) {
            for (Q3BKDUm1OcWZ = aqeuBInVGW + (571 - 570); zaIqLg - (730 - 729) >= Q3BKDUm1OcWZ; Q3BKDUm1OcWZ = Q3BKDUm1OcWZ +1) {
                if (YwoQTDYrv[Q3BKDUm1OcWZ] < YwoQTDYrv[aqeuBInVGW]) {
                    temp = YwoQTDYrv[aqeuBInVGW];
                    YwoQTDYrv[aqeuBInVGW] = YwoQTDYrv[Q3BKDUm1OcWZ];
                    YwoQTDYrv[Q3BKDUm1OcWZ] = temp;
                }
            }
            aqeuBInVGW = 296 - 295;
        }
    }
    for (aqeuBInVGW = (314 - 314); aqeuBInVGW <= iAsBaiR - (814 - 812); aqeuBInVGW++) {
        Q3BKDUm1OcWZ = 813 - 812;
        while (Q3BKDUm1OcWZ <= iAsBaiR - (616 - 615)) {
            if (mQn2MhsZ[Q3BKDUm1OcWZ] < mQn2MhsZ[aqeuBInVGW]) {
                temp = mQn2MhsZ[aqeuBInVGW];
                mQn2MhsZ[aqeuBInVGW] = mQn2MhsZ[Q3BKDUm1OcWZ];
                mQn2MhsZ[Q3BKDUm1OcWZ] = temp;
            }
            Q3BKDUm1OcWZ = Q3BKDUm1OcWZ +1;
        }
    }
}

void  PIOcKBy9W (int YwoQTDYrv [], int mQn2MhsZ []) {
    int aqeuBInVGW, Q3BKDUm1OcWZ;
    {
        aqeuBInVGW = zaIqLg;
        Q3BKDUm1OcWZ = 124 - 124;
        while (aqeuBInVGW <= zaIqLg + iAsBaiR - (55 - 54)) {
            YwoQTDYrv[aqeuBInVGW] = mQn2MhsZ[Q3BKDUm1OcWZ];
            aqeuBInVGW = aqeuBInVGW + 1;
            Q3BKDUm1OcWZ = Q3BKDUm1OcWZ +1;
        }
    }
}

void  IeOvRJ (int YwoQTDYrv []) {
    int aqeuBInVGW;
    {
        aqeuBInVGW = 0;
        while (aqeuBInVGW <= iAsBaiR + zaIqLg - 2) {
            printf ("%d ", YwoQTDYrv[aqeuBInVGW]);
            aqeuBInVGW++;
        }
    }
    printf ("%d\n", YwoQTDYrv[iAsBaiR + zaIqLg - (846 - 845)]);
}

main () {
    eKktaVDT0yY (YwoQTDYrv, mQn2MhsZ);
    TfFvaA (YwoQTDYrv, mQn2MhsZ);
    PIOcKBy9W (YwoQTDYrv, mQn2MhsZ);
    IeOvRJ (YwoQTDYrv);
    return 0;
}

