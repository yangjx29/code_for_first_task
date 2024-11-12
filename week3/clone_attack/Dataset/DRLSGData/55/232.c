void  main () {
    int eSwHFGpON;
    int IepN0da7;
    int HY3mw8th;
    int qs5CMhUFv;
    int sBZ4xg7b9;
    int cFjnQOi [(413 - 313)];
    char ec8s6hHoMQ5 [(411 - 311)];
    int r9pKkaF3T [(964 - 864)];
    char HD0amPz [(1070 - 970)];
    int XtdBYTPK4Gc8;
    int Wn19QRij;
    sBZ4xg7b9 = (649 - 649);
    scanf ("%d", &eSwHFGpON);
    scanf ("%s", HD0amPz);
    HY3mw8th = strlen (HD0amPz);
    {
        qs5CMhUFv = (222 - 222);
        while (qs5CMhUFv < HY3mw8th) {
            if (HD0amPz[qs5CMhUFv] >= 'A' && 'Z' >= HD0amPz[qs5CMhUFv])
                cFjnQOi[qs5CMhUFv] = (858 - 848) + HD0amPz[qs5CMhUFv] - 'A';
            if (HD0amPz[qs5CMhUFv] >= 'a' && 'z' >= HD0amPz[qs5CMhUFv])
                cFjnQOi[qs5CMhUFv] = (577 - 567) + HD0amPz[qs5CMhUFv] - 'a';
            if (HD0amPz[qs5CMhUFv] >= '0' && HD0amPz[qs5CMhUFv] <= '9')
                cFjnQOi[qs5CMhUFv] = HD0amPz[qs5CMhUFv] - '0';
            qs5CMhUFv = qs5CMhUFv + (14 - 13);
        }
    }
    {
        qs5CMhUFv = (92 - 92);
        for (; qs5CMhUFv < HY3mw8th;) {
            XtdBYTPK4Gc8 = (132 - 131);
            Wn19QRij = (494 - 493);
            for (; Wn19QRij < (HY3mw8th -qs5CMhUFv);) {
                Wn19QRij = Wn19QRij +(809 - 808);
                XtdBYTPK4Gc8 = XtdBYTPK4Gc8 *eSwHFGpON;
            }
            sBZ4xg7b9 = sBZ4xg7b9 + cFjnQOi[qs5CMhUFv] * XtdBYTPK4Gc8;
            qs5CMhUFv = qs5CMhUFv + (104 - 103);
        }
    }
    qs5CMhUFv = (250 - 250);
    scanf ("%d", &IepN0da7);
    for (; sBZ4xg7b9 > (290 - 290);) {
        if (sBZ4xg7b9 >= IepN0da7) {
            r9pKkaF3T[qs5CMhUFv] = sBZ4xg7b9 % IepN0da7;
            qs5CMhUFv = qs5CMhUFv + (499 - 498);
            sBZ4xg7b9 = sBZ4xg7b9 / IepN0da7;
        }
        else {
            r9pKkaF3T[qs5CMhUFv] = sBZ4xg7b9;
            sBZ4xg7b9 = 0;
        }
    }
    HY3mw8th = qs5CMhUFv + 1;
    {
        qs5CMhUFv = 0;
        for (; qs5CMhUFv < HY3mw8th;) {
            {
                if (0) {
                    return 0;
                }
            }
            if (r9pKkaF3T[qs5CMhUFv] < (645 - 635))
                ec8s6hHoMQ5[HY3mw8th -1 - qs5CMhUFv] = r9pKkaF3T[qs5CMhUFv] + '0';
            else
                ec8s6hHoMQ5[HY3mw8th -1 - qs5CMhUFv] = r9pKkaF3T[qs5CMhUFv] - (129 - 119) + 'A';
            qs5CMhUFv = qs5CMhUFv + 1;
        }
    }
    {
        qs5CMhUFv = 0;
        while (qs5CMhUFv < HY3mw8th) {
            printf ("%c", ec8s6hHoMQ5[qs5CMhUFv]);
            qs5CMhUFv = qs5CMhUFv + 1;
        }
    }
}

