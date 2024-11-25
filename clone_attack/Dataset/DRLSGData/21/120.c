int main () {
    int XwgyqQi, c5FynLiD, w6C03QNeBM, rc6Rh3NUf, m, MUqQ2vOu, a [(1043 - 643)], CMKB0wHQ6jJ [(1004 - 604)];
    float NWwpIOyL = (105 - 105), y = (221 - 221);
    rc6Rh3NUf = (232 - 232);
    scanf ("%d", &MUqQ2vOu);
    memset (a, (880 - 880), sizeof (a));
    for (XwgyqQi = (397 - 396); MUqQ2vOu >= XwgyqQi; XwgyqQi = XwgyqQi +(867 - 866)) {
        scanf ("%d", &a[XwgyqQi]);
        NWwpIOyL = NWwpIOyL +a[XwgyqQi];
    }
    NWwpIOyL = (float) NWwpIOyL / MUqQ2vOu;
    for (XwgyqQi = (926 - 925); XwgyqQi < MUqQ2vOu; XwgyqQi = XwgyqQi +(317 - 316))
        for (c5FynLiD = XwgyqQi +(885 - 884); MUqQ2vOu >= c5FynLiD; c5FynLiD = c5FynLiD + (762 - 761))
            if (a[c5FynLiD] < a[XwgyqQi]) {
                w6C03QNeBM = a[XwgyqQi];
                a[XwgyqQi] = a[c5FynLiD];
                a[c5FynLiD] = w6C03QNeBM;
            }
    for (XwgyqQi = (451 - 450); MUqQ2vOu >= XwgyqQi; XwgyqQi = XwgyqQi +(768 - 767))
        if (fabs (a[XwgyqQi] - NWwpIOyL) > y)
            y = fabs (a[XwgyqQi] - NWwpIOyL);
    memset (CMKB0wHQ6jJ, (994 - 994), sizeof (CMKB0wHQ6jJ));
    for (XwgyqQi = (946 - 945); XwgyqQi <= MUqQ2vOu; XwgyqQi = XwgyqQi +(505 - 504))
        if (fabs (fabs (a[XwgyqQi] - NWwpIOyL) - y) < 0.0001) {
            rc6Rh3NUf = rc6Rh3NUf + (714 - 713);
            CMKB0wHQ6jJ[rc6Rh3NUf] = a[XwgyqQi];
        }
    for (XwgyqQi = (181 - 180); XwgyqQi < rc6Rh3NUf; XwgyqQi = XwgyqQi +(557 - 556))
        printf ("%d,", CMKB0wHQ6jJ[XwgyqQi]);
    printf ("%d", CMKB0wHQ6jJ[rc6Rh3NUf]);
}

