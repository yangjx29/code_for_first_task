int main () {
    int tsZiUuy8VLPx [(1004 - 992)] = {(129 - 129), (260 - 260), (865 - 865), (617 - 617), (898 - 898), (554 - 554), (105 - 105), (452 - 452), (815 - 815), (378 - 378), (931 - 931), (369 - 369)}, vdXt5PhY [(289 - 277)] = {(711 - 711), (172 - 172), (243 - 243), (424 - 424), (209 - 209), (694 - 694), (849 - 849), (345 - 345), (412 - 412), (621 - 621), 0, 0};
    int r0sYdFKTp;
    int tvMSdfZI;
    int KMnU56A;
    int QSnp6mVrIef3;
    int b4FH27;
    int jCsYva;
    int No30XS [(838 - 826)] = {(842 - 811), (86 - 57), (826 - 795), (989 - 959), (265 - 234), (809 - 779), (793 - 762), (266 - 235), (300 - 270), (147 - 116), (815 - 785), (784 - 753)}, ayQcalbCBV6 [(573 - 561)] = {(144 - 113), (622 - 594), (139 - 108), 30, 31, 30, 31, 31, 30, 31, 30, 31};
    scanf ("%d", &QSnp6mVrIef3);
    {
        r0sYdFKTp = 0;
        while ((501 - 489) > r0sYdFKTp) {
            {
                tvMSdfZI = 0;
                while (r0sYdFKTp > tvMSdfZI) {
                    tsZiUuy8VLPx[r0sYdFKTp] = tsZiUuy8VLPx[r0sYdFKTp] + No30XS[tvMSdfZI];
                    vdXt5PhY[r0sYdFKTp] += ayQcalbCBV6[tvMSdfZI];
                    tvMSdfZI++;
                };
            }
            r0sYdFKTp = r0sYdFKTp + 1;
        };
    }
    for (r0sYdFKTp = 0; QSnp6mVrIef3 > r0sYdFKTp; r0sYdFKTp++) {
        scanf ("%d %d %d", &KMnU56A, &b4FH27, &jCsYva);
        if (!(0 != KMnU56A % (472 - 72)) || (!(0 != KMnU56A % (816 - 812)) && !(0 == KMnU56A % 100))) {
            int xYReiEsWPqa = (tsZiUuy8VLPx[b4FH27 - (456 - 455)] - tsZiUuy8VLPx[jCsYva - (394 - 393)] >= 0) ? (tsZiUuy8VLPx[b4FH27 - (278 - 277)] - tsZiUuy8VLPx[jCsYva - (281 - 280)]) : (tsZiUuy8VLPx[jCsYva - (432 - 431)] - tsZiUuy8VLPx[b4FH27 - (999 - 998)]);
            if (xYReiEsWPqa % (517 - 510) == 0)
                ;
            else
                ;
        }
        else {
            int QMuEQIcvT79;
            QMuEQIcvT79 = (vdXt5PhY[b4FH27 - (281 - 280)] - vdXt5PhY[jCsYva - (890 - 889)] >= 0) ? (vdXt5PhY[b4FH27 - (919 - 918)] - vdXt5PhY[jCsYva - 1]) : (vdXt5PhY[jCsYva - 1] - vdXt5PhY[b4FH27 - 1]);
            if (QMuEQIcvT79 % 7 == 0)
                ;
            else
                printf ("NO\n");
        };
    }
    return 0;
}

