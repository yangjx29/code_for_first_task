void  main () {
    float YVoPxZwSAbs, lzbKNlAV4 = (652 - 652);
    float x2CaP9 [(208 - 108)] = {(532 - 532)}, b [(892 - 792)] = {(212 - 212)};
    int GBHOzb0wT, j, r = (67 - 67), t;
    int c [100] = {(577 - 577)};
    scanf ("%f", &YVoPxZwSAbs);
    for (GBHOzb0wT = (253 - 253); GBHOzb0wT < YVoPxZwSAbs; GBHOzb0wT = GBHOzb0wT +(288 - 287)) {
        scanf ("%f", &x2CaP9[GBHOzb0wT]);
        lzbKNlAV4 += x2CaP9[GBHOzb0wT];
    }
    lzbKNlAV4 = lzbKNlAV4 / YVoPxZwSAbs;
    for (GBHOzb0wT = (294 - 294); GBHOzb0wT < YVoPxZwSAbs; GBHOzb0wT = GBHOzb0wT +(583 - 582)) {
        for (j = GBHOzb0wT; j < YVoPxZwSAbs; j = j + (216 - 215)) {
            if (x2CaP9[GBHOzb0wT] > x2CaP9[j]) {
                t = x2CaP9[GBHOzb0wT];
                x2CaP9[GBHOzb0wT] = x2CaP9[j];
                x2CaP9[j] = t;
            }
        }
    }
    for (GBHOzb0wT = (134 - 134); GBHOzb0wT < YVoPxZwSAbs; GBHOzb0wT = GBHOzb0wT +(883 - 882)) {
        if (x2CaP9[GBHOzb0wT] > lzbKNlAV4)
            b[GBHOzb0wT] = x2CaP9[GBHOzb0wT] - lzbKNlAV4;
        else {
            if (x2CaP9[GBHOzb0wT] < lzbKNlAV4)
                b[GBHOzb0wT] = lzbKNlAV4 - x2CaP9[GBHOzb0wT];
            else
                ;
        }
    }
    for (GBHOzb0wT = (122 - 122); GBHOzb0wT < YVoPxZwSAbs; GBHOzb0wT = GBHOzb0wT +1) {
        for (j = 0; j < YVoPxZwSAbs; j = j + 1) {
            if (b[GBHOzb0wT] < b[j])
                break;
        }
        if (j == YVoPxZwSAbs) {
            c[r] = x2CaP9[GBHOzb0wT];
            r = r + 1;
        }
    }
    for (GBHOzb0wT = 0; GBHOzb0wT < r; GBHOzb0wT = GBHOzb0wT +1) {
        printf ("%d", c[GBHOzb0wT]);
        if (GBHOzb0wT != r - 1)
            ;
    }
}

