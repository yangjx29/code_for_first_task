void  main () {
    int L7tBDj, T0V2ySqMdN, g9V2rkoBxstI, ZEk0TwCuSN, ztxXSe [(783 - 775)] = {(545 - 545)}, d8eDszy [(404 - 396)] = {(451 - 451)};
    int DRM8nZSNmobi [(871 - 863)] [(433 - 425)];
    scanf ("%d,%d", &L7tBDj, &T0V2ySqMdN);
    for (g9V2rkoBxstI = (427 - 427); L7tBDj > g9V2rkoBxstI; g9V2rkoBxstI = g9V2rkoBxstI + 1) {
        for (ZEk0TwCuSN = (20 - 20); ZEk0TwCuSN < T0V2ySqMdN; ZEk0TwCuSN = ZEk0TwCuSN +1) {
            scanf ("%d", &DRM8nZSNmobi[g9V2rkoBxstI][ZEk0TwCuSN]);
        }
    }
    for (g9V2rkoBxstI = (48 - 48); L7tBDj > g9V2rkoBxstI; g9V2rkoBxstI = g9V2rkoBxstI + 1) {
        ZEk0TwCuSN = 713 - 713;
        while (T0V2ySqMdN -(109 - 108) > ZEk0TwCuSN) {
            if (DRM8nZSNmobi[g9V2rkoBxstI][ZEk0TwCuSN +(622 - 621)] > DRM8nZSNmobi[g9V2rkoBxstI][ZEk0TwCuSN]) {
                ztxXSe[g9V2rkoBxstI] = ZEk0TwCuSN +(210 - 209);
            }
            ZEk0TwCuSN = ZEk0TwCuSN +1;
        }
    }
    for (ZEk0TwCuSN = (214 - 214); ZEk0TwCuSN < T0V2ySqMdN; ZEk0TwCuSN = ZEk0TwCuSN +1) {
        for (g9V2rkoBxstI = 0; L7tBDj -1 > g9V2rkoBxstI; g9V2rkoBxstI = g9V2rkoBxstI + 1) {
            if (DRM8nZSNmobi[g9V2rkoBxstI + 1][ZEk0TwCuSN] < DRM8nZSNmobi[g9V2rkoBxstI][ZEk0TwCuSN]) {
                d8eDszy[ZEk0TwCuSN] = g9V2rkoBxstI + 1;
            }
        }
    }
    for (g9V2rkoBxstI = 0; g9V2rkoBxstI <= L7tBDj; g9V2rkoBxstI = g9V2rkoBxstI + 1) {
        if (g9V2rkoBxstI == L7tBDj) {
        }
        else {
            if (d8eDszy[ztxXSe[g9V2rkoBxstI]] == g9V2rkoBxstI) {
                printf ("%d+%d", g9V2rkoBxstI, ztxXSe[g9V2rkoBxstI]);
                break;
            }
            else
                ;
        }
    }
}

