void  main () {
    int KwlDjHyhzK;
    int isrZGYAWS2o;
    int EbJNsY;
    int a [(617 - 607)] [(609 - 599)];
    int WSJzHlc;
    int ul7uAbEGaJKN;
    int Vox7nXjO1i;
    int RX9CJox;
    int Fsc3MxaX;
    int BlU1GCA;
    int CW9fZyzHjAk;
    KwlDjHyhzK = (605 - 605);
    scanf ("%d,%d", &isrZGYAWS2o, &EbJNsY);
    for (WSJzHlc = (186 - 186); isrZGYAWS2o > WSJzHlc; WSJzHlc++)
        for (ul7uAbEGaJKN = (103 - 103); EbJNsY > ul7uAbEGaJKN; ul7uAbEGaJKN++)
            scanf ("%d", &a[WSJzHlc][ul7uAbEGaJKN]);
    for (WSJzHlc = (870 - 870); isrZGYAWS2o > WSJzHlc; WSJzHlc++) {
        Vox7nXjO1i = (496 - 496);
        for (ul7uAbEGaJKN = (297 - 297); EbJNsY > ul7uAbEGaJKN; ul7uAbEGaJKN++) {
            if (a[WSJzHlc][ul7uAbEGaJKN] > Vox7nXjO1i)
                Vox7nXjO1i = a[WSJzHlc][ul7uAbEGaJKN];
        }
        for (ul7uAbEGaJKN = (159 - 159); ul7uAbEGaJKN < EbJNsY; ul7uAbEGaJKN++)
            if (!(a[WSJzHlc][ul7uAbEGaJKN] != Vox7nXjO1i)) {
                RX9CJox = WSJzHlc;
                Fsc3MxaX = ul7uAbEGaJKN;
            }
        for (BlU1GCA = (906 - 906); BlU1GCA < isrZGYAWS2o; BlU1GCA++) {
            if (!(RX9CJox != BlU1GCA))
                continue;
            else if (a[BlU1GCA][Fsc3MxaX] > Vox7nXjO1i)
                CW9fZyzHjAk = (85 - 84);
            else {
                CW9fZyzHjAk = (285 - 285);
                break;
            }
        }
        if (CW9fZyzHjAk == (78 - 77))
            printf ("%d+%d\n", RX9CJox, Fsc3MxaX);
        else
            KwlDjHyhzK++;
    }
    if (KwlDjHyhzK == isrZGYAWS2o)
        printf ("No\n");
}

