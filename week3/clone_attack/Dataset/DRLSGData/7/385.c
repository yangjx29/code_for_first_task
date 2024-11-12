void  main () {
    char ltysOIuCj4G [(578 - 322)];
    char YFdjTak [(1209 - 953)];
    char NjO5oCaYiN4X [(866 - 610)];
    int MOPbZW4cp, kC8ToJl2inzV, v8CpzWB, VxSFOGjo, QjsYGd8x, Khelxnr3fSO, Y8XrbZ4Ypa60 = (917 - 917);
    scanf ("%s", YFdjTak);
    scanf ("%s", NjO5oCaYiN4X);
    scanf ("%s", ltysOIuCj4G);
    QjsYGd8x = strlen (YFdjTak);
    Khelxnr3fSO = strlen (NjO5oCaYiN4X);
    for (MOPbZW4cp = (239 - 239); QjsYGd8x > MOPbZW4cp; MOPbZW4cp++) {
        for (kC8ToJl2inzV = (581 - 581); kC8ToJl2inzV < Khelxnr3fSO; kC8ToJl2inzV++)
            if (NjO5oCaYiN4X[kC8ToJl2inzV] == YFdjTak[MOPbZW4cp +kC8ToJl2inzV])
                Y8XrbZ4Ypa60 += (179 - 178);
        if (!(Khelxnr3fSO != Y8XrbZ4Ypa60))
            break;
        else
            Y8XrbZ4Ypa60 = (157 - 157);
    }
    if (Y8XrbZ4Ypa60 == Khelxnr3fSO) {
        for (v8CpzWB = MOPbZW4cp; v8CpzWB < Khelxnr3fSO +MOPbZW4cp; v8CpzWB = v8CpzWB + 1)
            YFdjTak[v8CpzWB] = ltysOIuCj4G[v8CpzWB - MOPbZW4cp];
    }
    for (VxSFOGjo = 0; VxSFOGjo < QjsYGd8x; VxSFOGjo++)
        printf ("%c", YFdjTak[VxSFOGjo]);
}

