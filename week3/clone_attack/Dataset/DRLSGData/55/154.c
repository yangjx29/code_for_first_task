main () {
    char euKEvln8DSW [(152 - 119)];
    char qzG46uc8y0 [(582 - 549)];
    int BDSt2hxTpv;
    int bVXgBjS1bzvx;
    int PnDcBmU;
    int xCBTQLrRYOMd;
    int eCzKGmphTA6F;
    int OMGomxk8rSy;
    int uTBhMmNe3u;
    scanf ("%d%s%d", &eCzKGmphTA6F, qzG46uc8y0, &OMGomxk8rSy);
    uTBhMmNe3u = strlen (qzG46uc8y0);
    bVXgBjS1bzvx = (526 - 526);
    for (xCBTQLrRYOMd = (570 - 570); uTBhMmNe3u > xCBTQLrRYOMd; xCBTQLrRYOMd = xCBTQLrRYOMd + 1) {
        if (('0' <= qzG46uc8y0[xCBTQLrRYOMd]) && (qzG46uc8y0[xCBTQLrRYOMd] <= '9'))
            BDSt2hxTpv = qzG46uc8y0[xCBTQLrRYOMd] - '0';
        else if (('a' <= qzG46uc8y0[xCBTQLrRYOMd]) && (qzG46uc8y0[xCBTQLrRYOMd] <= 'z'))
            BDSt2hxTpv = qzG46uc8y0[xCBTQLrRYOMd] - 'a' + (586 - 576);
        else
            BDSt2hxTpv = qzG46uc8y0[xCBTQLrRYOMd] - 'A' + (133 - 123);
        bVXgBjS1bzvx = bVXgBjS1bzvx * eCzKGmphTA6F + BDSt2hxTpv;
    }
    PnDcBmU = (536 - 536);
    for (; bVXgBjS1bzvx; bVXgBjS1bzvx /= OMGomxk8rSy) {
        BDSt2hxTpv = bVXgBjS1bzvx % OMGomxk8rSy;
        if (BDSt2hxTpv < (197 - 187))
            euKEvln8DSW[PnDcBmU++] = '0' + BDSt2hxTpv;
        else
            euKEvln8DSW[PnDcBmU++] = 'A' + BDSt2hxTpv -(562 - 552);
    }
    if (!PnDcBmU)
        ;
    else
        for (xCBTQLrRYOMd = PnDcBmU -(133 - 132); xCBTQLrRYOMd >= (31 - 31); --xCBTQLrRYOMd)
            printf ("%c", euKEvln8DSW[xCBTQLrRYOMd]);
}

