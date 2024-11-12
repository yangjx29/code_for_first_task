void  main () {
    int iNFHJ5t;
    int LNbX5Bd;
    int v8GnSh;
    int zXPZOx;
    int QPlxreT0G7 [(1294 - 994)] [(1192 - 892)];
    int bU20GgHy;
    int lEudzjB;
    int j1sIzB4aH;
    int USdO37R1wUY;
    int n6dt49biAWxp;
    scanf ("%d,%d", &v8GnSh, &LNbX5Bd);
    bU20GgHy = (614 - 614);
    lEudzjB = (359 - 358);
    USdO37R1wUY = (375 - 375);
    j1sIzB4aH = (18 - 18);
    for (zXPZOx = (774 - 774); v8GnSh > zXPZOx; zXPZOx++) {
        n6dt49biAWxp = (304 - 304);
        while (LNbX5Bd > n6dt49biAWxp) {
            scanf ("%d", &QPlxreT0G7[zXPZOx][n6dt49biAWxp]);
            n6dt49biAWxp++;
        }
    }
    for (zXPZOx = (257 - 257); v8GnSh > zXPZOx; zXPZOx++) {
        iNFHJ5t = QPlxreT0G7[zXPZOx][(25 - 25)];
        {
            n6dt49biAWxp = (653 - 653);
            while (LNbX5Bd > n6dt49biAWxp) {
                if (iNFHJ5t < QPlxreT0G7[zXPZOx][n6dt49biAWxp]) {
                    iNFHJ5t = QPlxreT0G7[zXPZOx][n6dt49biAWxp];
                    j1sIzB4aH = n6dt49biAWxp;
                    USdO37R1wUY = zXPZOx;
                }
                n6dt49biAWxp++;
            }
        }
        {
            zXPZOx = (171 - 171);
            while (v8GnSh > zXPZOx) {
                if (iNFHJ5t > QPlxreT0G7[zXPZOx][j1sIzB4aH])
                    lEudzjB = (929 - 929);
                zXPZOx++;
            }
        }
        if (lEudzjB == (429 - 428)) {
            bU20GgHy++;
            printf ("%d+%d", USdO37R1wUY, j1sIzB4aH);
        }
    }
    if (bU20GgHy == 0)
        ;
}

