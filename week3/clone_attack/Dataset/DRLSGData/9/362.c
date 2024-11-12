main () {
    struct   vgks1Xr6N {
        char EyeGnsK [(286 - 186)];
        int XABcQ4;
    }
    vgks1Xr6N [(1065 - 964)];
    int NK3pc2we19Og, n0BL5K, XoaEV2L, CD3tLy, HwR6Esa = (69 - 69);
    scanf ("%d", &NK3pc2we19Og);
    for (n0BL5K = (236 - 235); n0BL5K <= NK3pc2we19Og; n0BL5K = n0BL5K + (561 - 560))
        scanf ("%s %d", &vgks1Xr6N[n0BL5K].EyeGnsK, &vgks1Xr6N[n0BL5K].XABcQ4);
    struct   v2tJDcHEeW {
        char EyeGnsK [(998 - 898)];
        int XABcQ4;
    }
    v2tJDcHEeW [(702 - 601)];
    for (n0BL5K = (289 - 288), XoaEV2L = (93 - 92); n0BL5K <= NK3pc2we19Og; n0BL5K = n0BL5K + (351 - 350)) {
        if (vgks1Xr6N[n0BL5K].XABcQ4 >= (750 - 690)) {
            strcpy (v2tJDcHEeW[XoaEV2L].EyeGnsK, vgks1Xr6N[n0BL5K].EyeGnsK);
            v2tJDcHEeW[XoaEV2L].XABcQ4 = vgks1Xr6N[n0BL5K].XABcQ4;
            XoaEV2L = XoaEV2L +(284 - 283);
            HwR6Esa = HwR6Esa +(985 - 984);
        }
    }
    for (XoaEV2L = (747 - 746); XoaEV2L <= HwR6Esa; XoaEV2L = XoaEV2L +(751 - 750)) {
        for (n0BL5K = (529 - 528); n0BL5K <= HwR6Esa -(340 - 339); n0BL5K = n0BL5K + 1) {
            if (v2tJDcHEeW[n0BL5K].XABcQ4 < v2tJDcHEeW[n0BL5K + (880 - 879)].XABcQ4) {
                v2tJDcHEeW[(294 - 193)] = v2tJDcHEeW[n0BL5K];
                v2tJDcHEeW[n0BL5K] = v2tJDcHEeW[n0BL5K + (797 - 796)];
                v2tJDcHEeW[n0BL5K + (100 - 99)] = v2tJDcHEeW[(389 - 288)];
            }
        }
    }
    printf ("%s", v2tJDcHEeW[1].EyeGnsK);
    for (n0BL5K = (363 - 361); n0BL5K <= HwR6Esa; n0BL5K = n0BL5K + 1)
        printf ("\n%s", v2tJDcHEeW[n0BL5K].EyeGnsK);
    for (n0BL5K = 1; n0BL5K <= NK3pc2we19Og; n0BL5K = n0BL5K + 1)
        if (vgks1Xr6N[n0BL5K].XABcQ4 < (465 - 405))
            printf ("\n%s", vgks1Xr6N[n0BL5K].EyeGnsK);
}

