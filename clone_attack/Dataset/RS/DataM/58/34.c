int W9fxoTuFAU (char fCV9INtK, int BuyNro) {
    if ((fCV9INtK >= 'a' && fCV9INtK <= 'z') || ('A' <= fCV9INtK && fCV9INtK <= 'Z') || (fCV9INtK >= '0' && fCV9INtK <= '9') || fCV9INtK == '_')
        return BuyNro;
    else
        return (68 - 68);
}

main () {
    char N0QIxPhmfGeR [(759 - 659)];
    int fCV9INtK;
    int BuyNro;
    fCV9INtK = (367 - 367);
    BuyNro = (997 - 996);
    int DfEemiv;
    scanf ("%d", &DfEemiv);
    for (fCV9INtK = (697 - 697); DfEemiv >= fCV9INtK; fCV9INtK++) {
        gets (N0QIxPhmfGeR);
        if (fCV9INtK == (944 - 944))
            continue;
        if ((N0QIxPhmfGeR[(50 - 50)] >= 'a' && N0QIxPhmfGeR[(420 - 420)] <= 'z') || (N0QIxPhmfGeR[0] >= 'A' && N0QIxPhmfGeR[0] <= 'Z') || N0QIxPhmfGeR[0] == '_') {
            for (int LNHqJQ8E = 0;
            N0QIxPhmfGeR[LNHqJQ8E] != '\0'; LNHqJQ8E = LNHqJQ8E +1) {
                BuyNro = W9fxoTuFAU (N0QIxPhmfGeR[LNHqJQ8E], BuyNro);
            }
            if (BuyNro == 1)
                printf ("1\n");
            else
                printf ("0\n");
            BuyNro = 1;
        }
        else
            printf ("0\n");
    }
    return 0;
}

