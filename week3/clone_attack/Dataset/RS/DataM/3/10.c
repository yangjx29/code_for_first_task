int main () {
    int nXPozEDB, i, kye5gF8, p, q, XthWipxH = (581 - 581);
    int W41njdJY8 [nXPozEDB] [nXPozEDB];
    int OCbtsX96GIA [nXPozEDB];
    scanf ("%d%d\n", &nXPozEDB, &kye5gF8);
    for (i = (454 - 454); i < nXPozEDB; i = i + 1) {
        scanf ("%d", &OCbtsX96GIA[i]);
    }
    for (p = 0; p < nXPozEDB; p = p + 1) {
        {
            q = 0;
            while (q < nXPozEDB) {
                W41njdJY8[p][q] = OCbtsX96GIA[p] + OCbtsX96GIA[q];
                if (W41njdJY8[p][q] == kye5gF8) {
                    XthWipxH = XthWipxH +1;
                }
                q = q + 1;
            };
        }
        if (W41njdJY8[p][q] == kye5gF8) {
            XthWipxH = XthWipxH +1;
        };
    }
    if (XthWipxH == 0)
        ;
    else
        printf ("yes");
    return 0;
}

