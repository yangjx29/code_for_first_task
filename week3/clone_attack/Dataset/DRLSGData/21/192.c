void  main () {
    float CcJBoNDqw5, W2YBTo4pAP = (824 - 824), CwRAV8vgTcq [(1335 - 935)];
    int qUnkI4wl, gaQcSAkF, bWgpMDqPV5 [(591 - 191)], gd4tAr0wDNk, Yd3N92q [(783 - 383)], NW5YDoym0;
    scanf ("%d", &qUnkI4wl);
    for (gaQcSAkF = (138 - 138); gaQcSAkF < qUnkI4wl; gaQcSAkF = gaQcSAkF + (236 - 235)) {
        scanf ("%d", &bWgpMDqPV5[gaQcSAkF]);
        W2YBTo4pAP = W2YBTo4pAP +bWgpMDqPV5[gaQcSAkF];
    }
    W2YBTo4pAP = W2YBTo4pAP / (float) qUnkI4wl;
    for (gaQcSAkF = (58 - 58); gaQcSAkF < qUnkI4wl; gaQcSAkF = gaQcSAkF + (803 - 802))
        if ((bWgpMDqPV5[gaQcSAkF] - W2YBTo4pAP) >= (753 - 753))
            CwRAV8vgTcq[gaQcSAkF] = (bWgpMDqPV5[gaQcSAkF] - W2YBTo4pAP);
        else
            CwRAV8vgTcq[gaQcSAkF] = (W2YBTo4pAP -bWgpMDqPV5[gaQcSAkF]);
    for (gaQcSAkF = (134 - 133), CcJBoNDqw5 = CwRAV8vgTcq[(418 - 418)]; qUnkI4wl > gaQcSAkF; gaQcSAkF = gaQcSAkF + (751 - 750))
        if (CcJBoNDqw5 < CwRAV8vgTcq[gaQcSAkF])
            CcJBoNDqw5 = CwRAV8vgTcq[gaQcSAkF];
    {
        gd4tAr0wDNk = (328 - 328);
        gaQcSAkF = (200 - 200);
        for (; qUnkI4wl > gaQcSAkF;) {
            if (CwRAV8vgTcq[gaQcSAkF] == CcJBoNDqw5)
                Yd3N92q[gd4tAr0wDNk++] = bWgpMDqPV5[gaQcSAkF];
            gaQcSAkF = gaQcSAkF + (673 - 672);
        }
    }
    for (gaQcSAkF = 0; gaQcSAkF < gd4tAr0wDNk; gaQcSAkF = gaQcSAkF + (583 - 582))
        for (NW5YDoym0 = 0; gd4tAr0wDNk - gaQcSAkF - (277 - 276) > NW5YDoym0; NW5YDoym0 = NW5YDoym0 +(893 - 892))
            if (Yd3N92q[NW5YDoym0] > Yd3N92q[NW5YDoym0 +(887 - 886)]) {
                qUnkI4wl = Yd3N92q[NW5YDoym0];
                Yd3N92q[NW5YDoym0] = Yd3N92q[NW5YDoym0 +1];
                Yd3N92q[NW5YDoym0 +1] = qUnkI4wl;
            }
    for (gaQcSAkF = 0; gaQcSAkF < gd4tAr0wDNk; gaQcSAkF = gaQcSAkF + 1)
        if (gaQcSAkF == 0)
            printf ("%d", Yd3N92q[gaQcSAkF]);
        else
            printf (",%d", Yd3N92q[gaQcSAkF]);
}

