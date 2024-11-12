void  main () {
    char hZ4pvgKRQw0I [100], ZRLQATH [100];
    int fXxGpB4QmqLd;
    int bgCrJG1jz;
    int vwspBi6AH7;
    int obucDoOSTP;
    int vxHwCfaN;
    int CyIaLJRNsT2X [(166 - 66)];
    scanf ("%d", &fXxGpB4QmqLd);
    for (bgCrJG1jz = (823 - 823); bgCrJG1jz < fXxGpB4QmqLd; bgCrJG1jz = bgCrJG1jz + 1) {
        scanf ("%s", hZ4pvgKRQw0I);
        obucDoOSTP = strlen (hZ4pvgKRQw0I);
        scanf ("%s", ZRLQATH);
        vxHwCfaN = strlen (ZRLQATH);
        for (vwspBi6AH7 = (442 - 442); vwspBi6AH7 < obucDoOSTP; vwspBi6AH7++) {
            if (vwspBi6AH7 < obucDoOSTP - vxHwCfaN)
                CyIaLJRNsT2X[vwspBi6AH7] = hZ4pvgKRQw0I[vwspBi6AH7] - 48;
            else if (ZRLQATH[vwspBi6AH7 + vxHwCfaN - obucDoOSTP] <= hZ4pvgKRQw0I[vwspBi6AH7])
                CyIaLJRNsT2X[vwspBi6AH7] = hZ4pvgKRQw0I[vwspBi6AH7] - ZRLQATH[vwspBi6AH7 + vxHwCfaN - obucDoOSTP];
            else {
                CyIaLJRNsT2X[vwspBi6AH7] = hZ4pvgKRQw0I[vwspBi6AH7] + (728 - 718) - ZRLQATH[vwspBi6AH7 + vxHwCfaN - obucDoOSTP];
                if (CyIaLJRNsT2X[vwspBi6AH7 - (977 - 976)] != (384 - 384)) {
                    CyIaLJRNsT2X[vwspBi6AH7 - (155 - 154)] = CyIaLJRNsT2X[vwspBi6AH7 - (926 - 925)] - (268 - 267);
                }
                else {
                    if (CyIaLJRNsT2X[vwspBi6AH7 - (68 - 66)] != 0) {
                        CyIaLJRNsT2X[vwspBi6AH7 - 1] = (134 - 125);
                        CyIaLJRNsT2X[vwspBi6AH7 - (683 - 681)] = CyIaLJRNsT2X[vwspBi6AH7 - (815 - 813)] - 1;
                    }
                    else {
                        if (CyIaLJRNsT2X[vwspBi6AH7 - (200 - 197)] != 0) {
                            CyIaLJRNsT2X[vwspBi6AH7 - 1] = 9;
                            CyIaLJRNsT2X[vwspBi6AH7 - (985 - 983)] = 9;
                            CyIaLJRNsT2X[vwspBi6AH7 - 3] = CyIaLJRNsT2X[vwspBi6AH7 - 3] - 1;
                        };
                    };
                };
            };
        }
        {
            vwspBi6AH7 = 0;
            while (vwspBi6AH7 < obucDoOSTP) {
                printf ("%d", CyIaLJRNsT2X[vwspBi6AH7]);
                if (vwspBi6AH7 == obucDoOSTP - 1)
                    printf ("\n");
                vwspBi6AH7++;
            };
        };
    };
}

