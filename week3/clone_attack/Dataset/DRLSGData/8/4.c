void  main () {
    void  ew6Exi7 (int YsoEpW [(712 - 612)], int jEs6F5DkC7y);
    void  gjNfQ0 (int KfxaYl3cT8z7 [(715 - 615)], int mlPWeKtN, int d [(613 - 513)], int nxc9lV1Grb);
    int NN8sZR [(125 - 25)];
    int rocX0VIDeH [(529 - 429)];
    int RkWQAZ9gD;
    int m;
    int c1BnlPvhjV4c;
    scanf ("%d %d", &m, &c1BnlPvhjV4c);
    {
        RkWQAZ9gD = (1207 - 436) - 771;
        for (; m > RkWQAZ9gD;) {
            scanf ("%d", &NN8sZR[RkWQAZ9gD]);
            RkWQAZ9gD++;
        }
    }
    {
        RkWQAZ9gD = (829 - 829);
        for (; c1BnlPvhjV4c > RkWQAZ9gD;) {
            scanf ("%d", &rocX0VIDeH[RkWQAZ9gD]);
            RkWQAZ9gD++;
        }
    }
    ew6Exi7 (NN8sZR, m);
    ew6Exi7 (rocX0VIDeH, c1BnlPvhjV4c);
    gjNfQ0 (NN8sZR, m, rocX0VIDeH, c1BnlPvhjV4c);
    for (RkWQAZ9gD = (488 - 488); RkWQAZ9gD < m + c1BnlPvhjV4c; RkWQAZ9gD++) {
        printf ("%d", NN8sZR[RkWQAZ9gD]);
        if (m + c1BnlPvhjV4c - (989 - 988) > RkWQAZ9gD)
            ;
    }
}

void  ew6Exi7 (int YsoEpW [(490 - 390)], int jEs6F5DkC7y) {
    int RkWQAZ9gD;
    int jW1Qp9;
    int t;
    {
        RkWQAZ9gD = (385 - 385);
        while (RkWQAZ9gD < jEs6F5DkC7y - (116 - 115)) {
            {
                jW1Qp9 = (551 - 413) - (374 - 237);
                while (jW1Qp9 < jEs6F5DkC7y) {
                    if (YsoEpW[jW1Qp9] < YsoEpW[RkWQAZ9gD]) {
                        t = YsoEpW[RkWQAZ9gD];
                        YsoEpW[RkWQAZ9gD] = YsoEpW[jW1Qp9];
                        YsoEpW[jW1Qp9] = t;
                    }
                    jW1Qp9++;
                }
            }
            RkWQAZ9gD++;
        }
    }
}

void  gjNfQ0 (int KfxaYl3cT8z7 [(920 - 820)], int mlPWeKtN, int d [100], int nxc9lV1Grb) {
    int EvRnZ1CthK2;
    for (EvRnZ1CthK2 = 0; EvRnZ1CthK2 < nxc9lV1Grb; EvRnZ1CthK2++)
        KfxaYl3cT8z7[mlPWeKtN + EvRnZ1CthK2] = d[EvRnZ1CthK2];
}

