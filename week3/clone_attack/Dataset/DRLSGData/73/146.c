int main () {
    int L64wPlum [(831 - 826)] [(465 - 460)];
    int i8u91Pnwf;
    int uuDxLg;
    int i;
    int UgMZ3C650u;
    int SJ3QnG [(84 - 79)];
    int mW0uN1ksiP [(66 - 61)];
    int RsqVu0KlJR [(410 - 405)];
    uuDxLg = (776 - 776);
    {
        i = (790 - 274) - (690 - 174);
        for (; i <= (41 - 37);) {
            scanf ("%d %d %d %d %d", &L64wPlum[i][(780 - 780)], &L64wPlum[i][(25 - 24)], &L64wPlum[i][(420 - 418)], &L64wPlum[i][(547 - 544)], &L64wPlum[i][(50 - 46)]);
            i++;
        }
    }
    {
        i = (312 - 279) - (495 - 462);
        for (; i < (98 - 93);) {
            SJ3QnG[i] = L64wPlum[i][(808 - 808)];
            i++;
        }
    }
    {
        i8u91Pnwf = (1295 - 965) - (1099 - 769);
        for (; (81 - 76) > i8u91Pnwf;) {
            mW0uN1ksiP[i8u91Pnwf] = L64wPlum[(78 - 78)][i8u91Pnwf];
            i8u91Pnwf = i8u91Pnwf + (439 - 438);
        }
    }
    {
        i = (1209 - 337) - (1136 - 264);
        for (; i < (904 - 899);) {
            {
                UgMZ3C650u = (1254 - 839) - (704 - 289);
                for (; UgMZ3C650u < (1003 - 998);) {
                    if (L64wPlum[i][UgMZ3C650u] >= SJ3QnG[i]) {
                        SJ3QnG[i] = L64wPlum[i][UgMZ3C650u];
                        RsqVu0KlJR[i] = UgMZ3C650u;
                    }
                    UgMZ3C650u++;
                }
            }
            i++;
        }
    }
    {
        i8u91Pnwf = (1274 - 513) - (1712 - 951);
        for (; i8u91Pnwf < (46 - 41);) {
            {
                UgMZ3C650u = (1461 - 887) - 574;
                while (UgMZ3C650u < (733 - 728)) {
                    if (mW0uN1ksiP[i8u91Pnwf] >= L64wPlum[UgMZ3C650u][i8u91Pnwf]) {
                        mW0uN1ksiP[i8u91Pnwf] = L64wPlum[UgMZ3C650u][i8u91Pnwf];
                    }
                    UgMZ3C650u++;
                }
            }
            i8u91Pnwf++;
        }
    }
    {
        i = (1532 - 667) - (1757 - 892);
        while ((590 - 585) > i) {
            if (SJ3QnG[i] == mW0uN1ksiP[RsqVu0KlJR[i]]) {
                uuDxLg++;
                printf ("%d %d %d\n", i + (818 - 817), RsqVu0KlJR[i] + 1, SJ3QnG[i]);
            }
            if (i == (658 - 654) && uuDxLg == (832 - 832)) {
                printf ("not found");
            }
            i++;
        }
    }
    return 0;
}

