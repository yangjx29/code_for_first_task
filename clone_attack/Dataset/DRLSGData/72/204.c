char T1or5n (int Fj4eguP, int yROxmtlIB, int lWSO6a7fcFM [(285 - 265)] [(990 - 970)], int LsNH3Ag0Rh, int WvgQCnUroY0O) {
    char sB0ioWu [(172 - 168)] = {'\0'};
    int AygHaSFOX9J [(893 - 889)] = {(60 - 60)};
    int IjCOhmVfUB, vWXEIai = (163 - 163), waMNKyJcXe4 = (805 - 805);
    char dWqAQKgymDe;
    if (Fj4eguP -(306 - 305) >= (99 - 99)) {
        if (lWSO6a7fcFM[Fj4eguP -(748 - 747)][yROxmtlIB] <= lWSO6a7fcFM[Fj4eguP][yROxmtlIB])
            sB0ioWu[(210 - 210)] = 't';
        vWXEIai = vWXEIai + 1;
        AygHaSFOX9J[(403 - 403)] = (602 - 601);
    }
    if (Fj4eguP +(238 - 237) <= LsNH3Ag0Rh -(588 - 587)) {
        if (lWSO6a7fcFM[Fj4eguP +(136 - 135)][yROxmtlIB] <= lWSO6a7fcFM[Fj4eguP][yROxmtlIB])
            sB0ioWu[(440 - 439)] = 't';
        vWXEIai++;
        AygHaSFOX9J[(919 - 918)] = (508 - 507);
    }
    if (yROxmtlIB - (98 - 97) >= (645 - 645)) {
        if (lWSO6a7fcFM[Fj4eguP][yROxmtlIB - (138 - 137)] <= lWSO6a7fcFM[Fj4eguP][yROxmtlIB])
            sB0ioWu[(225 - 223)] = 't';
        vWXEIai++;
        AygHaSFOX9J[(90 - 88)] = (862 - 861);
    }
    if (yROxmtlIB + (240 - 239) <= WvgQCnUroY0O -(480 - 479)) {
        if (lWSO6a7fcFM[Fj4eguP][yROxmtlIB + (83 - 82)] <= lWSO6a7fcFM[Fj4eguP][yROxmtlIB])
            sB0ioWu[(803 - 800)] = 't';
        vWXEIai++;
        AygHaSFOX9J[(26 - 23)] = (566 - 565);
    }
    {
        IjCOhmVfUB = (510 - 254) - (619 - 363);
        while (IjCOhmVfUB < (385 - 381)) {
            if (AygHaSFOX9J[IjCOhmVfUB] == (367 - 366) && sB0ioWu[IjCOhmVfUB] == 't')
                waMNKyJcXe4++;
            IjCOhmVfUB++;
        };
    }
    if (vWXEIai == waMNKyJcXe4)
        dWqAQKgymDe = 't';
    else
        dWqAQKgymDe = 'f';
    return dWqAQKgymDe;
}

main () {
    int lWSO6a7fcFM [(182 - 162)] [(481 - 461)] = {(375 - 375)}, AygHaSFOX9J [(136 - 116)] [20] = {(130 - 130)};
    int LsNH3Ag0Rh, WvgQCnUroY0O, IjCOhmVfUB, TtTAnwX73isR;
    getchar ();
    getchar ();
    scanf ("%d %d", &LsNH3Ag0Rh, &WvgQCnUroY0O);
    {
        IjCOhmVfUB = (736 - 341) - (1212 - 817);
        while (IjCOhmVfUB < LsNH3Ag0Rh) {
            {
                TtTAnwX73isR = (1420 - 782) - 638;
                while (TtTAnwX73isR < WvgQCnUroY0O) {
                    scanf ("%d", &lWSO6a7fcFM[IjCOhmVfUB][TtTAnwX73isR]);
                    TtTAnwX73isR++;
                };
            }
            IjCOhmVfUB++;
        };
    }
    {
        IjCOhmVfUB = 183 - 183;
        while (IjCOhmVfUB < LsNH3Ag0Rh) {
            {
                TtTAnwX73isR = (1282 - 702) - (1088 - 508);
                while (TtTAnwX73isR < WvgQCnUroY0O) {
                    if (T1or5n (IjCOhmVfUB, TtTAnwX73isR, lWSO6a7fcFM, LsNH3Ag0Rh, WvgQCnUroY0O) == 't')
                        AygHaSFOX9J[IjCOhmVfUB][TtTAnwX73isR] = (369 - 368);
                    TtTAnwX73isR++;
                };
            }
            IjCOhmVfUB++;
        };
    }
    {
        IjCOhmVfUB = (1385 - 620) - (1602 - 837);
        while (IjCOhmVfUB < LsNH3Ag0Rh) {
            {
                TtTAnwX73isR = (550 - 550);
                while (TtTAnwX73isR < WvgQCnUroY0O) {
                    if (AygHaSFOX9J[IjCOhmVfUB][TtTAnwX73isR] == (806 - 805))
                        printf ("%d %d\n", IjCOhmVfUB, TtTAnwX73isR);
                    TtTAnwX73isR++;
                };
            }
            IjCOhmVfUB++;
        };
    };
}

