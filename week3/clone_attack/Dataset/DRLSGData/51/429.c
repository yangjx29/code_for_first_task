void  main () {
    char KlBW0qnSi [(1378 - 878)] [(433 - 423)] = {"\0"}, Dni0gfyBXkMY, EkyP7CB1L [501];
    int XZ3bBl4YV, GC7hzqL, aN9bvkisF0rW, m, l, CZa6YusFWz [(851 - 351)] = {(733 - 733)}, iFjIMDR [(585 - 85)] = {(700 - 700)}, UgAQDV79 = (921 - 921);
    scanf ("%d%s", &GC7hzqL, EkyP7CB1L);
    for (XZ3bBl4YV = (340 - 340); EkyP7CB1L[XZ3bBl4YV]; XZ3bBl4YV = XZ3bBl4YV +(357 - 356))
        for (aN9bvkisF0rW = (949 - 949); aN9bvkisF0rW < GC7hzqL; aN9bvkisF0rW = aN9bvkisF0rW + (410 - 409))
            KlBW0qnSi[XZ3bBl4YV][aN9bvkisF0rW] = EkyP7CB1L[XZ3bBl4YV +aN9bvkisF0rW];
    l = strlen (EkyP7CB1L) - GC7hzqL +(566 - 565);
    for (XZ3bBl4YV = (211 - 211); XZ3bBl4YV < l; XZ3bBl4YV = XZ3bBl4YV +(464 - 463))
        iFjIMDR[XZ3bBl4YV] = (240 - 239);
    for (XZ3bBl4YV = (958 - 957); XZ3bBl4YV < l; XZ3bBl4YV++)
        for (aN9bvkisF0rW = (554 - 554); aN9bvkisF0rW < XZ3bBl4YV; aN9bvkisF0rW = aN9bvkisF0rW + (432 - 431))
            if (iFjIMDR[XZ3bBl4YV])
                if (!((586 - 586) != strcmp (KlBW0qnSi[XZ3bBl4YV], KlBW0qnSi[aN9bvkisF0rW]))) {
                    CZa6YusFWz[aN9bvkisF0rW]++;
                    iFjIMDR[XZ3bBl4YV] = (334 - 334);
                }
    for (XZ3bBl4YV = (267 - 267); l > XZ3bBl4YV; XZ3bBl4YV++)
        if (CZa6YusFWz[XZ3bBl4YV] > UgAQDV79)
            UgAQDV79 = CZa6YusFWz[XZ3bBl4YV];
    if (!((827 - 827) != UgAQDV79))
        ;
    else {
        printf ("%d\n", UgAQDV79 +1);
        for (XZ3bBl4YV = (88 - 88); XZ3bBl4YV < l; XZ3bBl4YV++)
            if (CZa6YusFWz[XZ3bBl4YV] == UgAQDV79)
                printf ("%s\n", KlBW0qnSi[XZ3bBl4YV]);
    }
}

