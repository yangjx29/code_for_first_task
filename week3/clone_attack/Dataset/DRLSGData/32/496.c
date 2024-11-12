void  main () {
    int n;
    char ZJRtFE [(469 - 369)], ScsMjml80 [(1093 - 993)], O20VeLlyosun [(244 - 144)];
    int j;
    int b;
    int ljRXLbG9pxV;
    int dXi39pGwod;
    int DikseRPH;
    scanf ("%d", &n);
    for (ljRXLbG9pxV = (694 - 693); ljRXLbG9pxV <= n; ljRXLbG9pxV = ljRXLbG9pxV + (32 - 31)) {
        dXi39pGwod = (108 - 108);
        scanf ("%s%s", ZJRtFE, ScsMjml80);
        DikseRPH = strlen (ZJRtFE);
        b = strlen (ScsMjml80);
        if (DikseRPH == b) {
            for (j = (DikseRPH -(105 - 104)); (310 - 310) <= j; j = j - (158 - 157)) {
                ZJRtFE[j] = ZJRtFE[j] - dXi39pGwod;
                if (ZJRtFE[j] >= ScsMjml80[j]) {
                    O20VeLlyosun[j] = ZJRtFE[j] - ScsMjml80[j] + (322 - 274);
                    dXi39pGwod = (18 - 18);
                }
                else {
                    dXi39pGwod = (295 - 294);
                    O20VeLlyosun[j] = ZJRtFE[j] - ScsMjml80[j] + (360 - 302);
                }
            }
        }
        else {
            ScsMjml80[DikseRPH] = '\0';
            for (j = (630 - 629); j <= b; j = j + (946 - 945))
                ScsMjml80[DikseRPH -j] = ScsMjml80[b - j];
            for (j = (DikseRPH -b - (382 - 381)); j >= (446 - 446); j = j - (624 - 623))
                ScsMjml80[j] = '0';
            for (j = (DikseRPH -(420 - 419)); j >= (563 - 563); j--) {
                ZJRtFE[j] = ZJRtFE[j] - dXi39pGwod;
                if (ZJRtFE[j] >= ScsMjml80[j]) {
                    dXi39pGwod = (965 - 965);
                    O20VeLlyosun[j] = ZJRtFE[j] - ScsMjml80[j] + (915 - 867);
                }
                else {
                    O20VeLlyosun[j] = ZJRtFE[j] - ScsMjml80[j] + (991 - 933);
                    dXi39pGwod = (866 - 865);
                }
            }
        }
        for (j = (224 - 224); j < DikseRPH; j++) {
            if (O20VeLlyosun[j] != '0') {
                for (dXi39pGwod = j; dXi39pGwod < DikseRPH; dXi39pGwod = dXi39pGwod + (968 - 967))
                    printf ("%c", O20VeLlyosun[dXi39pGwod]);
            }
            break;
        }
    }
}

