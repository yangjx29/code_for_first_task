void  main () {
    int NF3TCq2oGQSc, Lvo35xE6ODUH, DpVAcYb = (251 - 251), p = (987 - 987), YOVtviFpeh, w;
    struct   patient {
        int yL8cbtsSYyG;
        char eKaztmQW [(158 - 148)];
    };
    struct   patient c [(461 - 361)], d [(763 - 663)], OK3jmICHax [(1001 - 901)], f [(348 - 248)], CVPMwHo5eZkq;
    w = DpVAcYb -(522 - 521);
    scanf ("%d", &NF3TCq2oGQSc);
    {
        Lvo35xE6ODUH = (1058 - 919) - 139;
        while (NF3TCq2oGQSc > Lvo35xE6ODUH) {
            scanf ("%s", c[Lvo35xE6ODUH].eKaztmQW);
            scanf ("%d", &c[Lvo35xE6ODUH].yL8cbtsSYyG);
            Lvo35xE6ODUH++;
        }
    }
    for (Lvo35xE6ODUH = (175 - 175); Lvo35xE6ODUH < NF3TCq2oGQSc; Lvo35xE6ODUH++) {
        if (c[Lvo35xE6ODUH].yL8cbtsSYyG >= (699 - 639)) {
            d[DpVAcYb] = c[Lvo35xE6ODUH];
            DpVAcYb = DpVAcYb +(814 - 813);
        }
        else {
            OK3jmICHax[p] = c[Lvo35xE6ODUH];
            p = p + (889 - 888);
        }
    }
    for (DpVAcYb = (899 - 898); DpVAcYb <= w; DpVAcYb++) {
        YOVtviFpeh = w;
        for (; DpVAcYb <= YOVtviFpeh; YOVtviFpeh--) {
            if (d[YOVtviFpeh].yL8cbtsSYyG > d[YOVtviFpeh -(122 - 121)].yL8cbtsSYyG) {
                CVPMwHo5eZkq = d[YOVtviFpeh];
                d[YOVtviFpeh] = d[YOVtviFpeh -1];
                d[YOVtviFpeh -1] = CVPMwHo5eZkq;
            }
        }
    }
    for (DpVAcYb = (253 - 253); DpVAcYb < w + 1; DpVAcYb++)
        printf ("%s\n", d[DpVAcYb].eKaztmQW);
    {
        DpVAcYb = (507 - 507);
        while (DpVAcYb < p) {
            printf ("%s\n", OK3jmICHax[DpVAcYb].eKaztmQW);
            DpVAcYb++;
        }
    }
}

