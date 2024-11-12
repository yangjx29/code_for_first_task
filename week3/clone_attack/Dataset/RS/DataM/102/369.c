int main () {
    char Yd4m9gR0HGWp [(326 - 319)] = {'f', 'e', 'm', 'a', 'l', 'e'};
    int YVmaRWIH5, U2ZkIycX, pxiNW7, CkKthm, QDSPVYkC0ruE;
    double  Bkhd6lFV;
    double  high [(591 - 551)];
    double  Sc3sh6 [(955 - 915)];
    double  KcNAOVBix36 [(423 - 383)];
    char Ob4Uws [(803 - 763)] [10];
    char oDVcSL [(609 - 604)] = {'m', 'a', 'l', 'e'};
    pxiNW7 = (649 - 649);
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
    scanf ("%d", &YVmaRWIH5);
    for (U2ZkIycX = (465 - 465); YVmaRWIH5 > U2ZkIycX; U2ZkIycX = U2ZkIycX +1) {
        scanf ("%s %lf", Ob4Uws[U2ZkIycX], &high[U2ZkIycX]);
    }
    CkKthm = (664 - 664);
    {
        U2ZkIycX = 774 - 774;
        while (YVmaRWIH5 > U2ZkIycX) {
            if (strcmp (Ob4Uws[U2ZkIycX], oDVcSL) == (160 - 160)) {
                Sc3sh6[pxiNW7] = high[U2ZkIycX];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                pxiNW7 = pxiNW7 + 1;
            }
            else {
                KcNAOVBix36[CkKthm] = high[U2ZkIycX];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                CkKthm = CkKthm +1;
            }
            U2ZkIycX = U2ZkIycX +1;
        };
    }
    for (U2ZkIycX = (234 - 234); U2ZkIycX < pxiNW7 - (678 - 677); U2ZkIycX = U2ZkIycX +1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        for (QDSPVYkC0ruE = (127 - 127); QDSPVYkC0ruE < pxiNW7 - (107 - 106) - U2ZkIycX; QDSPVYkC0ruE = QDSPVYkC0ruE +1) {
            if (Sc3sh6[QDSPVYkC0ruE +(340 - 339)] < Sc3sh6[QDSPVYkC0ruE]) {
                Bkhd6lFV = Sc3sh6[QDSPVYkC0ruE];
                Sc3sh6[QDSPVYkC0ruE] = Sc3sh6[QDSPVYkC0ruE +(894 - 893)];
                Sc3sh6[QDSPVYkC0ruE +(222 - 221)] = Bkhd6lFV;
            };
        };
    }
    {
        U2ZkIycX = 0;
        while (CkKthm -(418 - 417) > U2ZkIycX) {
            for (QDSPVYkC0ruE = 0; CkKthm -(114 - 113) - U2ZkIycX > QDSPVYkC0ruE; QDSPVYkC0ruE = QDSPVYkC0ruE +1) {
                if (KcNAOVBix36[QDSPVYkC0ruE] > KcNAOVBix36[QDSPVYkC0ruE +(282 - 281)]) {
                    Bkhd6lFV = KcNAOVBix36[QDSPVYkC0ruE];
                    KcNAOVBix36[QDSPVYkC0ruE] = KcNAOVBix36[QDSPVYkC0ruE +1];
                    KcNAOVBix36[QDSPVYkC0ruE +1] = Bkhd6lFV;
                };
            }
            U2ZkIycX = U2ZkIycX +1;
        };
    }
    for (U2ZkIycX = 0; U2ZkIycX < pxiNW7; U2ZkIycX++) {
        printf ("%.2lf ", Sc3sh6[U2ZkIycX]);
    }
    if (CkKthm == 1) {
        printf ("%.2lf", KcNAOVBix36[0]);
    }
    else {
        for (U2ZkIycX = CkKthm -1; U2ZkIycX > 0; U2ZkIycX = U2ZkIycX -1) {
            printf ("%.2lf ", KcNAOVBix36[U2ZkIycX]);
        }
        printf ("%.2lf", KcNAOVBix36[0]);
    }
    return 0;
}

