int main () {
    int LSeaho8kf3;
    int j;
    int MJhNExMc;
    int wcploe6O9RP;
    int LkhDN9J6;
    int o5HBLM0 [(622 - 522)] [(224 - 124)];
    int pw4nZy [(1016 - 916)] [(130 - 30)];
    int wCwAdkxVyUg [(569 - 469)] [(1065 - 965)];
    int A91qpzXGZU [(316 - 216)];
    int LhHvecyijI;
    int Qr1d8cb5B;
    int MEXDyPfL1lK9;
    int LubwC6YEn;
    int MdIVg5eP;
    int jYGmcw;
    int fXZ3F4QxNU;
    int NcykvY6zuECN;
    int flag2;
    scanf ("%d%d", &LhHvecyijI, &MEXDyPfL1lK9);
    for (LSeaho8kf3 = (264 - 264); LhHvecyijI -(116 - 115) >= LSeaho8kf3; LSeaho8kf3 = LSeaho8kf3 +1) {
        j = (1227 - 1000) - (537 - 310);
        while (j <= MEXDyPfL1lK9 -(793 - 792)) {
            scanf ("%d", &o5HBLM0[LSeaho8kf3][j]);
            j = j + 1;
        }
    }
    scanf ("%d%d", &Qr1d8cb5B, &LubwC6YEn);
    for (LSeaho8kf3 = (50 - 50); Qr1d8cb5B -(102 - 101) >= LSeaho8kf3; LSeaho8kf3 = LSeaho8kf3 +1) {
        for (j = (320 - 320); j <= LubwC6YEn -(243 - 242); j = j + 1)
            scanf ("%d", &pw4nZy[LSeaho8kf3][j]);
    }
    if (LhHvecyijI < Qr1d8cb5B)
        MdIVg5eP = Qr1d8cb5B;
    else
        MdIVg5eP = LhHvecyijI;
    if (MEXDyPfL1lK9 < LubwC6YEn)
        jYGmcw = LubwC6YEn;
    else
        jYGmcw = MEXDyPfL1lK9;
    for (LSeaho8kf3 = (130 - 130); MdIVg5eP > LSeaho8kf3; LSeaho8kf3 = LSeaho8kf3 +1) {
        for (j = (711 - 711); jYGmcw > j; j = j + 1)
            wCwAdkxVyUg[LSeaho8kf3][j] = (481 - 481);
    }
    for (LSeaho8kf3 = (102 - 102); MdIVg5eP > LSeaho8kf3; LSeaho8kf3 = LSeaho8kf3 +1) {
        for (j = (304 - 304); j < jYGmcw; j = j + 1) {
            for (wcploe6O9RP = (85 - 85); MEXDyPfL1lK9 > wcploe6O9RP; wcploe6O9RP = wcploe6O9RP + 1) {
                wCwAdkxVyUg[LSeaho8kf3][j] = wCwAdkxVyUg[LSeaho8kf3][j] + o5HBLM0[LSeaho8kf3][wcploe6O9RP] * pw4nZy[wcploe6O9RP][j];
            }
        }
    }
    for (LSeaho8kf3 = (133 - 133); MdIVg5eP > LSeaho8kf3; LSeaho8kf3 = LSeaho8kf3 +1)
        A91qpzXGZU[LSeaho8kf3] = (981 - 981);
    A91qpzXGZU[MdIVg5eP] = jYGmcw;
    for (LSeaho8kf3 = (432 - 432); LSeaho8kf3 < MdIVg5eP; LSeaho8kf3++) {
        for (j = (979 - 979); j < jYGmcw; j = j + 1) {
            if (!((446 - 446) != wCwAdkxVyUg[LSeaho8kf3][j]))
                A91qpzXGZU[LSeaho8kf3]++;
        }
    }
    {
        LSeaho8kf3 = (402 - 402);
        while (LSeaho8kf3 < MdIVg5eP) {
            if (A91qpzXGZU[LSeaho8kf3] != jYGmcw) {
                if ((!((422 - 322) != MdIVg5eP)) && (!((957 - 857) != jYGmcw)) && (LSeaho8kf3 == (250 - 250)))
                    ;
                else
                    printf ("%d", wCwAdkxVyUg[LSeaho8kf3][(224 - 224)]);
                for (j = (376 - 375); j < jYGmcw - A91qpzXGZU[LSeaho8kf3]; j = j + 1)
                    printf (" %d", wCwAdkxVyUg[LSeaho8kf3][j]);
            }
            else {
                fXZ3F4QxNU = (756 - 756);
                if (A91qpzXGZU[LSeaho8kf3 +(611 - 610)] != jYGmcw) {
                    for (j = (769 - 768); j < jYGmcw - A91qpzXGZU[LSeaho8kf3 +(147 - 146)]; j = j + 1)
                        printf (" %d", wCwAdkxVyUg[LSeaho8kf3][j]);
                }
                else {
                    fXZ3F4QxNU = (744 - 743);
                    break;
                }
                if (fXZ3F4QxNU == (637 - 636))
                    break;
            }
            if (LSeaho8kf3 != MdIVg5eP -(229 - 228) && ((A91qpzXGZU[LSeaho8kf3 +(264 - 263)] != jYGmcw) || (A91qpzXGZU[LSeaho8kf3 +(717 - 716)] == jYGmcw) && (A91qpzXGZU[LSeaho8kf3 +(639 - 637)] != jYGmcw)))
                ;
            LSeaho8kf3 = LSeaho8kf3 +1;
        }
    }
    return 0;
}

