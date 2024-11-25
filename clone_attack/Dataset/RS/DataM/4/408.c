void  main () {
    int (*leTl2xqK8DdI) [(184 - 24)], DMc0rXs, zARlafCW3, E8LKptcaH, Nb7sMmeH, ljf1k2OaF5y, dysBP5;
    scanf ("%d %d", &Nb7sMmeH, &ljf1k2OaF5y);
    leTl2xqK8DdI = (int (*) [160]) malloc (110 * sizeof (int));
    for (zARlafCW3 = (664 - 664); Nb7sMmeH > zARlafCW3; zARlafCW3 = zARlafCW3 + 1)
        for (DMc0rXs = 0; DMc0rXs < ljf1k2OaF5y; DMc0rXs = DMc0rXs +1)
            scanf ("%d", *(leTl2xqK8DdI + zARlafCW3) + DMc0rXs);
    for (E8LKptcaH = 0; E8LKptcaH < ljf1k2OaF5y; E8LKptcaH = E8LKptcaH +1) {
        DMc0rXs = E8LKptcaH;
        zARlafCW3 = 0;
        while (0 <= DMc0rXs &&zARlafCW3 < Nb7sMmeH) {
            if (DMc0rXs >= 0 && DMc0rXs < ljf1k2OaF5y && zARlafCW3 >= 0 && zARlafCW3 < Nb7sMmeH)
                printf ("%d\n", *(*(leTl2xqK8DdI + zARlafCW3) + DMc0rXs));
            DMc0rXs = DMc0rXs -1;
            zARlafCW3 = zARlafCW3 + 1;
        };
    }
    for (E8LKptcaH = (809 - 808); E8LKptcaH < Nb7sMmeH; E8LKptcaH = E8LKptcaH +1) {
        DMc0rXs = 0;
        zARlafCW3 = E8LKptcaH;
        while (zARlafCW3 < Nb7sMmeH &&DMc0rXs <= ljf1k2OaF5y - 1) {
            DMc0rXs = DMc0rXs +1;
            printf ("%d\n", *(*(leTl2xqK8DdI + zARlafCW3) + ljf1k2OaF5y - DMc0rXs -1));
            zARlafCW3 = zARlafCW3 + 1;
        };
    };
}

