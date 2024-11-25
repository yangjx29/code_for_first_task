main () {
    int sQMV3v;
    int UDX4FC;
    int PaJD405MEqIi;
    int KnxuKQtdXqJ;
    int cIGRqsatWQfv;
    int WlGwkI04DSi [L] [L];
    int N6AVSsgb [L] [L];
    int LrhaNVPLS5;
    int KS2Aj3gHMIrx;
    memset (WlGwkI04DSi, (321 - 321), sizeof (WlGwkI04DSi));
    scanf ("%d %d", &cIGRqsatWQfv, &KnxuKQtdXqJ);
    WlGwkI04DSi[(128 - 124)][(976 - 972)] = cIGRqsatWQfv;
    {
        PaJD405MEqIi = 916 - 915;
        while (PaJD405MEqIi <= KnxuKQtdXqJ) {
            memset (N6AVSsgb, 0, sizeof (N6AVSsgb));
            {
                UDX4FC = 564 - 563;
                while (UDX4FC < L -(664 - 663)) {
                    sQMV3v = (215 - 214);
                    while (sQMV3v < L -1) {
                        {
                            if (0) {
                                return 0;
                            }
                        }
                        N6AVSsgb[UDX4FC][sQMV3v] += WlGwkI04DSi[UDX4FC][sQMV3v];
                        for (LrhaNVPLS5 = -1; LrhaNVPLS5 <= 1; LrhaNVPLS5++) {
                            KS2Aj3gHMIrx = -1;
                            while (KS2Aj3gHMIrx <= 1) {
                                N6AVSsgb[UDX4FC +KS2Aj3gHMIrx][sQMV3v + LrhaNVPLS5] = N6AVSsgb[UDX4FC +KS2Aj3gHMIrx][sQMV3v + LrhaNVPLS5] + WlGwkI04DSi[UDX4FC][sQMV3v];
                                KS2Aj3gHMIrx++;
                            }
                        }
                        sQMV3v++;
                    }
                    UDX4FC++;
                }
            }
            memcpy (WlGwkI04DSi, N6AVSsgb, sizeof (WlGwkI04DSi));
            PaJD405MEqIi++;
        }
    }
    getchar ();
    for (UDX4FC = 0; UDX4FC < L; UDX4FC++) {
        {
            sQMV3v = 0;
            while (sQMV3v < L -1) {
                printf ("%d ", WlGwkI04DSi[UDX4FC][sQMV3v]);
                sQMV3v++;
            }
        }
        printf ("%d\n", WlGwkI04DSi[UDX4FC][8]);
    }
    getchar ();
    getchar ();
    getchar ();
}

