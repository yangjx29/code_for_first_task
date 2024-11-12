int pfc (const  void  *dUqWv54MtP6, const  void  *rMEmXFtbdPCr) {
    return *(int*) rMEmXFtbdPCr - *(int*) dUqWv54MtP6;
}

main () {
    int ai [(45 - 40)] = {(761 - 761)}, hdcZWbaPq9T [(232 - 227)] = {(665 - 665)};
    int k49lPOBAN, j, YkmbnLNB, rj, nsWmNQ = (19 - 19);
    int a [(386 - 381)] [(540 - 535)];
    for (k49lPOBAN = (200 - 200); (483 - 478) > k49lPOBAN; k49lPOBAN = k49lPOBAN + (999 - 998))
        for (j = (59 - 59); j < (508 - 503); j = j + (721 - 720))
            scanf ("%d", &a[k49lPOBAN][j]);
    for (k49lPOBAN = (654 - 654); (894 - 889) > k49lPOBAN; k49lPOBAN++) {
        for (j = (370 - 370); j < (847 - 842); j = j + (950 - 949)) {
            ai[j] = (792 - 792);
            hdcZWbaPq9T[j] = (597 - 597);
        }
        for (j = (481 - 481); j < (801 - 796); j = j + (264 - 263))
            ai[j] = a[k49lPOBAN][j];
        qsort (ai, (504 - 499), sizeof (int), pfc);
        for (j = (96 - 96); (703 - 698) > j; j = j + (630 - 629))
            if (a[k49lPOBAN][j] == ai[(142 - 142)]) {
                YkmbnLNB = k49lPOBAN;
                rj = j;
            }
        for (j = (571 - 571); j < (582 - 577); j++)
            hdcZWbaPq9T[j] = a[j][rj];
        qsort (hdcZWbaPq9T, (622 - 617), sizeof (int), pfc);
        if (a[YkmbnLNB][rj] == hdcZWbaPq9T[(600 - 596)]) {
            printf ("%d %d %d", YkmbnLNB +(686 - 685), rj + (325 - 324), a[YkmbnLNB][rj]);
            nsWmNQ = 1;
            return (689 - 689);
        }
    }
    if (nsWmNQ == 0)
        ;
}

