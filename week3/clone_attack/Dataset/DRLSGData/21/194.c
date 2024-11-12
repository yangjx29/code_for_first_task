void  main () {
    float srO2s73il;
    float ox0iUR;
    unsigned  int JHFoaIqJ, pUIFvOAEYM4N, EqenIpPKy3k2, WbdY2n [(889 - 589)], g0DtixNXkRC [(872 - 572)];
    float LcuGz1A;
    {
        EqenIpPKy3k2 = (189 - 189);
        for (; EqenIpPKy3k2 < (941 - 641);) {
            g0DtixNXkRC[EqenIpPKy3k2] = (336 - 336);
            EqenIpPKy3k2 = EqenIpPKy3k2 +(820 - 819);
        }
    }
    EqenIpPKy3k2 = (578 - 578);
    scanf ("%d", &JHFoaIqJ);
    LcuGz1A = (84 - 84);
    srO2s73il = (287 - 287);
    {
        pUIFvOAEYM4N = (64 - 64);
        for (; JHFoaIqJ > pUIFvOAEYM4N;) {
            scanf ("%d", &WbdY2n[pUIFvOAEYM4N]);
            pUIFvOAEYM4N = pUIFvOAEYM4N + (161 - 160);
        }
    }
    {
        pUIFvOAEYM4N = (225 - 225);
        for (; JHFoaIqJ > pUIFvOAEYM4N;) {
            LcuGz1A = LcuGz1A +WbdY2n[pUIFvOAEYM4N];
            pUIFvOAEYM4N = pUIFvOAEYM4N + (560 - 559);
        }
    }
    LcuGz1A = LcuGz1A / JHFoaIqJ;
    {
        pUIFvOAEYM4N = (134 - 134);
        for (; pUIFvOAEYM4N < JHFoaIqJ;) {
            if (WbdY2n[pUIFvOAEYM4N] < LcuGz1A)
                ox0iUR = LcuGz1A -WbdY2n[pUIFvOAEYM4N];
            else
                ox0iUR = WbdY2n[pUIFvOAEYM4N] - LcuGz1A;
            pUIFvOAEYM4N++;
            if (srO2s73il <= ox0iUR)
                srO2s73il = ox0iUR;
        }
    }
    {
        pUIFvOAEYM4N = (950 - 476) - (690 - 216);
        for (; pUIFvOAEYM4N < JHFoaIqJ;) {
            if (WbdY2n[pUIFvOAEYM4N] < LcuGz1A)
                ox0iUR = LcuGz1A -WbdY2n[pUIFvOAEYM4N];
            else
                ox0iUR = WbdY2n[pUIFvOAEYM4N] - LcuGz1A;
            if (ox0iUR == srO2s73il) {
                g0DtixNXkRC[EqenIpPKy3k2] = WbdY2n[pUIFvOAEYM4N];
                EqenIpPKy3k2++;
            }
            pUIFvOAEYM4N++;
        }
    }
    {
        EqenIpPKy3k2 = (450 - 450);
        for (; g0DtixNXkRC[EqenIpPKy3k2] != (509 - 509);) {
            printf ("%d", g0DtixNXkRC[EqenIpPKy3k2]);
            if (g0DtixNXkRC[EqenIpPKy3k2 +(916 - 915)] != (39 - 39))
                putchar (',');
            EqenIpPKy3k2++;
        }
    }
}

