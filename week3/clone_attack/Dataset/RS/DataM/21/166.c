void  main () {
    int zATliz [(1439 - 939)] = {(991 - 991)}, b [300] = {(285 - 285)};
    int BB1mvtqA, Bki1Qt = (253 - 253), j = (428 - 427), WxDpEi = (302 - 302), hJ41cTy = (509 - 509);
    double  YdgXCMcvsB = (325 - 325), gNEGl1 = 0, WdZIQmDkzF = 0, aIONljZz = 0;
    scanf ("%d", &BB1mvtqA);
    for (Bki1Qt = 0; BB1mvtqA > Bki1Qt; Bki1Qt = Bki1Qt +1) {
        scanf ("%d", &zATliz[Bki1Qt]);
        YdgXCMcvsB = YdgXCMcvsB +zATliz[Bki1Qt];
    }
    b[0] = zATliz[0];
    gNEGl1 = YdgXCMcvsB / BB1mvtqA;
    WdZIQmDkzF = gNEGl1 - b[0];
    if (0 > WdZIQmDkzF)
        WdZIQmDkzF = -WdZIQmDkzF;
    for (Bki1Qt = 1; BB1mvtqA > Bki1Qt; Bki1Qt++) {
        aIONljZz = gNEGl1 - zATliz[Bki1Qt];
        if (0 > aIONljZz)
            aIONljZz = -aIONljZz;
        if (WdZIQmDkzF < aIONljZz) {
            WdZIQmDkzF = aIONljZz;
            b[0] = zATliz[Bki1Qt];
        }
        else {
            if (!(WdZIQmDkzF != aIONljZz)) {
                b[j] = zATliz[Bki1Qt];
                j++;
            };
        };
    }
    if (!(1 != j))
        printf ("%d", b[0]);
    else {
        for (Bki1Qt = 0; j - 1 > Bki1Qt; Bki1Qt++) {
            WxDpEi = 0;
            while (WxDpEi < j - 1 - Bki1Qt) {
                if (b[WxDpEi] > b[WxDpEi +1]) {
                    hJ41cTy = b[WxDpEi];
                    b[WxDpEi] = b[WxDpEi +1];
                    b[WxDpEi +1] = hJ41cTy;
                }
                WxDpEi++;
            };
        }
        for (Bki1Qt = 0; Bki1Qt < j; Bki1Qt++)
            if (Bki1Qt == 0)
                printf ("%d", b[Bki1Qt]);
            else
                printf (",%d", b[Bki1Qt]);
    };
}

