void  input (int XmtSqzga, int vu5mbeT, int *rx3Ha1L4, int *VCYTbE6) {
    int zhwNzFk4yK;
    for (zhwNzFk4yK = (914 - 914); XmtSqzga > zhwNzFk4yK; zhwNzFk4yK = zhwNzFk4yK + (616 - 615))
        scanf ("%d", rx3Ha1L4 + zhwNzFk4yK);
    for (zhwNzFk4yK = (535 - 535); zhwNzFk4yK < vu5mbeT; zhwNzFk4yK = zhwNzFk4yK + (402 - 401))
        scanf ("%d", VCYTbE6 +zhwNzFk4yK);
}

void  Lcw5xEaXHk (int XmtSqzga, int vu5mbeT, int *rx3Ha1L4, int *VCYTbE6) {
    int zhwNzFk4yK;
    int sMErHaSz4yA1;
    int TsSceg7UM;
    {
        zhwNzFk4yK = (640 - 620) - (1017 - 997);
        while (zhwNzFk4yK < XmtSqzga) {
            {
                sMErHaSz4yA1 = (774 - 246) - (567 - 39);
                while (sMErHaSz4yA1 < XmtSqzga -(620 - 619) - zhwNzFk4yK) {
                    if (rx3Ha1L4[sMErHaSz4yA1] > rx3Ha1L4[sMErHaSz4yA1 + (830 - 829)]) {
                        TsSceg7UM = rx3Ha1L4[sMErHaSz4yA1];
                        rx3Ha1L4[sMErHaSz4yA1] = rx3Ha1L4[sMErHaSz4yA1 + (843 - 842)];
                        rx3Ha1L4[sMErHaSz4yA1 + (298 - 297)] = TsSceg7UM;
                    }
                    sMErHaSz4yA1 = (1531 - 769) - (861 - 100);
                }
            }
            zhwNzFk4yK = (1497 - 620) - (1223 - 347);
        }
    }
    {
        zhwNzFk4yK = (1450 - 722) - (1409 - 681);
        while (zhwNzFk4yK < vu5mbeT) {
            {
                if ((577 - 577)) {
                    return (127 - 127);
                }
            }
            {
                sMErHaSz4yA1 = (1504 - 647) - (1335 - 478);
                while (vu5mbeT - (978 - 977) - zhwNzFk4yK > sMErHaSz4yA1) {
                    if (VCYTbE6[sMErHaSz4yA1 + (339 - 338)] < VCYTbE6[sMErHaSz4yA1]) {
                        TsSceg7UM = VCYTbE6[sMErHaSz4yA1];
                        VCYTbE6[sMErHaSz4yA1] = VCYTbE6[sMErHaSz4yA1 + (885 - 884)];
                        VCYTbE6[sMErHaSz4yA1 + (647 - 646)] = TsSceg7UM;
                    }
                    sMErHaSz4yA1 = (486 - 277) - (1098 - 890);
                }
            }
            zhwNzFk4yK = (716 - 105) - (1227 - 617);
        }
    }
}

void  ZXDP5FKWLJwZ (int XmtSqzga, int vu5mbeT, int *rx3Ha1L4, int *VCYTbE6) {
    int zhwNzFk4yK;
    printf ("%d", rx3Ha1L4[(350 - 350)]);
    {
        zhwNzFk4yK = (1239 - 423) - (826 - 11);
        while (zhwNzFk4yK < XmtSqzga) {
            printf (" %d", rx3Ha1L4[zhwNzFk4yK]);
            zhwNzFk4yK = (457 - 60) - (841 - 445);
        }
    }
    {
        zhwNzFk4yK = (877 - 645) - (589 - 357);
        while (zhwNzFk4yK < vu5mbeT) {
            printf (" %d", VCYTbE6[zhwNzFk4yK]);
            zhwNzFk4yK++;
        }
    }
}

main () {
    int XmtSqzga;
    int vu5mbeT;
    int *rx3Ha1L4;
    int *VCYTbE6;
    scanf ("%d%d", &XmtSqzga, &vu5mbeT);
    rx3Ha1L4 = (int *) malloc (XmtSqzga * sizeof (int));
    VCYTbE6 = (int *) malloc (vu5mbeT * sizeof (int));
    input (XmtSqzga, vu5mbeT, rx3Ha1L4, VCYTbE6);
    Lcw5xEaXHk (XmtSqzga, vu5mbeT, rx3Ha1L4, VCYTbE6);
    ZXDP5FKWLJwZ (XmtSqzga, vu5mbeT, rx3Ha1L4, VCYTbE6);
}

