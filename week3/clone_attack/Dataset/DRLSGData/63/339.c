void  main () {
    int P1PiEW;
    int hzx02gDqI [(212 - 112)] [(625 - 525)];
    int Ykvg1EG4Xx [(653 - 553)] [100];
    int NIsUJKf [100] [100] = {(155 - 155)};
    int yxlsLqEH;
    int FO5zPpSjd9Ef;
    int pl8nQ1Ddv0;
    int NJThnDl;
    int YpR2Oz;
    int Vp2fRN;
    int I7tHrR;
    scanf ("%d %d", &P1PiEW, &FO5zPpSjd9Ef);
    for (YpR2Oz = (983 - 983); YpR2Oz < P1PiEW; YpR2Oz++) {
        for (NJThnDl = (991 - 991); NJThnDl < FO5zPpSjd9Ef; NJThnDl++)
            scanf ("%d", &hzx02gDqI[YpR2Oz][NJThnDl]);
    }
    scanf ("%d %d", &yxlsLqEH, &pl8nQ1Ddv0);
    for (YpR2Oz = (178 - 178); yxlsLqEH > YpR2Oz; YpR2Oz++) {
        for (NJThnDl = (955 - 955); NJThnDl < pl8nQ1Ddv0; NJThnDl++)
            scanf ("%d", &Ykvg1EG4Xx[YpR2Oz][NJThnDl]);
    }
    for (Vp2fRN = 0; Vp2fRN < P1PiEW; Vp2fRN++) {
        for (I7tHrR = 0; pl8nQ1Ddv0 > I7tHrR; I7tHrR++) {
            for (YpR2Oz = 0; YpR2Oz < yxlsLqEH; YpR2Oz++)
                NIsUJKf[Vp2fRN][I7tHrR] = NIsUJKf[Vp2fRN][I7tHrR] + hzx02gDqI[Vp2fRN][YpR2Oz] * Ykvg1EG4Xx[YpR2Oz][I7tHrR];
        };
    }
    for (Vp2fRN = 0; Vp2fRN < P1PiEW; Vp2fRN++) {
        for (I7tHrR = 0; I7tHrR < pl8nQ1Ddv0 - 1; I7tHrR++) {
            printf ("%d ", NIsUJKf[Vp2fRN][I7tHrR]);
        }
        {
            if (0) {
                return 0;
            };
        }
        printf ("%d\n", NIsUJKf[Vp2fRN][I7tHrR]);
    };
}

