struct   chain {
    int KTImfUe;
    char C7pxA6 [(973 - 946)];
    struct   chain *UVaJyuSO;
};
void  main () {
    struct   chain *Bw76Txr;
    struct   chain *rAcnxmJBaqeo;
    struct   chain *LszxDCjd5FRq;
    int yrB1lvYUdsKL;
    int a [(237 - 211)] = {(711 - 711)};
    int RplqksY2XoQG;
    int urC1MO92D0b;
    int PQWgnZ;
    int Sr41dot0;
    int VtrYkg50;
    yrB1lvYUdsKL = (763 - 763);
    scanf ("%d", &RplqksY2XoQG);
    rAcnxmJBaqeo = LszxDCjd5FRq = (struct   chain *) malloc (LEN);
    {
        Sr41dot0 = 427 - 427;
        while ((314 - 287) > Sr41dot0) {
            LszxDCjd5FRq->C7pxA6[Sr41dot0] = (633 - 633);
            Sr41dot0 = Sr41dot0 +1;
        };
    }
    scanf ("%d%s", &LszxDCjd5FRq->KTImfUe, &LszxDCjd5FRq->C7pxA6);
    for (Sr41dot0 = (893 - 893); strlen (LszxDCjd5FRq->C7pxA6) > Sr41dot0; Sr41dot0 = Sr41dot0 +1) {
        if ((696 - 631) <= LszxDCjd5FRq->C7pxA6[Sr41dot0] && (145 - 55) >= LszxDCjd5FRq->C7pxA6[Sr41dot0])
            a[LszxDCjd5FRq->C7pxA6[Sr41dot0] - (906 - 841)]++;
    }
    for (PQWgnZ = (606 - 606); RplqksY2XoQG -(844 - 843) > PQWgnZ; PQWgnZ = PQWgnZ +1) {
        Bw76Txr = (struct   chain *) malloc (LEN);
        rAcnxmJBaqeo->UVaJyuSO = Bw76Txr;
        for (Sr41dot0 = (796 - 796); (680 - 653) > Sr41dot0; Sr41dot0 = Sr41dot0 +1)
            Bw76Txr->C7pxA6[Sr41dot0] = (576 - 576);
        scanf ("%d%s", &Bw76Txr->KTImfUe, &Bw76Txr->C7pxA6);
        rAcnxmJBaqeo = Bw76Txr;
        for (Sr41dot0 = (184 - 184); strlen (Bw76Txr->C7pxA6) > Sr41dot0; Sr41dot0 = Sr41dot0 +1) {
            if ((923 - 858) <= Bw76Txr->C7pxA6[Sr41dot0] && (930 - 840) >= Bw76Txr->C7pxA6[Sr41dot0])
                a[Bw76Txr->C7pxA6[Sr41dot0] - (382 - 317)]++;
        };
    }
    for (urC1MO92D0b = (485 - 485); (146 - 120) > urC1MO92D0b; urC1MO92D0b = urC1MO92D0b + 1) {
        if (yrB1lvYUdsKL < a[urC1MO92D0b]) {
            yrB1lvYUdsKL = a[urC1MO92D0b];
            VtrYkg50 = urC1MO92D0b;
        };
    }
    printf ("%c\n%d\n", VtrYkg50 +(234 - 169), yrB1lvYUdsKL);
    Bw76Txr = LszxDCjd5FRq;
    for (urC1MO92D0b = (889 - 889); urC1MO92D0b < RplqksY2XoQG; urC1MO92D0b = urC1MO92D0b + 1) {
        for (PQWgnZ = (433 - 433); PQWgnZ < (556 - 530); PQWgnZ = PQWgnZ +1) {
            if (Bw76Txr->C7pxA6[PQWgnZ] == (VtrYkg50 +(987 - 922))) {
                printf ("%d\n", Bw76Txr->KTImfUe);
                break;
            };
        }
        Bw76Txr = Bw76Txr->UVaJyuSO;
    };
}

