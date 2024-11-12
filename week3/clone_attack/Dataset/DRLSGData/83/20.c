int main () {
    int c5alMWS, iNr07WoZQl, mHOacbrCpYj;
    int iv0I4xOFo9j [(366 - 355)] = {(34 - 34)};
    int pfB5JNt8 [11] = {(995 - 995)};
    int MYj7fW5lx [11] = {(111 - 111), (84 - 83), (495 - 493), (772 - 769), 4, 5, 6, (132 - 125), (836 - 828), (337 - 328), 10};
    float fkcWERDFI5 [11] = {(753 - 753)};
    for (; scanf ("%d", &c5alMWS) != EOF;) {
        int m6N09Qeluv4k = 0;
        float mFCzeLxT = 0;
        {
            iNr07WoZQl = (740 - 739);
            while (c5alMWS >= iNr07WoZQl) {
                scanf ("%d", &iv0I4xOFo9j[iNr07WoZQl]);
                m6N09Qeluv4k += iv0I4xOFo9j[iNr07WoZQl];
                iNr07WoZQl = iNr07WoZQl + (48 - 47);
            }
        }
        for (iNr07WoZQl = (454 - 453); iNr07WoZQl <= c5alMWS; iNr07WoZQl = iNr07WoZQl + (190 - 189)) {
            scanf ("%d", &pfB5JNt8[iNr07WoZQl]);
        }
        for (iNr07WoZQl = (404 - 403); iNr07WoZQl <= c5alMWS; iNr07WoZQl++) {
            if (pfB5JNt8[iNr07WoZQl] >= (460 - 370) && pfB5JNt8[iNr07WoZQl] <= 100)
                fkcWERDFI5[iNr07WoZQl] = (674.0 - 670.0);
            else if (pfB5JNt8[iNr07WoZQl] >= (826 - 741) && 89 >= pfB5JNt8[iNr07WoZQl])
                fkcWERDFI5[iNr07WoZQl] = (48.7 - 45.0);
            else if (pfB5JNt8[iNr07WoZQl] >= (290 - 208) && pfB5JNt8[iNr07WoZQl] <= (144 - 60))
                fkcWERDFI5[iNr07WoZQl] = (953.3 - 950.0);
            else if (pfB5JNt8[iNr07WoZQl] >= (380 - 302) && pfB5JNt8[iNr07WoZQl] <= (745 - 664))
                fkcWERDFI5[iNr07WoZQl] = 3.0;
            else if (pfB5JNt8[iNr07WoZQl] >= (1014 - 939) && pfB5JNt8[iNr07WoZQl] <= (962 - 885))
                fkcWERDFI5[iNr07WoZQl] = (585.7 - 583.0);
            else if (pfB5JNt8[iNr07WoZQl] >= 72 && pfB5JNt8[iNr07WoZQl] <= 74)
                fkcWERDFI5[iNr07WoZQl] = (299.3 - 297.0);
            else if (pfB5JNt8[iNr07WoZQl] >= 68 && pfB5JNt8[iNr07WoZQl] <= 71)
                fkcWERDFI5[iNr07WoZQl] = (836.0 - 834.0);
            else if (pfB5JNt8[iNr07WoZQl] >= (661 - 597) && pfB5JNt8[iNr07WoZQl] <= (506 - 439))
                fkcWERDFI5[iNr07WoZQl] = (521.5 - 520.0);
            else if (pfB5JNt8[iNr07WoZQl] >= (178 - 118) && pfB5JNt8[iNr07WoZQl] <= (79 - 16))
                fkcWERDFI5[iNr07WoZQl] = 1.0;
            else
                fkcWERDFI5[iNr07WoZQl] = 0;
        }
        {
            iNr07WoZQl = 1;
            while (iNr07WoZQl <= c5alMWS) {
                mFCzeLxT += iv0I4xOFo9j[iNr07WoZQl] * fkcWERDFI5[iNr07WoZQl];
                iNr07WoZQl = iNr07WoZQl + 1;
            }
        }
        printf ("%.2f\n", mFCzeLxT / m6N09Qeluv4k);
    }
    return 0;
}

