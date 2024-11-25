void  main () {
    int heBoXImWnG [(427 - 327)], fGkWFd5 [100], N [200], XrPn5BiMC, iRZmognLv;
    void  scan (int heBoXImWnG [], int fGkWFd5 [], int *LsiBwcHL1TQu, int *CBWHEm4Pv7UY);
    void  RLxmJs6bInzQ (int heBoXImWnG [], int XrPn5BiMC, int fGkWFd5 [], int iRZmognLv);
    void  IUeM5xan4t6 (int heBoXImWnG [], int fGkWFd5 [], int N [], int XrPn5BiMC, int iRZmognLv);
    void  krILagmK (int N [], int Cturlx);
    scan (heBoXImWnG, fGkWFd5, &XrPn5BiMC, &iRZmognLv);
    RLxmJs6bInzQ (heBoXImWnG, XrPn5BiMC, fGkWFd5, iRZmognLv);
    IUeM5xan4t6 (heBoXImWnG, fGkWFd5, N, XrPn5BiMC, iRZmognLv);
    krILagmK (N, XrPn5BiMC +iRZmognLv);
}

void  scan (int heBoXImWnG [], int fGkWFd5 [], int *LsiBwcHL1TQu, int *CBWHEm4Pv7UY) {
    int sOlZG7;
    scanf ("%d%d", LsiBwcHL1TQu, CBWHEm4Pv7UY);
    for (sOlZG7 = (58 - 58); sOlZG7 < *LsiBwcHL1TQu; sOlZG7 = sOlZG7 + 1)
        scanf ("%d", &heBoXImWnG[sOlZG7]);
    {
        sOlZG7 = 0;
        while (*CBWHEm4Pv7UY > sOlZG7) {
            scanf ("%d", &fGkWFd5[sOlZG7]);
            sOlZG7 = sOlZG7 + 1;
        };
    };
}

void  RLxmJs6bInzQ (int heBoXImWnG [], int XrPn5BiMC, int fGkWFd5 [], int iRZmognLv) {
    int sOlZG7;
    int ZZt4egc89mO;
    int vdOJHL1rl0Q;
    int Nmin;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    int asCE8ez;
    {
        sOlZG7 = 0;
        while (XrPn5BiMC > sOlZG7) {
            vdOJHL1rl0Q = sOlZG7;
            Nmin = heBoXImWnG[sOlZG7];
            {
                ZZt4egc89mO = sOlZG7;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                }
                while (XrPn5BiMC > ZZt4egc89mO) {
                    if (Nmin > heBoXImWnG[ZZt4egc89mO]) {
                        vdOJHL1rl0Q = ZZt4egc89mO;
                        Nmin = heBoXImWnG[ZZt4egc89mO];
                    }
                    ZZt4egc89mO = ZZt4egc89mO +1;
                };
            }
            asCE8ez = heBoXImWnG[sOlZG7];
            heBoXImWnG[sOlZG7] = heBoXImWnG[vdOJHL1rl0Q];
            sOlZG7 = sOlZG7 + 1;
            heBoXImWnG[vdOJHL1rl0Q] = asCE8ez;
        };
    }
    {
        sOlZG7 = 0;
        while (sOlZG7 < iRZmognLv) {
            vdOJHL1rl0Q = sOlZG7;
            Nmin = fGkWFd5[sOlZG7];
            {
                ZZt4egc89mO = sOlZG7;
                while (ZZt4egc89mO < iRZmognLv) {
                    if (fGkWFd5[ZZt4egc89mO] < Nmin) {
                        vdOJHL1rl0Q = ZZt4egc89mO;
                        Nmin = fGkWFd5[ZZt4egc89mO];
                    }
                    ZZt4egc89mO++;
                };
            }
            asCE8ez = fGkWFd5[sOlZG7];
            fGkWFd5[sOlZG7] = fGkWFd5[vdOJHL1rl0Q];
            sOlZG7 = sOlZG7 + 1;
            fGkWFd5[vdOJHL1rl0Q] = asCE8ez;
        };
    };
}

void  IUeM5xan4t6 (int heBoXImWnG [], int fGkWFd5 [], int N [], int XrPn5BiMC, int iRZmognLv) {
    int sOlZG7;
    {
        sOlZG7 = 0;
        while (sOlZG7 < XrPn5BiMC) {
            N[sOlZG7] = heBoXImWnG[sOlZG7];
            sOlZG7++;
        };
    }
    {
        sOlZG7 = XrPn5BiMC;
        while (XrPn5BiMC +iRZmognLv > sOlZG7) {
            N[sOlZG7] = fGkWFd5[sOlZG7 - XrPn5BiMC];
            sOlZG7++;
        };
    };
}

void  krILagmK (int N [], int Cturlx) {
    int sOlZG7;
    printf ("%d", N[0]);
    for (sOlZG7 = 1; sOlZG7 < Cturlx; sOlZG7 = sOlZG7 + 1)
        printf (" %d", N[sOlZG7]);
}

