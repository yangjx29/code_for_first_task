int main (int AGkcuB, char *TltK7qhiF9 []) {
    int wrgBkU [(1098 - 988)];
    int U3wZRN2xJ0K;
    int QsUjA2hMZwNi;
    int QSzWKfxY8anm;
    struct   H7pEauRbg {
        char ODRJUc2kWPp [25];
        int z40VaHd;
        int jCHvhBleN60;
        char b86RyPV;
        char lUDd4nA5;
        int Ivd2QaXlNB;
    }
    H7pEauRbg [110];
    char dBY1S3R [25];
    int MZWKfODXnI;
    scanf ("%d", &QSzWKfxY8anm);
    U3wZRN2xJ0K = (841 - 841);
    MZWKfODXnI = (138 - 138);
    for (QsUjA2hMZwNi = (748 - 748); QSzWKfxY8anm > QsUjA2hMZwNi; QsUjA2hMZwNi++) {
        scanf ("%s %d %d %c %c %d", &H7pEauRbg[QsUjA2hMZwNi].ODRJUc2kWPp, &H7pEauRbg[QsUjA2hMZwNi].z40VaHd, &H7pEauRbg[QsUjA2hMZwNi].jCHvhBleN60, &H7pEauRbg[QsUjA2hMZwNi].b86RyPV, &H7pEauRbg[QsUjA2hMZwNi].lUDd4nA5, &H7pEauRbg[QsUjA2hMZwNi].Ivd2QaXlNB);
    }
    {
        QsUjA2hMZwNi = (908 - 908);
        while (QSzWKfxY8anm > QsUjA2hMZwNi) {
            wrgBkU[QsUjA2hMZwNi] = 0;
            if (H7pEauRbg[QsUjA2hMZwNi].z40VaHd > (134 - 54) && H7pEauRbg[QsUjA2hMZwNi].Ivd2QaXlNB >= 1) {
                wrgBkU[QsUjA2hMZwNi] += (8524 - 524);
            }
            if (85 < H7pEauRbg[QsUjA2hMZwNi].z40VaHd && (390 - 310) < H7pEauRbg[QsUjA2hMZwNi].jCHvhBleN60) {
                wrgBkU[QsUjA2hMZwNi] += (4896 - 896);
            }
            if (90 < H7pEauRbg[QsUjA2hMZwNi].z40VaHd) {
                wrgBkU[QsUjA2hMZwNi] += (2565 - 565);
            }
            if (H7pEauRbg[QsUjA2hMZwNi].z40VaHd > 85 && !('Y' != H7pEauRbg[QsUjA2hMZwNi].lUDd4nA5)) {
                wrgBkU[QsUjA2hMZwNi] += 1000;
            }
            if (H7pEauRbg[QsUjA2hMZwNi].jCHvhBleN60 > (787 - 707) && H7pEauRbg[QsUjA2hMZwNi].b86RyPV == 'Y') {
                wrgBkU[QsUjA2hMZwNi] += 850;
            }
            QsUjA2hMZwNi++;
        }
    }
    {
        QsUjA2hMZwNi = 0;
        while (QsUjA2hMZwNi < QSzWKfxY8anm) {
            if (wrgBkU[QsUjA2hMZwNi] > U3wZRN2xJ0K) {
                strcpy (dBY1S3R, H7pEauRbg[QsUjA2hMZwNi].ODRJUc2kWPp);
                U3wZRN2xJ0K = wrgBkU[QsUjA2hMZwNi];
            }
            QsUjA2hMZwNi++;
        }
    }
    printf ("%s\n%d\n", dBY1S3R, U3wZRN2xJ0K);
    {
        QsUjA2hMZwNi = 0;
        while (QsUjA2hMZwNi < QSzWKfxY8anm) {
            MZWKfODXnI += wrgBkU[QsUjA2hMZwNi];
            QsUjA2hMZwNi++;
        }
    }
    printf ("%d\n", MZWKfODXnI);
    return 0;
}

