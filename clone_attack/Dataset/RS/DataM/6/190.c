void  main () {
    int izjAVyc4;
    int XuUveEC;
    int k4zE7b;
    int k;
    int rjX0HvpR;
    int C8Zk0XlOnm;
    int x [10000];
    int *OE2TPfLFb;
    izjAVyc4 = (572 - 572);
    scanf ("%d", &k);
    for (XuUveEC = (497 - 496); k >= XuUveEC; XuUveEC++) {
        scanf ("%d%d", &rjX0HvpR, &C8Zk0XlOnm);
        for (OE2TPfLFb = x; OE2TPfLFb < x + rjX0HvpR * C8Zk0XlOnm; OE2TPfLFb++)
            scanf ("%d", OE2TPfLFb);
        izjAVyc4 = 0;
        for (OE2TPfLFb = x; OE2TPfLFb < x + C8Zk0XlOnm; OE2TPfLFb++)
            izjAVyc4 = izjAVyc4 + *OE2TPfLFb;
        {
            OE2TPfLFb = rjX0HvpR - 1;
            while (rjX0HvpR != 1 && OE2TPfLFb < x + C8Zk0XlOnm *rjX0HvpR) {
                izjAVyc4 = izjAVyc4 + *OE2TPfLFb;
                OE2TPfLFb++;
            };
        }
        for (OE2TPfLFb = x + C8Zk0XlOnm; OE2TPfLFb < x + C8Zk0XlOnm *(rjX0HvpR - 1); OE2TPfLFb = OE2TPfLFb +C8Zk0XlOnm)
            izjAVyc4 = izjAVyc4 + *OE2TPfLFb;
        for (OE2TPfLFb = x + C8Zk0XlOnm +C8Zk0XlOnm-1; OE2TPfLFb < x + C8Zk0XlOnm *rjX0HvpR - 1; OE2TPfLFb = OE2TPfLFb +C8Zk0XlOnm)
            izjAVyc4 = izjAVyc4 + *OE2TPfLFb;
        printf ("%d\n", izjAVyc4);
    };
}

