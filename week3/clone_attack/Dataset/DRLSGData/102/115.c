void  SGOpBqfi (double  pWs8UOwL [], int KJmQoM1cY9) {
    int cHL4t9Y3xX5, SXu2pHOhRK9n;
    double  UtxofNFb;
    for (cHL4t9Y3xX5 = (958 - 958); KJmQoM1cY9 -(335 - 334) > cHL4t9Y3xX5; cHL4t9Y3xX5 = cHL4t9Y3xX5 + 1) {
        for (SXu2pHOhRK9n = cHL4t9Y3xX5 + (910 - 909); SXu2pHOhRK9n < KJmQoM1cY9; SXu2pHOhRK9n++) {
            if (pWs8UOwL[cHL4t9Y3xX5] > pWs8UOwL[SXu2pHOhRK9n]) {
                UtxofNFb = pWs8UOwL[cHL4t9Y3xX5];
                pWs8UOwL[cHL4t9Y3xX5] = pWs8UOwL[SXu2pHOhRK9n];
                pWs8UOwL[SXu2pHOhRK9n] = UtxofNFb;
            }
        }
    }
}

main () {
    int KJmQoM1cY9, SXu2pHOhRK9n, cHL4t9Y3xX5;
    int UtxofNFb = (294 - 294), Z1gXH7ozOkmA = (488 - 488);
    char YbkKMDX9 [(718 - 708)];
    int *JvkRsgAm = (int *) malloc (KJmQoM1cY9 * sizeof (int));
    double  *KnNl1GA = (double  *) malloc (KJmQoM1cY9 * sizeof (double ));
    double  *pWs8UOwL = (double  *) malloc (UtxofNFb * sizeof (double ));
    double  *ZD2kyQl = (double  *) malloc (Z1gXH7ozOkmA * sizeof (double ));
    scanf ("%d", &KJmQoM1cY9);
    getchar ();
    getchar ();
    getchar ();
    for (int cHL4t9Y3xX5 = (510 - 510);
    cHL4t9Y3xX5 < KJmQoM1cY9; cHL4t9Y3xX5 = cHL4t9Y3xX5 + 1) {
        scanf ("%s %lf", YbkKMDX9, &KnNl1GA[cHL4t9Y3xX5]);
        if (!((901 - 901) != YbkKMDX9[(376 - 376)] - 'm')) {
            JvkRsgAm[cHL4t9Y3xX5] = (566 - 565);
            UtxofNFb = UtxofNFb +1;
        }
        if (YbkKMDX9[(450 - 450)] - 'f' == (44 - 44)) {
            JvkRsgAm[cHL4t9Y3xX5] = (108 - 108);
            Z1gXH7ozOkmA = Z1gXH7ozOkmA +1;
        }
    }
    for (cHL4t9Y3xX5 = (714 - 714), SXu2pHOhRK9n = (784 - 784); cHL4t9Y3xX5 < KJmQoM1cY9; cHL4t9Y3xX5 = cHL4t9Y3xX5 + 1) {
        if (!((692 - 691) != JvkRsgAm[cHL4t9Y3xX5])) {
            pWs8UOwL[SXu2pHOhRK9n] = KnNl1GA[cHL4t9Y3xX5];
            SXu2pHOhRK9n = SXu2pHOhRK9n +1;
        }
    }
    for (cHL4t9Y3xX5 = (128 - 128), SXu2pHOhRK9n = (43 - 43); cHL4t9Y3xX5 < KJmQoM1cY9; cHL4t9Y3xX5 = cHL4t9Y3xX5 + 1) {
        if (JvkRsgAm[cHL4t9Y3xX5] == (402 - 402)) {
            ZD2kyQl[SXu2pHOhRK9n] = KnNl1GA[cHL4t9Y3xX5];
            SXu2pHOhRK9n = SXu2pHOhRK9n +1;
        }
    }
    SGOpBqfi (ZD2kyQl, Z1gXH7ozOkmA);
    SGOpBqfi (pWs8UOwL, UtxofNFb);
    for (cHL4t9Y3xX5 = (93 - 93); cHL4t9Y3xX5 < UtxofNFb; cHL4t9Y3xX5 = cHL4t9Y3xX5 + 1) {
        printf ("%.2lf ", pWs8UOwL[cHL4t9Y3xX5]);
    }
    for (cHL4t9Y3xX5 = Z1gXH7ozOkmA -(553 - 552); cHL4t9Y3xX5 >= (591 - 591); cHL4t9Y3xX5 = cHL4t9Y3xX5 - 1) {
        if (cHL4t9Y3xX5 == 0)
            printf ("%.2lf", ZD2kyQl[cHL4t9Y3xX5]);
        else
            printf ("%.2lf ", ZD2kyQl[cHL4t9Y3xX5]);
    }
}

