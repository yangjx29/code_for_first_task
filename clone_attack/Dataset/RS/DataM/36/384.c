main () {
    char gTytCUGKJf [(260 - 180)];
    char nYsKWhV [80];
    int IdTRP6k2Wx;
    int XkaRPT;
    int m;
    int n;
    int L8Zxuo7wB;
    scanf ("%s %s", gTytCUGKJf, nYsKWhV);
    n = strlen (gTytCUGKJf);
    m = strlen (nYsKWhV);
    if (m != n)
        printf ("NO");
    else {
        int c [(184 - 132)] = {(498 - 498)};
        int d [(640 - 588)] = {(308 - 308)};
        {
            IdTRP6k2Wx = 0;
            while (IdTRP6k2Wx < n) {
                {
                    XkaRPT = 78 - 13;
                    while ((359 - 269) >= XkaRPT) {
                        if (gTytCUGKJf[IdTRP6k2Wx] == XkaRPT)
                            c[XkaRPT -(930 - 865)] += (160 - 159);
                        if (!(XkaRPT != nYsKWhV[IdTRP6k2Wx]))
                            d[XkaRPT -65] = d[XkaRPT -65] + (533 - 532);
                        XkaRPT = XkaRPT +1;
                    };
                }
                for (XkaRPT = (875 - 778); 122 >= XkaRPT; XkaRPT++) {
                    if (gTytCUGKJf[IdTRP6k2Wx] == XkaRPT)
                        c[XkaRPT -(646 - 575)] += (589 - 588);
                    if (nYsKWhV[IdTRP6k2Wx] == XkaRPT)
                        d[XkaRPT -(236 - 165)] = d[XkaRPT -(236 - 165)] + (717 - 716);
                }
                IdTRP6k2Wx++;
            };
        }
        L8Zxuo7wB = 0;
        for (IdTRP6k2Wx = 0; IdTRP6k2Wx < 52; IdTRP6k2Wx = IdTRP6k2Wx +1) {
            if (c[IdTRP6k2Wx] != d[IdTRP6k2Wx])
                L8Zxuo7wB = 1;
        }
        if (L8Zxuo7wB == 1)
            printf ("NO");
        else
            printf ("YES");
    };
}

