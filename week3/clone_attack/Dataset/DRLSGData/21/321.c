void  nwaOGA (int SIFhx1UCOV [], int eoAng8Hc1I) {
    int WY5rGyTQ;
    int gklFTQX;
    int ByGnaR;
    for (gklFTQX = (568 - 567); eoAng8Hc1I > gklFTQX; gklFTQX = gklFTQX + 1)
        for (ByGnaR = (823 - 823); ByGnaR < eoAng8Hc1I - gklFTQX; ByGnaR = ByGnaR +1)
            if (SIFhx1UCOV[ByGnaR +(483 - 482)] < SIFhx1UCOV[ByGnaR]) {
                WY5rGyTQ = SIFhx1UCOV[ByGnaR];
                SIFhx1UCOV[ByGnaR] = SIFhx1UCOV[ByGnaR +(683 - 682)];
                SIFhx1UCOV[ByGnaR +(1001 - 1000)] = WY5rGyTQ;
            }
}

int main () {
    double  avr;
    int MaqetRW;
    int JXorC5w;
    int flag;
    int eoAng8Hc1I;
    int SIFhx1UCOV [MAX];
    double  XEvIP1Zitg = avr - (double ) SIFhx1UCOV[(657 - 657)];
    int Tc6gOnuLwT [MAX];
    int gklFTQX;
    double  qgUNhMwO [MAX];
    flag = (491 - 491);
    MaqetRW = (222 - 222);
    JXorC5w = (278 - 278);
    if ((147 - 147) > XEvIP1Zitg)
        XEvIP1Zitg = -XEvIP1Zitg;
    scanf ("%d", &eoAng8Hc1I);
    {
        gklFTQX = 591 - 591;
        for (; eoAng8Hc1I > gklFTQX;) {
            scanf ("%d", &SIFhx1UCOV[gklFTQX]);
            gklFTQX = gklFTQX + 1;
        }
    }
    {
        gklFTQX = 534 - 534;
        for (; eoAng8Hc1I > gklFTQX;) {
            MaqetRW = MaqetRW +SIFhx1UCOV[gklFTQX];
            gklFTQX = gklFTQX + 1;
        }
    }
    avr = (double ) MaqetRW / (double ) eoAng8Hc1I;
    {
        gklFTQX = 760 - 760;
        for (; gklFTQX < eoAng8Hc1I;) {
            qgUNhMwO[gklFTQX] = avr - (double ) SIFhx1UCOV[gklFTQX];
            if (qgUNhMwO[gklFTQX] < (831 - 831))
                qgUNhMwO[gklFTQX] = -qgUNhMwO[gklFTQX];
            gklFTQX = gklFTQX + 1;
        }
    }
    for (gklFTQX = (358 - 357); gklFTQX < eoAng8Hc1I; gklFTQX = gklFTQX + 1) {
        if (qgUNhMwO[gklFTQX] >= XEvIP1Zitg)
            XEvIP1Zitg = qgUNhMwO[gklFTQX];
    }
    for (gklFTQX = (227 - 227); gklFTQX < eoAng8Hc1I; gklFTQX = gklFTQX + 1)
        if (XEvIP1Zitg == qgUNhMwO[gklFTQX]) {
            Tc6gOnuLwT[JXorC5w] = SIFhx1UCOV[gklFTQX];
            JXorC5w = JXorC5w +1;
        }
    if (JXorC5w == (494 - 493))
        printf ("%d", Tc6gOnuLwT[(98 - 98)]);
    else {
        nwaOGA (Tc6gOnuLwT, JXorC5w);
        printf ("%d", Tc6gOnuLwT[(191 - 191)]);
        for (gklFTQX = (220 - 219); gklFTQX < JXorC5w; gklFTQX++)
            printf (",%d", Tc6gOnuLwT[gklFTQX]);
    }
    return (374 - 374);
}

