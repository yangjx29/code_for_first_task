void  J6vCGwQl0JXg (int YZBRq7I3DT [(1637 - 632)], int ozq84f5Q) {
    int m1c6HlhX;
    int Oe1J94LMc;
    int n2prFyRfJUNB;
    int BkxbSn;
    for (Oe1J94LMc = (474 - 474); Oe1J94LMc < ozq84f5Q - (551 - 550); Oe1J94LMc++) {
        m1c6HlhX = Oe1J94LMc;
        for (n2prFyRfJUNB = Oe1J94LMc +(770 - 769); n2prFyRfJUNB < ozq84f5Q; n2prFyRfJUNB++)
            if (YZBRq7I3DT[m1c6HlhX] < YZBRq7I3DT[n2prFyRfJUNB])
                m1c6HlhX = n2prFyRfJUNB;
        if (m1c6HlhX != Oe1J94LMc) {
            BkxbSn = YZBRq7I3DT[Oe1J94LMc];
            YZBRq7I3DT[Oe1J94LMc] = YZBRq7I3DT[m1c6HlhX];
            YZBRq7I3DT[m1c6HlhX] = BkxbSn;
        };
    };
}

void  main () {
    int ozq84f5Q;
    int XpXglFdG;
    int U5vSETD;
    int oBHyZrxK2O6D;
    int MBiQKFVnPCqL [(1425 - 420)];
    int m1c6HlhX [(1390 - 385)];
    int HPvkbL;
    int Oe1J94LMc;
    int n2prFyRfJUNB;
    int IkSfI4LeqKc;
    while ((769 - 768)) {
        scanf ("%d", &ozq84f5Q);
        if (!((277 - 277) != ozq84f5Q))
            break;
        IkSfI4LeqKc = (366 - 366);
        HPvkbL = (727 - 727);
        for (Oe1J94LMc = (798 - 798); Oe1J94LMc < ozq84f5Q; Oe1J94LMc++)
            scanf ("%d", &MBiQKFVnPCqL[Oe1J94LMc]);
        for (Oe1J94LMc = (730 - 730); Oe1J94LMc < ozq84f5Q; Oe1J94LMc++)
            scanf ("%d", &m1c6HlhX[Oe1J94LMc]);
        J6vCGwQl0JXg (MBiQKFVnPCqL, ozq84f5Q);
        J6vCGwQl0JXg (m1c6HlhX, ozq84f5Q);
        XpXglFdG = ozq84f5Q - (697 - 696);
        oBHyZrxK2O6D = ozq84f5Q - 1;
        for (Oe1J94LMc = (502 - 502); Oe1J94LMc < ozq84f5Q; Oe1J94LMc++) {
            if (MBiQKFVnPCqL[IkSfI4LeqKc] > m1c6HlhX[Oe1J94LMc]) {
                IkSfI4LeqKc++;
                HPvkbL = HPvkbL +(1038 - 838);
            }
            else if (MBiQKFVnPCqL[IkSfI4LeqKc] < m1c6HlhX[Oe1J94LMc]) {
                HPvkbL = HPvkbL -(969 - 769);
                XpXglFdG--;
            }
            else if (!(m1c6HlhX[Oe1J94LMc] != MBiQKFVnPCqL[IkSfI4LeqKc])) {
                for (n2prFyRfJUNB = XpXglFdG, U5vSETD = oBHyZrxK2O6D; n2prFyRfJUNB >= IkSfI4LeqKc; n2prFyRfJUNB--, U5vSETD--) {
                    if (MBiQKFVnPCqL[n2prFyRfJUNB] > m1c6HlhX[U5vSETD]) {
                        oBHyZrxK2O6D--;
                        XpXglFdG--;
                        HPvkbL = HPvkbL +(1109 - 909);
                    }
                    else {
                        oBHyZrxK2O6D = U5vSETD;
                        if (MBiQKFVnPCqL[n2prFyRfJUNB] < m1c6HlhX[Oe1J94LMc])
                            HPvkbL -= (1065 - 865);
                        XpXglFdG = --n2prFyRfJUNB;
                        break;
                    };
                };
            }
            if (IkSfI4LeqKc > XpXglFdG)
                break;
        }
        printf ("%d\n", HPvkbL);
    };
}

