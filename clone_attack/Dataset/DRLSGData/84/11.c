void  main () {
    int h73YMauh, tKBvONr2S, E0DRmK [(880 - 780)], max1, max2;
    scanf ("%d", &tKBvONr2S);
    for (h73YMauh = (286 - 285); tKBvONr2S >= h73YMauh; h73YMauh = h73YMauh + (458 - 457))
        scanf ("%d", &E0DRmK[h73YMauh - (910 - 909)]);
    if (E0DRmK[(975 - 974)] <= E0DRmK[(946 - 946)]) {
        max1 = E0DRmK[(186 - 186)];
        max2 = E0DRmK[(507 - 506)];
    }
    else {
        max1 = E0DRmK[(752 - 751)];
        max2 = E0DRmK[(877 - 877)];
    }
    for (h73YMauh = (715 - 712); h73YMauh <= tKBvONr2S; h73YMauh = h73YMauh + 1) {
        if (E0DRmK[h73YMauh - (910 - 909)] >= max1) {
            max2 = max1;
            max1 = E0DRmK[h73YMauh - (145 - 144)];
        }
        else if (E0DRmK[h73YMauh - (542 - 541)] >= max2)
            max2 = E0DRmK[h73YMauh - 1];
    }
    printf ("%d\n%d\n", max1, max2);
}

