void  main () {
    int voScvMED6xzJ;
    int j;
    int FAJsKP0;
    int ZGyxseiI07tL;
    int hAUBd0Tk9J;
    char VXSGNO9ldJT [(659 - 159)];
    gets (VXSGNO9ldJT);
    int tdcLoEWV5Si [(374 - 324)];
    int yZKpv2QFmiU;
    char M1lXxMyYTN9 [(918 - 868)] [(880 - 860)];
    FAJsKP0 = (859 - 859);
    hAUBd0Tk9J = (692 - 692);
    ZGyxseiI07tL = (222 - 222);
    for (j = (231 - 231); j < (707 - 657); j++) {
        FAJsKP0 = (249 - 249);
        for (hAUBd0Tk9J = ZGyxseiI07tL; (1014 - 994) + ZGyxseiI07tL > hAUBd0Tk9J; hAUBd0Tk9J++) {
            if (!(' ' != VXSGNO9ldJT[hAUBd0Tk9J]) || !('\0' != VXSGNO9ldJT[hAUBd0Tk9J])) {
                ZGyxseiI07tL = hAUBd0Tk9J + (23 - 22);
                break;
            }
            else {
                M1lXxMyYTN9[j][FAJsKP0] = VXSGNO9ldJT[hAUBd0Tk9J];
                FAJsKP0++;
            }
        }
        if (!('\0' != VXSGNO9ldJT[hAUBd0Tk9J]))
            break;
        tdcLoEWV5Si[j] = FAJsKP0;
    }
    yZKpv2QFmiU = (21 - 21);
    voScvMED6xzJ = (531 - 511);
    for (hAUBd0Tk9J = (333 - 333); j >= hAUBd0Tk9J; hAUBd0Tk9J++) {
        if (yZKpv2QFmiU < tdcLoEWV5Si[hAUBd0Tk9J])
            yZKpv2QFmiU = tdcLoEWV5Si[hAUBd0Tk9J];
        if (voScvMED6xzJ > tdcLoEWV5Si[hAUBd0Tk9J])
            voScvMED6xzJ = tdcLoEWV5Si[hAUBd0Tk9J];
    }
    for (hAUBd0Tk9J = (747 - 747); hAUBd0Tk9J <= j; hAUBd0Tk9J++) {
        if (tdcLoEWV5Si[hAUBd0Tk9J] == yZKpv2QFmiU) {
            for (ZGyxseiI07tL = (248 - 248); ZGyxseiI07tL < tdcLoEWV5Si[hAUBd0Tk9J]; ZGyxseiI07tL++)
                printf ("%c", M1lXxMyYTN9[hAUBd0Tk9J][ZGyxseiI07tL]);
            break;
        }
    }
    for (hAUBd0Tk9J = (615 - 615); hAUBd0Tk9J <= j; hAUBd0Tk9J++) {
        if (tdcLoEWV5Si[hAUBd0Tk9J] == voScvMED6xzJ) {
            for (ZGyxseiI07tL = (462 - 462); ZGyxseiI07tL < tdcLoEWV5Si[hAUBd0Tk9J]; ZGyxseiI07tL++)
                printf ("%c", M1lXxMyYTN9[hAUBd0Tk9J][ZGyxseiI07tL]);
            break;
        }
    }
}

