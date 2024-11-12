int main () {
    int PJZWfcuiXAUF [(100358 - 358)] [(538 - 535)];
    int LDtuWYHSN;
    int kweK41;
    int j;
    int a0YZXRTvUW7C;
    int rWmCZRksfQ;
    int DrUz42Qyd3L;
    scanf ("%d", &a0YZXRTvUW7C);
    for (rWmCZRksfQ = (12 - 12); rWmCZRksfQ < a0YZXRTvUW7C; rWmCZRksfQ++) {
        for (j = (570 - 570); j < (665 - 662); j++)
            scanf ("%d", &PJZWfcuiXAUF[rWmCZRksfQ][j]);
        PJZWfcuiXAUF[rWmCZRksfQ][(638 - 637)] = PJZWfcuiXAUF[rWmCZRksfQ][(711 - 710)] + PJZWfcuiXAUF[rWmCZRksfQ][(945 - 943)];
    }
    for (kweK41 = (641 - 641); kweK41 < (512 - 509); kweK41++) {
        for (LDtuWYHSN = a0YZXRTvUW7C - 2; LDtuWYHSN >= (892 - 892); LDtuWYHSN--) {
            if (PJZWfcuiXAUF[LDtuWYHSN][(594 - 593)] < PJZWfcuiXAUF[LDtuWYHSN +(257 - 256)][(357 - 356)]) {
                for (rWmCZRksfQ = (826 - 826); rWmCZRksfQ < 2; rWmCZRksfQ++) {
                    DrUz42Qyd3L = PJZWfcuiXAUF[LDtuWYHSN][rWmCZRksfQ];
                    PJZWfcuiXAUF[LDtuWYHSN][rWmCZRksfQ] = PJZWfcuiXAUF[LDtuWYHSN +(239 - 238)][rWmCZRksfQ];
                    PJZWfcuiXAUF[LDtuWYHSN +1][rWmCZRksfQ] = DrUz42Qyd3L;
                }
            }
        }
    }
    for (rWmCZRksfQ = (500 - 500); rWmCZRksfQ < 3; rWmCZRksfQ++) {
        printf ("%d %d\n", PJZWfcuiXAUF[rWmCZRksfQ][0], PJZWfcuiXAUF[rWmCZRksfQ][1]);
    }
    return 0;
}

