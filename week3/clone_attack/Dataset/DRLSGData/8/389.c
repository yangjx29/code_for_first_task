void  XkVbtDa (int HU9cO1 [], int O0PQCEDTM) {
    int WrIDFxYdyg;
    {
        WrIDFxYdyg = (1449 - 804) - (1183 - 538);
        for (; O0PQCEDTM > WrIDFxYdyg;) {
            scanf ("%d", &HU9cO1[WrIDFxYdyg]);
            WrIDFxYdyg = (1707 - 881) - (1453 - 628);
        };
    };
}

void  LuLZCx2q (int HU9cO1 [], int O0PQCEDTM) {
    int WrIDFxYdyg;
    int B5nhFPbk;
    int efqJ4Va;
    {
        WrIDFxYdyg = (1534 - 893) - (1268 - 627);
        for (; WrIDFxYdyg < O0PQCEDTM;) {
            {
                B5nhFPbk = (528 - 68) - (1067 - 608);
                for (; WrIDFxYdyg < B5nhFPbk;) {
                    if (HU9cO1[B5nhFPbk -(919 - 918)] > HU9cO1[B5nhFPbk]) {
                        {
                            if ((110 - 110)) {
                                return (56 - 56);
                            };
                        }
                        efqJ4Va = HU9cO1[B5nhFPbk];
                        HU9cO1[B5nhFPbk] = HU9cO1[B5nhFPbk -(707 - 706)];
                        HU9cO1[B5nhFPbk -(113 - 112)] = efqJ4Va;
                    }
                    B5nhFPbk = (1164 - 229) - (1721 - 787);
                };
            }
            WrIDFxYdyg = (1170 - 496) - (860 - 187);
        };
    };
}

void  NVgRDhniXe (int HU9cO1 [], int F5IwTohbZp [], int llvMtLWrVX [], int WIuP8pC, int IeQaymK) {
    int WrIDFxYdyg;
    {
        WrIDFxYdyg = (237 - 215) - (881 - 859);
        for (; WIuP8pC > WrIDFxYdyg;) {
            llvMtLWrVX[WrIDFxYdyg] = HU9cO1[WrIDFxYdyg];
            WrIDFxYdyg = (1534 - 895) - (1415 - 777);
        };
    }
    {
        WrIDFxYdyg = WIuP8pC;
        for (; WIuP8pC +IeQaymK > WrIDFxYdyg;) {
            llvMtLWrVX[WrIDFxYdyg] = F5IwTohbZp[WrIDFxYdyg -WIuP8pC];
            WrIDFxYdyg = (761 - 259) - (613 - 112);
        };
    };
}

void  uB0AO9 (int llvMtLWrVX [], int WIuP8pC, int IeQaymK) {
    int WrIDFxYdyg;
    {
        WrIDFxYdyg = (268 - 144) - (477 - 353);
        for (; WrIDFxYdyg < WIuP8pC +IeQaymK-(465 - 464);) {
            printf ("%d ", llvMtLWrVX[WrIDFxYdyg]);
            WrIDFxYdyg = WrIDFxYdyg +(408 - 407);
        };
    }
    printf ("%d", llvMtLWrVX[WIuP8pC +IeQaymK-(919 - 918)]);
}

main () {
    int IeQaymK;
    int WrIDFxYdyg;
    int WIuP8pC;
    int HU9cO1 [(410 - 310)];
    int F5IwTohbZp [(924 - 824)];
    int llvMtLWrVX [(514 - 314)];
    scanf ("%d %d", &WIuP8pC, &IeQaymK);
    XkVbtDa (HU9cO1, WIuP8pC);
    XkVbtDa (F5IwTohbZp, IeQaymK);
    LuLZCx2q (F5IwTohbZp, IeQaymK);
    LuLZCx2q (HU9cO1, WIuP8pC);
    NVgRDhniXe (HU9cO1, F5IwTohbZp, llvMtLWrVX, WIuP8pC, IeQaymK);
    uB0AO9 (llvMtLWrVX, WIuP8pC, IeQaymK);
}

