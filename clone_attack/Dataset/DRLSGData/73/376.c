main () {
    int WQb7CxuS [(491 - 486)];
    int ABMDacO;
    int dmNoSVdcJf;
    int sH5ju7lDf2d;
    int fkdiAzaQ63 [(646 - 641)];
    int JAWJLP8jaD [(16 - 11)];
    int IFgBAl4 [(823 - 818)] [(216 - 211)];
    int Ip2MY46;
    int QcEtGR;
    int ljPxYHcfSW;
    int ctmnZT;
    int HsLGEd9j;
    int SCcRAPqgFEf;
    int xw1KjPEDJL;
    int MgnFhSr;
    int JjiuoREHrUe [(707 - 702)];
    int iVuTvmD;
    int PHiLwEAf;
    int dW05kn;
    for (MgnFhSr = (271 - 271); MgnFhSr < (931 - 926); MgnFhSr++) {
        Ip2MY46 = 794 - 794;
        while ((115 - 110) > Ip2MY46) {
            scanf ("%d", &IFgBAl4[MgnFhSr][Ip2MY46]);
            Ip2MY46++;
        }
    }
    for (iVuTvmD = (193 - 193); iVuTvmD < (928 - 923); iVuTvmD++) {
        JjiuoREHrUe[iVuTvmD] = IFgBAl4[iVuTvmD][(837 - 837)];
        fkdiAzaQ63[iVuTvmD] = (882 - 882);
        {
            QcEtGR = 79 - 79;
            while (QcEtGR < (307 - 302)) {
                if (IFgBAl4[iVuTvmD][QcEtGR] > JjiuoREHrUe[iVuTvmD]) {
                    JjiuoREHrUe[iVuTvmD] = IFgBAl4[iVuTvmD][QcEtGR];
                    fkdiAzaQ63[iVuTvmD] = QcEtGR;
                }
                QcEtGR++;
            }
        }
    }
    {
        xw1KjPEDJL = 871 - 871;
        while ((65 - 60) > xw1KjPEDJL) {
            JAWJLP8jaD[xw1KjPEDJL] = IFgBAl4[(992 - 992)][xw1KjPEDJL];
            WQb7CxuS[xw1KjPEDJL] = (841 - 841);
            for (sH5ju7lDf2d = (779 - 779); sH5ju7lDf2d < 5; sH5ju7lDf2d++) {
                if (IFgBAl4[sH5ju7lDf2d][xw1KjPEDJL] < JAWJLP8jaD[xw1KjPEDJL]) {
                    JAWJLP8jaD[xw1KjPEDJL] = IFgBAl4[sH5ju7lDf2d][xw1KjPEDJL];
                    WQb7CxuS[xw1KjPEDJL] = sH5ju7lDf2d;
                }
            }
            xw1KjPEDJL++;
        }
    }
    ABMDacO = (658 - 658);
    {
        ctmnZT = 911 - 911;
        while (ctmnZT < 5) {
            if (IFgBAl4[ctmnZT][fkdiAzaQ63[ctmnZT]] == JAWJLP8jaD[fkdiAzaQ63[ctmnZT]]) {
                ABMDacO++;
                printf ("%d %d %d", ctmnZT + (386 - 385), fkdiAzaQ63[ctmnZT] + (434 - 433), JAWJLP8jaD[fkdiAzaQ63[ctmnZT]]);
            }
            ctmnZT++;
        }
    }
    if (ABMDacO == 0) {
        printf ("not found");
    }
}

