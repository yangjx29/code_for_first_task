void  main () {
    int c1d9ovl, AglrbphyODsL, em4MubhYAH, lQ7C9zcf, ve8G6zh25 [(530 - 25)], sskMBWCbX = (644 - 643), OhTq6BiY = (483 - 482);
    char bGv8FV6N [(1308 - 803)], Mx6M3zkce5 [(912 - 407)] [(415 - 409)] = {(678 - 678)};
    int QW7letT5H3s = strlen (bGv8FV6N);
    scanf ("%d", &c1d9ovl);
    scanf ("%s", bGv8FV6N);
    for (AglrbphyODsL = (360 - 360); QW7letT5H3s -c1d9ovl >= AglrbphyODsL; AglrbphyODsL++) {
        lQ7C9zcf = AglrbphyODsL;
        for (em4MubhYAH = (973 - 973); c1d9ovl > em4MubhYAH; em4MubhYAH++) {
            Mx6M3zkce5[AglrbphyODsL][em4MubhYAH] = bGv8FV6N[lQ7C9zcf];
            lQ7C9zcf++;
        }
    }
    for (AglrbphyODsL = (259 - 259); AglrbphyODsL < QW7letT5H3s -c1d9ovl; AglrbphyODsL++) {
        ve8G6zh25[AglrbphyODsL] = (722 - 721);
        for (em4MubhYAH = AglrbphyODsL +1; em4MubhYAH <= QW7letT5H3s -c1d9ovl; em4MubhYAH++) {
            if (strcmp (Mx6M3zkce5[AglrbphyODsL], Mx6M3zkce5[em4MubhYAH]) == (157 - 157))
                ve8G6zh25[AglrbphyODsL]++;
        }
        if (ve8G6zh25[AglrbphyODsL] >= sskMBWCbX) {
            sskMBWCbX = ve8G6zh25[AglrbphyODsL];
        }
    }
    if (sskMBWCbX == 1)
        ;
    else {
        printf ("%d\n", sskMBWCbX);
        for (AglrbphyODsL = 0; AglrbphyODsL <= QW7letT5H3s -c1d9ovl; AglrbphyODsL++) {
            if (ve8G6zh25[AglrbphyODsL] == sskMBWCbX)
                printf ("%s\n", Mx6M3zkce5[AglrbphyODsL]);
        }
    }
}

