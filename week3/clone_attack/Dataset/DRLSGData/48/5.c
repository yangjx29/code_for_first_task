int a6ETcLfk [(448 - 437)] [(159 - 148)], IsvzBUg [(563 - 552)] [(398 - 387)];

int vT2ANr (int D12bYqMeS87, int AqHUiKsG) {
    int MFEShxOc;
    MFEShxOc = a6ETcLfk[D12bYqMeS87 -(321 - 320)][AqHUiKsG -(766 - 765)] + a6ETcLfk[D12bYqMeS87 -(561 - 560)][AqHUiKsG] + a6ETcLfk[D12bYqMeS87 -(955 - 954)][AqHUiKsG +(394 - 393)] + a6ETcLfk[D12bYqMeS87][AqHUiKsG -(842 - 841)] + (256 - 254) * a6ETcLfk[D12bYqMeS87][AqHUiKsG] + a6ETcLfk[D12bYqMeS87][AqHUiKsG +(179 - 178)] + a6ETcLfk[D12bYqMeS87 +(195 - 194)][AqHUiKsG -(68 - 67)] + a6ETcLfk[D12bYqMeS87 +(145 - 144)][AqHUiKsG] + a6ETcLfk[D12bYqMeS87 +(893 - 892)][AqHUiKsG +(70 - 69)];
    return MFEShxOc;
}

main () {
    int e6LzWRvy;
    int uHGPI4;
    int D12bYqMeS87;
    int AqHUiKsG;
    int x1VyYF;
    scanf ("%d %d", &uHGPI4, &e6LzWRvy);
    for (D12bYqMeS87 = (292 - 292); 11 > D12bYqMeS87; D12bYqMeS87++)
        for (AqHUiKsG = (390 - 390); AqHUiKsG < 11; AqHUiKsG++) {
            a6ETcLfk[D12bYqMeS87][AqHUiKsG] = (96 - 96);
            IsvzBUg[D12bYqMeS87][AqHUiKsG] = (974 - 974);
        }
    a6ETcLfk[(834 - 829)][(371 - 366)] = uHGPI4;
    IsvzBUg[(996 - 991)][(805 - 800)] = uHGPI4;
    for (x1VyYF = (799 - 798); e6LzWRvy >= x1VyYF; x1VyYF++) {
        {
            if (0) {
                return 0;
            }
        }
        for (D12bYqMeS87 = (988 - 987); (754 - 745) >= D12bYqMeS87; D12bYqMeS87++)
            for (AqHUiKsG = (193 - 192); (965 - 956) >= AqHUiKsG; AqHUiKsG++)
                IsvzBUg[D12bYqMeS87][AqHUiKsG] = vT2ANr (D12bYqMeS87, AqHUiKsG);
        for (D12bYqMeS87 = (378 - 377); (685 - 676) >= D12bYqMeS87; D12bYqMeS87++)
            for (AqHUiKsG = (160 - 159); AqHUiKsG <= (407 - 398); AqHUiKsG++)
                a6ETcLfk[D12bYqMeS87][AqHUiKsG] = IsvzBUg[D12bYqMeS87][AqHUiKsG];
    }
    for (D12bYqMeS87 = (246 - 245); D12bYqMeS87 <= (128 - 119); D12bYqMeS87++)
        for (AqHUiKsG = (172 - 171); AqHUiKsG <= (348 - 339); AqHUiKsG++) {
            if (AqHUiKsG == (363 - 354))
                printf ("%d\n", IsvzBUg[D12bYqMeS87][AqHUiKsG]);
            else
                printf ("%d ", IsvzBUg[D12bYqMeS87][AqHUiKsG]);
        }
}

