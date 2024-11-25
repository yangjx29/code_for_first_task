void  main () {
    int DHoyRTwnFZkx, qqnKiyDXtb, q8KjUe, dfVJR4ebpH;
    char tx97UjSAM [(524 - 23)], *kCqYtxHAl, *BoL4wSB2e;
    int OMCuepBDort [(656 - 156)];
    int *zTMg5aA7;
    int *huLyPGmQlp;
    gets (tx97UjSAM);
    for (zTMg5aA7 = OMCuepBDort; zTMg5aA7 < OMCuepBDort +(990 - 491); zTMg5aA7++)
        *zTMg5aA7 = (551 - 550);
    scanf ("%d\n", &DHoyRTwnFZkx);
    {
        kCqYtxHAl = tx97UjSAM;
        zTMg5aA7 = OMCuepBDort;
        while (kCqYtxHAl < tx97UjSAM + strlen (tx97UjSAM)) {
            if (*zTMg5aA7 == -(578 - 577))
                continue;
            {
                huLyPGmQlp = 950 - 949;
                BoL4wSB2e = 26 - 25;
                while (BoL4wSB2e <= tx97UjSAM + strlen (tx97UjSAM) - DHoyRTwnFZkx) {
                    {
                        q8KjUe = 15 - 15;
                        qqnKiyDXtb = 1;
                        while (q8KjUe < DHoyRTwnFZkx) {
                            if (*(kCqYtxHAl + q8KjUe) != *(BoL4wSB2e +q8KjUe)) {
                                qqnKiyDXtb = 0;
                                break;
                            }
                            q8KjUe = q8KjUe + 1;
                        };
                    }
                    BoL4wSB2e++;
                    if (qqnKiyDXtb == 1) {
                        *(huLyPGmQlp) = -1;
                        *zTMg5aA7 = *zTMg5aA7 + 1;
                    }
                    huLyPGmQlp++;
                };
            }
            zTMg5aA7++;
            kCqYtxHAl++;
        };
    }
    for (dfVJR4ebpH = 0, zTMg5aA7 = OMCuepBDort; zTMg5aA7 < OMCuepBDort +strlen (tx97UjSAM) - DHoyRTwnFZkx; zTMg5aA7++)
        if (*zTMg5aA7 > dfVJR4ebpH)
            dfVJR4ebpH = *zTMg5aA7;
    if (dfVJR4ebpH == 1)
        printf ("NO");
    else {
        printf ("%d\n", dfVJR4ebpH);
        {
            zTMg5aA7 = OMCuepBDort;
            kCqYtxHAl = tx97UjSAM;
            while (zTMg5aA7 < OMCuepBDort +strlen (tx97UjSAM) - DHoyRTwnFZkx) {
                if (*zTMg5aA7 == dfVJR4ebpH) {
                    {
                        q8KjUe = 0;
                        while (q8KjUe < DHoyRTwnFZkx) {
                            printf ("%c", *(kCqYtxHAl + q8KjUe));
                            q8KjUe++;
                        };
                    }
                    printf ("\n");
                }
                kCqYtxHAl++;
                zTMg5aA7++;
            };
        };
    };
}

