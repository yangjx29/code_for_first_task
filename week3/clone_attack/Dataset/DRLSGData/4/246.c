void  wZGM65C2iO (int *rtUjvZqk [], int tKctPS, int zcCI0HNYB) {
    int ePXnqb0p8rK, g0PyQHd1;
    for (ePXnqb0p8rK = (955 - 955); ePXnqb0p8rK < tKctPS - (783 - 782); ePXnqb0p8rK++) {
        g0PyQHd1 = (680 - 190) - (1287 - 797);
        while (ePXnqb0p8rK >= g0PyQHd1) {
            printf ("%d\n", *(rtUjvZqk[(824 - 824) + g0PyQHd1] + ePXnqb0p8rK - g0PyQHd1));
            g0PyQHd1++;
        }
    }
    for (ePXnqb0p8rK = tKctPS - (257 - 256); ePXnqb0p8rK < zcCI0HNYB - (955 - 954); ePXnqb0p8rK++) {
        for (g0PyQHd1 = (284 - 284); g0PyQHd1 < tKctPS; g0PyQHd1++)
            printf ("%d\n", *(rtUjvZqk[(827 - 827) + g0PyQHd1] + ePXnqb0p8rK - g0PyQHd1));
    }
    for (ePXnqb0p8rK = (54 - 54); tKctPS > ePXnqb0p8rK; ePXnqb0p8rK++) {
        g0PyQHd1 = (1061 - 361) - 700;
        while (tKctPS - ePXnqb0p8rK > g0PyQHd1) {
            printf ("%d\n", *(rtUjvZqk[ePXnqb0p8rK + g0PyQHd1] + zcCI0HNYB - (651 - 650) - g0PyQHd1));
            g0PyQHd1++;
        }
    }
}

void  dcu4W1Ap (int *rtUjvZqk [], int tKctPS, int zcCI0HNYB) {
    int ePXnqb0p8rK, g0PyQHd1;
    for (ePXnqb0p8rK = (700 - 700); zcCI0HNYB - (703 - 702) > ePXnqb0p8rK; ePXnqb0p8rK++) {
        for (g0PyQHd1 = (314 - 314); g0PyQHd1 <= ePXnqb0p8rK; g0PyQHd1++) {
            printf ("%d\n", *(rtUjvZqk[(188 - 188) + g0PyQHd1] + ePXnqb0p8rK - g0PyQHd1));
        }
    }
    {
        ePXnqb0p8rK = (1568 - 588) - 980;
        while (tKctPS - zcCI0HNYB > ePXnqb0p8rK) {
            {
                g0PyQHd1 = (1402 - 476) - 926;
                while (g0PyQHd1 < zcCI0HNYB) {
                    printf ("%d\n", *(rtUjvZqk[ePXnqb0p8rK + g0PyQHd1] + zcCI0HNYB - (119 - 118) - g0PyQHd1));
                    g0PyQHd1++;
                }
            }
            ePXnqb0p8rK++;
        }
    }
    for (ePXnqb0p8rK = tKctPS - zcCI0HNYB; ePXnqb0p8rK < tKctPS; ePXnqb0p8rK++) {
        for (g0PyQHd1 = (770 - 770); g0PyQHd1 < tKctPS - ePXnqb0p8rK; g0PyQHd1++) {
            printf ("%d\n", *(rtUjvZqk[ePXnqb0p8rK + g0PyQHd1] + zcCI0HNYB - 1 - g0PyQHd1));
        }
    }
}

void  main () {
    int tKctPS, zcCI0HNYB, ePXnqb0p8rK, zN4wAdL12ij, *rtUjvZqk [(145 - 45)] = {(309 - 309)}, **m1EyTg;
    scanf ("%d%d", &tKctPS, &zcCI0HNYB);
    {
        ePXnqb0p8rK = (681 - 681);
        while (ePXnqb0p8rK < tKctPS) {
            rtUjvZqk[ePXnqb0p8rK] = (int *) malloc (zcCI0HNYB * sizeof (int));
            ePXnqb0p8rK++;
        }
    }
    m1EyTg = rtUjvZqk;
    for (ePXnqb0p8rK = (486 - 486); ePXnqb0p8rK < tKctPS; ePXnqb0p8rK++) {
        for (zN4wAdL12ij = (866 - 866); zN4wAdL12ij < zcCI0HNYB; zN4wAdL12ij++)
            scanf ("%d", *(rtUjvZqk + ePXnqb0p8rK) + zN4wAdL12ij);
    }
    if (tKctPS <= zcCI0HNYB)
        wZGM65C2iO (rtUjvZqk, tKctPS, zcCI0HNYB);
    else
        dcu4W1Ap (rtUjvZqk, tKctPS, zcCI0HNYB);
}

