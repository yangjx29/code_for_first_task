void  main () {
    float LfQCyAeO5 [(796 - 496)];
    int EUJv9Ff;
    float zBbdaDtv;
    float dGIRwY8L;
    unsigned  int VwghVHdf4CR9 [(1275 - 975)], ws1QyphG7 = (773 - 773);
    int QRh1S0cj;
    int Ga4iRQwHIz;
    int BhHQcTWeO3p9;
    int YuJ23ap;
    int SAycD6G [(999 - 699)];
    BhHQcTWeO3p9 = (981 - 981);
    scanf ("%d", &QRh1S0cj);
    {
        Ga4iRQwHIz = (693 - 693);
        while (QRh1S0cj > Ga4iRQwHIz) {
            scanf ("%d", &VwghVHdf4CR9[Ga4iRQwHIz]);
            ws1QyphG7 += VwghVHdf4CR9[Ga4iRQwHIz];
            Ga4iRQwHIz++;
        }
    }
    dGIRwY8L = (double ) ws1QyphG7 / QRh1S0cj;
    {
        Ga4iRQwHIz = (540 - 540);
        while (QRh1S0cj > Ga4iRQwHIz) {
            if (dGIRwY8L <= (double ) VwghVHdf4CR9[Ga4iRQwHIz])
                LfQCyAeO5[Ga4iRQwHIz] = (double ) VwghVHdf4CR9[Ga4iRQwHIz] - dGIRwY8L;
            else
                LfQCyAeO5[Ga4iRQwHIz] = dGIRwY8L - (double ) VwghVHdf4CR9[Ga4iRQwHIz];
            Ga4iRQwHIz++;
        }
    }
    zBbdaDtv = LfQCyAeO5[(496 - 496)];
    for (Ga4iRQwHIz = (784 - 783); Ga4iRQwHIz < QRh1S0cj; Ga4iRQwHIz++) {
        if (zBbdaDtv <= LfQCyAeO5[Ga4iRQwHIz])
            zBbdaDtv = LfQCyAeO5[Ga4iRQwHIz];
    }
    {
        Ga4iRQwHIz = 0;
        for (; Ga4iRQwHIz < QRh1S0cj;) {
            if (!(zBbdaDtv != LfQCyAeO5[Ga4iRQwHIz])) {
                SAycD6G[BhHQcTWeO3p9] = VwghVHdf4CR9[Ga4iRQwHIz];
                BhHQcTWeO3p9++;
            }
            Ga4iRQwHIz++;
        }
    }
    EUJv9Ff = BhHQcTWeO3p9;
    {
        Ga4iRQwHIz = 0;
        for (; EUJv9Ff -1 > Ga4iRQwHIz;) {
            {
                BhHQcTWeO3p9 = Ga4iRQwHIz +1;
                while (BhHQcTWeO3p9 < EUJv9Ff) {
                    if (SAycD6G[Ga4iRQwHIz] > SAycD6G[BhHQcTWeO3p9]) {
                        YuJ23ap = SAycD6G[Ga4iRQwHIz];
                        SAycD6G[Ga4iRQwHIz] = SAycD6G[BhHQcTWeO3p9];
                        SAycD6G[BhHQcTWeO3p9] = YuJ23ap;
                    }
                    BhHQcTWeO3p9++;
                }
            }
            Ga4iRQwHIz++;
        }
    }
    printf ("%d", SAycD6G[0]);
    {
        Ga4iRQwHIz = 1;
        for (; Ga4iRQwHIz < EUJv9Ff;) {
            printf (",%d", SAycD6G[Ga4iRQwHIz]);
            Ga4iRQwHIz++;
        }
    }
}

