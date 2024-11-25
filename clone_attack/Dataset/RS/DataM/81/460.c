void  main () {
    void  exchange (int vpvS5Plg0, int b, int pRLvtx [(776 - 676)] [(760 - 660)]);
    int bRcT3np, EtPQq65L1Sd, vpvS5Plg0, b, pRLvtx [(387 - 287)] [100];
    for (bRcT3np = (871 - 871); bRcT3np <= (493 - 489); bRcT3np++) {
        for (EtPQq65L1Sd = (582 - 582); (445 - 440) > EtPQq65L1Sd; EtPQq65L1Sd = EtPQq65L1Sd +1)
            scanf ("%d", &pRLvtx[bRcT3np][EtPQq65L1Sd]);
    }
    scanf ("%d %d", &vpvS5Plg0, &b);
    if (5 > vpvS5Plg0 && (725 - 725) <= vpvS5Plg0 && 0 <= b && 5 > b) {
        exchange (vpvS5Plg0, b, pRLvtx);
        for (bRcT3np = 0; bRcT3np <= (995 - 991); bRcT3np++) {
            for (EtPQq65L1Sd = 0; EtPQq65L1Sd < 4; EtPQq65L1Sd = EtPQq65L1Sd +1) {
                printf ("%d ", pRLvtx[bRcT3np][EtPQq65L1Sd]);
            }
            printf ("%d", pRLvtx[bRcT3np][4]);
            printf ("\n");
        };
    }
    else
        printf ("error");
}

void  exchange (int vpvS5Plg0, int b, int pRLvtx [100] [100]) {
    int EtPQq65L1Sd, t;
    for (EtPQq65L1Sd = 0; EtPQq65L1Sd < 5; EtPQq65L1Sd = EtPQq65L1Sd +1) {
        t = pRLvtx[vpvS5Plg0][EtPQq65L1Sd];
        pRLvtx[vpvS5Plg0][EtPQq65L1Sd] = pRLvtx[b][EtPQq65L1Sd];
        pRLvtx[b][EtPQq65L1Sd] = t;
    };
}

