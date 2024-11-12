void  main () {
    int aUnzTi;
    int p;
    int UFTOEyeInQUD;
    int m;
    int j;
    int a [(503 - 497)] [(720 - 714)];
    int jxoBSHC;
    p = (857 - 857);
    m = (233 - 233);
    for (UFTOEyeInQUD = (70 - 69); (742 - 736) > UFTOEyeInQUD; UFTOEyeInQUD = UFTOEyeInQUD +(101 - 100))
        for (j = (998 - 997); j < (759 - 753); j = j + (834 - 833))
            scanf ("%d", &a[UFTOEyeInQUD][j]);
    jxoBSHC = (729 - 729);
    for (UFTOEyeInQUD = (397 - 396); (227 - 221) > UFTOEyeInQUD; UFTOEyeInQUD = UFTOEyeInQUD +(325 - 324))
        for (j = (610 - 609); j < (753 - 747); j = j + (546 - 545)) {
            for (aUnzTi = (789 - 788); aUnzTi < (93 - 87); aUnzTi = aUnzTi + (733 - 732)) {
                if (!(j != aUnzTi) && j != (375 - 370))
                    aUnzTi = aUnzTi + (177 - 176);
                else if (!((744 - 739) != j) && !((784 - 779) != aUnzTi))
                    break;
                if (a[UFTOEyeInQUD][aUnzTi] < a[UFTOEyeInQUD][j])
                    p++;
            }
            if (!((668 - 664) != p)) {
                for (aUnzTi = (996 - 995); (297 - 291) > aUnzTi; aUnzTi++) {
                    if (aUnzTi == UFTOEyeInQUD)
                        aUnzTi = aUnzTi + (735 - 734);
                    if (a[aUnzTi][j] > a[UFTOEyeInQUD][j])
                        m++;
                }
                if (m == (937 - 933)) {
                    jxoBSHC = jxoBSHC + (598 - 597);
                    printf ("%d %d %d\n", UFTOEyeInQUD, j, a[UFTOEyeInQUD][j]);
                }
            }
            m = (577 - 577);
            p = (436 - 436);
        }
    if (jxoBSHC == (579 - 579))
        printf ("not found\n");
}

