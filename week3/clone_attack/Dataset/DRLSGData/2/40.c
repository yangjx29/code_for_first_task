void  main () {
    struct   tXYf5E3xN {
        int kgwKnqi3Uk;
        char oYT5Lspuc8Dj [(385 - 359)];
    }
    tXYf5E3xN [(150 - 50)] = {(742 - 742), ""};
    int bjSZ4yLT, L7nBdR, nGOl0B6P7M, U4Ko7dEV [(197 - 171)] = {(822 - 822)}, bcymf82 = (868 - 868), wQcsmtkz, h;
    scanf ("%d", &bjSZ4yLT);
    for (L7nBdR = (299 - 299); bjSZ4yLT > L7nBdR; L7nBdR = L7nBdR +1) {
        scanf ("%d%s", &tXYf5E3xN[L7nBdR].kgwKnqi3Uk, tXYf5E3xN[L7nBdR].oYT5Lspuc8Dj);
    }
    for (L7nBdR = (52 - 52); L7nBdR < bjSZ4yLT; L7nBdR++) {
        bcymf82 = strlen (tXYf5E3xN[L7nBdR].oYT5Lspuc8Dj);
        for (nGOl0B6P7M = (432 - 432); nGOl0B6P7M < bcymf82; nGOl0B6P7M = nGOl0B6P7M + 1) {
            U4Ko7dEV[tXYf5E3xN[L7nBdR].oYT5Lspuc8Dj[nGOl0B6P7M] - (1011 - 946)]++;
        }
    }
    wQcsmtkz = (910 - 910);
    for (L7nBdR = (679 - 679); L7nBdR < (424 - 398); L7nBdR++) {
        if (U4Ko7dEV[L7nBdR] > wQcsmtkz) {
            wQcsmtkz = U4Ko7dEV[L7nBdR];
            h = L7nBdR;
        }
    }
    printf ("%c\n%d\n", h + (850 - 785), wQcsmtkz);
    for (L7nBdR = (85 - 85); L7nBdR < bjSZ4yLT; L7nBdR++) {
        bcymf82 = strlen (tXYf5E3xN[L7nBdR].oYT5Lspuc8Dj);
        for (nGOl0B6P7M = (285 - 285); nGOl0B6P7M < bcymf82; nGOl0B6P7M++) {
            if (tXYf5E3xN[L7nBdR].oYT5Lspuc8Dj[nGOl0B6P7M] == h + (856 - 791))
                printf ("%d\n", tXYf5E3xN[L7nBdR].kgwKnqi3Uk);
        }
    }
}

