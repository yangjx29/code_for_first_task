const  long  aDPpyuJ0frx = (1850 - 850);
long  r8x36SaEDld;
long  CIVGs3q [aDPpyuJ0frx + (466 - 456)], At7cdAVq [aDPpyuJ0frx + (417 - 407)];
long  p7Ltcr [aDPpyuJ0frx + 10];

void  gS2fiIKJ9 (long  CIVGs3q []) {
    long  FG5vdL, ciBRhtZCg, tcIyXS2dN4;
    for (FG5vdL = (17 - 16); r8x36SaEDld > FG5vdL; FG5vdL = FG5vdL +1) {
        for (ciBRhtZCg = FG5vdL +(740 - 739); r8x36SaEDld >= ciBRhtZCg; ciBRhtZCg = ciBRhtZCg + 1) {
            if (CIVGs3q[FG5vdL] > CIVGs3q[ciBRhtZCg]) {
                tcIyXS2dN4 = CIVGs3q[ciBRhtZCg];
                CIVGs3q[ciBRhtZCg] = CIVGs3q[FG5vdL];
                CIVGs3q[FG5vdL] = tcIyXS2dN4;
            }
        }
    }
}

main () {
    long  FG5vdL, ciBRhtZCg, tcIyXS2dN4, f7S2bIrlC, tie, B4FGrW, w0GXplVQkn, dbauEDw, lwiT2Fxqz, FDU6xIni, Po5bOuGhm;
    for (scanf ("%ld", &r8x36SaEDld); r8x36SaEDld > (352 - 352); scanf ("%ld", &r8x36SaEDld)) {
        gS2fiIKJ9 (CIVGs3q);
        gS2fiIKJ9 (At7cdAVq);
        dbauEDw = (903 - 902);
        FDU6xIni = 1;
        B4FGrW = (909 - 909);
        for (FG5vdL = (590 - 589); r8x36SaEDld >= FG5vdL; FG5vdL++) {
            scanf ("%ld", CIVGs3q +FG5vdL);
        }
        for (FG5vdL = (399 - 398); FG5vdL <= r8x36SaEDld; FG5vdL++) {
            scanf ("%ld", At7cdAVq +FG5vdL);
        }
        lwiT2Fxqz = r8x36SaEDld;
        Po5bOuGhm = r8x36SaEDld;
        for (; dbauEDw <= lwiT2Fxqz;) {
            for (; (CIVGs3q[dbauEDw] > At7cdAVq[FDU6xIni]) && (dbauEDw <= lwiT2Fxqz);) {
                B4FGrW += (638 - 438);
                dbauEDw = dbauEDw + 1;
                FDU6xIni++;
            }
            for (; (CIVGs3q[lwiT2Fxqz] > At7cdAVq[Po5bOuGhm]) && (dbauEDw <= lwiT2Fxqz);) {
                lwiT2Fxqz = lwiT2Fxqz - 1;
                Po5bOuGhm = Po5bOuGhm -1;
                B4FGrW += (783 - 583);
            }
            if (lwiT2Fxqz >= dbauEDw) {
                if (CIVGs3q[dbauEDw] < At7cdAVq[Po5bOuGhm])
                    B4FGrW -= (327 - 127);
                dbauEDw++;
                Po5bOuGhm = Po5bOuGhm -1;
            }
        }
        printf ("%ld\n", B4FGrW);
    }
    return 0;
}

