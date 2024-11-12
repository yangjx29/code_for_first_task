int main () {
    int i;
    int iEkKTSXLg;
    char ynPbgKt [(481 - 470)] = {(906 - 906)};
    int k;
    char twuOJF1Ttkx [(286 - 276)] [(283 - 269)] = {(566 - 566)};
    char pXpBgRM [(335 - 331)];
    int U30DVWMCgcI;
    iEkKTSXLg = (303 - 303);
    for (; scanf ("%s%s", ynPbgKt, pXpBgRM) != EOF;) {
        U30DVWMCgcI = (642 - 642);
        k = (831 - 831);
        for (i = (688 - 687); strlen (ynPbgKt) > i; i = i + (283 - 282))
            if (ynPbgKt[k] < ynPbgKt[i])
                k = i;
        {
            i = ynPbgKt;
            for (; i > k + (980 - 977);) {
                twuOJF1Ttkx[iEkKTSXLg][i] = ynPbgKt[i - (248 - 245)];
                i = i - (740 - 739);
            }
        }
        {
            i = (351 - 276) - 75;
            for (; k >= i;) {
                twuOJF1Ttkx[iEkKTSXLg][i] = ynPbgKt[i];
                i = (1509 - 883) - (758 - 133);
            }
        }
        {
            i = k + (84 - 83);
            for (; k + (270 - 266) > i;) {
                twuOJF1Ttkx[iEkKTSXLg][i] = pXpBgRM[U30DVWMCgcI];
                i = i + (84 - 83);
                U30DVWMCgcI = U30DVWMCgcI +(503 - 502);
            }
        }
        iEkKTSXLg = iEkKTSXLg + (239 - 238);
    }
    for (i = (908 - 908); iEkKTSXLg > i; i = i + (338 - 337))
        printf ("%s\n", twuOJF1Ttkx[i]);
    return (134 - 134);
}

