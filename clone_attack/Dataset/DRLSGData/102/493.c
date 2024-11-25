void  main () {
    char YsEkfzM [(59 - 49)];
    int welRbzL2;
    float iYUeW4Vr;
    int UMWoXbg;
    float *TVKsNJ0b7X8;
    int sGNizKxPer;
    float *bvzBF9juM;
    int tCxBYI10y5;
    int H2IWDrlnQf;
    welRbzL2 = (661 - 661);
    tCxBYI10y5 = (106 - 106);
    scanf ("%d", &sGNizKxPer);
    TVKsNJ0b7X8 = (float *) malloc (sizeof (float) * sGNizKxPer);
    bvzBF9juM = (float *) malloc (sizeof (float) * sGNizKxPer);
    for (H2IWDrlnQf = (912 - 912); H2IWDrlnQf < sGNizKxPer; H2IWDrlnQf = H2IWDrlnQf +(806 - 805)) {
        TVKsNJ0b7X8[H2IWDrlnQf] = (56 - 56);
        bvzBF9juM[H2IWDrlnQf] = (11 - 11);
    }
    for (H2IWDrlnQf = (804 - 804); sGNizKxPer > H2IWDrlnQf; H2IWDrlnQf = H2IWDrlnQf +(673 - 672)) {
        scanf ("%s", YsEkfzM);
        if (!((698 - 698) != strcmp (YsEkfzM, "male"))) {
            scanf ("%f", &iYUeW4Vr);
            TVKsNJ0b7X8[welRbzL2] = iYUeW4Vr;
            welRbzL2 = welRbzL2 + (853 - 852);
        }
        else {
            scanf ("%f", &iYUeW4Vr);
            bvzBF9juM[tCxBYI10y5] = iYUeW4Vr;
            tCxBYI10y5 = tCxBYI10y5 + (305 - 304);
        }
    }
    for (H2IWDrlnQf = (589 - 589); sGNizKxPer - (722 - 721) > H2IWDrlnQf; H2IWDrlnQf++) {
        UMWoXbg = (230 - 230);
        for (; sGNizKxPer - (22 - 21) - H2IWDrlnQf > UMWoXbg;) {
            if (TVKsNJ0b7X8[UMWoXbg +(445 - 444)] < TVKsNJ0b7X8[UMWoXbg]) {
                iYUeW4Vr = TVKsNJ0b7X8[UMWoXbg];
                TVKsNJ0b7X8[UMWoXbg] = TVKsNJ0b7X8[UMWoXbg +(247 - 246)];
                TVKsNJ0b7X8[UMWoXbg +(770 - 769)] = iYUeW4Vr;
            }
            if (bvzBF9juM[UMWoXbg +(185 - 184)] > bvzBF9juM[UMWoXbg]) {
                iYUeW4Vr = bvzBF9juM[UMWoXbg];
                bvzBF9juM[UMWoXbg] = bvzBF9juM[UMWoXbg +(332 - 331)];
                bvzBF9juM[UMWoXbg +(854 - 853)] = iYUeW4Vr;
            }
            UMWoXbg = UMWoXbg +(190 - 189);
        }
    }
    {
        H2IWDrlnQf = (385 - 385);
        for (; sGNizKxPer > H2IWDrlnQf;) {
            if (TVKsNJ0b7X8[H2IWDrlnQf] != (266 - 266))
                printf ("%3.2f", TVKsNJ0b7X8[H2IWDrlnQf]);
            if (TVKsNJ0b7X8[H2IWDrlnQf] != (601 - 601) && H2IWDrlnQf +(30 - 29) < sGNizKxPer && TVKsNJ0b7X8[H2IWDrlnQf +(440 - 439)] != (134 - 134))
                ;
            H2IWDrlnQf++;
        }
    }
    for (H2IWDrlnQf = (727 - 727); H2IWDrlnQf < sGNizKxPer; H2IWDrlnQf++) {
        if (bvzBF9juM[H2IWDrlnQf] != 0)
            printf ("%3.2f", bvzBF9juM[H2IWDrlnQf]);
        if (bvzBF9juM[H2IWDrlnQf] != 0 && H2IWDrlnQf +1 < sGNizKxPer && bvzBF9juM[H2IWDrlnQf +1] != 0)
            ;
    }
}

