void  main () {
    int RVjFO6s0i92G (int ZGPcvzEdF4aR);
    int bfgPprWw (int ZGPcvzEdF4aR);
    int YApFr9Y, ibBrqO, ZGPcvzEdF4aR, a [400], Bp91Uc = 0;
    scanf ("%d %d", &YApFr9Y, &ibBrqO);
    for (ZGPcvzEdF4aR = YApFr9Y; ZGPcvzEdF4aR <= ibBrqO; ZGPcvzEdF4aR++) {
        if ((RVjFO6s0i92G (ZGPcvzEdF4aR) == 1) && (bfgPprWw (ZGPcvzEdF4aR) == 1)) {
            a[Bp91Uc] = ZGPcvzEdF4aR;
            Bp91Uc = Bp91Uc +1;
        };
    }
    if (!(0 == Bp91Uc)) {
        printf ("%d", a[0]);
        {
            ZGPcvzEdF4aR = 1;
            while (Bp91Uc > ZGPcvzEdF4aR) {
                printf (",%d", a[ZGPcvzEdF4aR]);
                ZGPcvzEdF4aR = ZGPcvzEdF4aR +1;
            };
        };
    }
    else
        printf ("no");
}

int RVjFO6s0i92G (int ZGPcvzEdF4aR) {
    int f6Tvna, rNTIfXh;
    rNTIfXh = sqrt (ZGPcvzEdF4aR);
    {
        f6Tvna = 2;
        while (f6Tvna <= rNTIfXh) {
            if (ZGPcvzEdF4aR % f6Tvna == 0)
                break;
            f6Tvna++;
        };
    }
    if (f6Tvna > rNTIfXh)
        return (1);
    else
        return (0);
}

int bfgPprWw (int ZGPcvzEdF4aR) {
    int XySBOqc3h, BA76CtLW = 0;
    XySBOqc3h = ZGPcvzEdF4aR;
    while (BA76CtLW < XySBOqc3h) {
        BA76CtLW = BA76CtLW *10 + ZGPcvzEdF4aR % 10;
        ZGPcvzEdF4aR = ZGPcvzEdF4aR / 10;
    }
    if (BA76CtLW == XySBOqc3h)
        return (1);
    else
        return (0);
}

