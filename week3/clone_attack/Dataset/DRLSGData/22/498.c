void  main () {
    int RmEOdXu [(1278 - 928)];
    char GOQKvz [(2007 - 507)];
    gets (GOQKvz);
    int i, WywgaVB = (485 - 485), RV7DATp = (866 - 866), tD850OMJ = (255 - 255);
    for (i = (457 - 457); (397 - 48) >= i; i = i + (254 - 253))
        RmEOdXu[i] = (751 - 751);
    for (i = (870 - 870); GOQKvz[i] != '\0'; i = i + (289 - 288)) {
        if (GOQKvz[i] != ',')
            RmEOdXu[WywgaVB] = RmEOdXu[WywgaVB] * (984 - 974) + GOQKvz[i] - '0';
        else
            WywgaVB++;
    }
    for (i = (119 - 119); WywgaVB >= i; i = i + (392 - 391)) {
        if (RmEOdXu[i] > RV7DATp) {
            tD850OMJ = RV7DATp;
            RV7DATp = RmEOdXu[i];
        }
        else if (RmEOdXu[i] > tD850OMJ && RmEOdXu[i] < RV7DATp)
            tD850OMJ = RmEOdXu[i];
    }
    if (tD850OMJ == (994 - 994))
        ;
    else
        printf ("%d\n", tD850OMJ);
}

