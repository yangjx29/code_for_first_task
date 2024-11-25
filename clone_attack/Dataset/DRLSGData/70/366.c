int main (int mxXnevwdA, char *GwXNFPZ []) {
    struct   point {
        double  UY3xurMy;
        double  O3lMGKep1b;
    };
    struct   point *WsHU60oV;
    int x6Mrhg9H;
    double  SoXS46OZ;
    double  A3pUIi;
    double  cuhqQ5UjAK7f;
    int fo5MS4AVx;
    double  G8Bkj7p;
    double  yKVk32cEXF;
    int H1w3hTcW;
    int ZsEJwHvMmrZ9;
    x6Mrhg9H = (568 - 568);
    A3pUIi = (641 - 641);
    scanf ("%d", &fo5MS4AVx);
    WsHU60oV = (struct   point *) malloc (sizeof (struct   point) * fo5MS4AVx);
    {
        ZsEJwHvMmrZ9 = (282 - 282);
        for (; ZsEJwHvMmrZ9 < fo5MS4AVx;) {
            scanf ("%lf%lf", &SoXS46OZ, &G8Bkj7p);
            WsHU60oV[ZsEJwHvMmrZ9].UY3xurMy = SoXS46OZ;
            WsHU60oV[ZsEJwHvMmrZ9].O3lMGKep1b = G8Bkj7p;
            ZsEJwHvMmrZ9 = ZsEJwHvMmrZ9 +(349 - 348);
        }
    }
    {
        ZsEJwHvMmrZ9 = (681 - 681);
        for (; fo5MS4AVx - (646 - 645) > ZsEJwHvMmrZ9;) {
            {
                H1w3hTcW = ZsEJwHvMmrZ9 +(648 - 647);
                for (; fo5MS4AVx > H1w3hTcW;) {
                    yKVk32cEXF = (WsHU60oV[ZsEJwHvMmrZ9].UY3xurMy - WsHU60oV[H1w3hTcW].UY3xurMy) * (WsHU60oV[ZsEJwHvMmrZ9].UY3xurMy - WsHU60oV[H1w3hTcW].UY3xurMy) + (WsHU60oV[ZsEJwHvMmrZ9].O3lMGKep1b - WsHU60oV[H1w3hTcW].O3lMGKep1b) * (WsHU60oV[ZsEJwHvMmrZ9].O3lMGKep1b - WsHU60oV[H1w3hTcW].O3lMGKep1b);
                    cuhqQ5UjAK7f = sqrt (yKVk32cEXF);
                    if (cuhqQ5UjAK7f > A3pUIi)
                        A3pUIi = cuhqQ5UjAK7f;
                    H1w3hTcW = H1w3hTcW +(571 - 570);
                }
            }
            ZsEJwHvMmrZ9 = ZsEJwHvMmrZ9 +(816 - 815);
        }
    }
    printf ("%.4f\n", A3pUIi);
    return (894 - 894);
}

