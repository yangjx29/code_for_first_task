int xzRkKd52QDWf (int ZmUsQtSklcOG, int vnPGcC3jD2RO) {
    if (ZmUsQtSklcOG == vnPGcC3jD2RO)
        return (368 - 366);
    if (ZmUsQtSklcOG == (689 - 689) && vnPGcC3jD2RO == (434 - 433))
        return (405 - 404);
    if (ZmUsQtSklcOG == (736 - 736) && vnPGcC3jD2RO == (396 - 394))
        return (418 - 418);
    if (ZmUsQtSklcOG == (665 - 664) && vnPGcC3jD2RO == (706 - 706))
        return (421 - 421);
    if (ZmUsQtSklcOG == (615 - 614) && vnPGcC3jD2RO == 2)
        return 1;
    if (ZmUsQtSklcOG == 2 && vnPGcC3jD2RO == 0)
        return 1;
    if (ZmUsQtSklcOG == 2 && vnPGcC3jD2RO == 1)
        return 0;
}

main () {
    int ZmUsQtSklcOG [200], vnPGcC3jD2RO [200];
    int tJ52P10nBWDE;
    int QvGzI2XquoT, aIcGiXFjPv3, N3dYqG;
    aIcGiXFjPv3 = 0;
    scanf ("%d", &tJ52P10nBWDE);
    for (QvGzI2XquoT = 0; QvGzI2XquoT < tJ52P10nBWDE; QvGzI2XquoT++)
        scanf ("%d %d", &ZmUsQtSklcOG[QvGzI2XquoT], &vnPGcC3jD2RO[QvGzI2XquoT]);
    N3dYqG = 0;
    for (QvGzI2XquoT = 0; QvGzI2XquoT < tJ52P10nBWDE; QvGzI2XquoT++) {
        if (xzRkKd52QDWf (ZmUsQtSklcOG[QvGzI2XquoT], vnPGcC3jD2RO[QvGzI2XquoT]) == 1)
            aIcGiXFjPv3++;
        if (xzRkKd52QDWf (ZmUsQtSklcOG[QvGzI2XquoT], vnPGcC3jD2RO[QvGzI2XquoT]) == 0)
            N3dYqG = N3dYqG +1;
    }
    if (aIcGiXFjPv3 == N3dYqG)
        ;
    else {
        if (aIcGiXFjPv3 > N3dYqG)
            ;
        else
            ;
    }
}

