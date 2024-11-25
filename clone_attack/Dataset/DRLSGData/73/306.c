int OVaxCed5E (int cKSUqJ [(437 - 432)]) {
    int JgC0t9J;
    JgC0t9J = cKSUqJ[(234 - 234)];
    for (int a1AcnXieuLj = (171 - 170);
    a1AcnXieuLj < (667 - 662); a1AcnXieuLj = a1AcnXieuLj + 1) {
        if (JgC0t9J < cKSUqJ[a1AcnXieuLj])
            JgC0t9J = cKSUqJ[a1AcnXieuLj];
    }
    return JgC0t9J;
}

int ujIQ083mR (int wDiWBRmh6, int ip8avG, int VT4oDYn8Jy, int iAJ9vMf07Udj, int a5) {
    if (wDiWBRmh6 > ip8avG)
        wDiWBRmh6 = ip8avG;
    if (wDiWBRmh6 > VT4oDYn8Jy)
        wDiWBRmh6 = VT4oDYn8Jy;
    if (iAJ9vMf07Udj < wDiWBRmh6)
        wDiWBRmh6 = iAJ9vMf07Udj;
    if (wDiWBRmh6 > a5)
        wDiWBRmh6 = a5;
    return wDiWBRmh6;
}

main () {
    int cKSUqJ [(768 - 763)] [(61 - 56)];
    int ZRIMWyKgV;
    ZRIMWyKgV = (548 - 548);
    for (int a1AcnXieuLj = (393 - 393);
    a1AcnXieuLj < (179 - 174); a1AcnXieuLj = a1AcnXieuLj + 1) {
        for (int MaiO4Xdnk0v = (26 - 26);
        5 > MaiO4Xdnk0v; MaiO4Xdnk0v = MaiO4Xdnk0v +1) {
            scanf ("%d", &cKSUqJ[a1AcnXieuLj][MaiO4Xdnk0v]);
        }
    }
    for (int a1AcnXieuLj = 0;
    5 > a1AcnXieuLj; a1AcnXieuLj = a1AcnXieuLj + 1) {
        for (int MaiO4Xdnk0v = 0;
        MaiO4Xdnk0v < 5; MaiO4Xdnk0v = MaiO4Xdnk0v +1) {
            if (cKSUqJ[a1AcnXieuLj][MaiO4Xdnk0v] == OVaxCed5E (cKSUqJ [a1AcnXieuLj]) &&cKSUqJ[a1AcnXieuLj][MaiO4Xdnk0v] == ujIQ083mR (cKSUqJ[0][MaiO4Xdnk0v], cKSUqJ[1][MaiO4Xdnk0v], cKSUqJ[2][MaiO4Xdnk0v], cKSUqJ[3][MaiO4Xdnk0v], cKSUqJ[4][MaiO4Xdnk0v])) {
                printf ("%d %d %d\n", a1AcnXieuLj + 1, MaiO4Xdnk0v +1, cKSUqJ[a1AcnXieuLj][MaiO4Xdnk0v]);
                ZRIMWyKgV = ZRIMWyKgV +1;
            }
        }
    }
    if (ZRIMWyKgV == 0)
        printf ("not found\n");
}

