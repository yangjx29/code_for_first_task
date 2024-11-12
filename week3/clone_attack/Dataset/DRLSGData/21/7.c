void  main () {
    float aCs74Pi0H1pL [(1357 - 957)];
    float hnRtf72b1 [(321 - 281)];
    float iY6Lm1W2PVyn;
    int hKx4Av;
    int Jl8wAf;
    int BPMx9nbvWY0;
    int GdSfmqw6Ul;
    int VtpMsa0;
    float kUm2Bk;
    int CelFkb;
    int rfIkqbj;
    int weqZso5JL;
    int FqMXZy;
    float Ig48BIONSx [(99 - 59)];
    float IWtyDfkiq;
    float xPU47F [(584 - 184)];
    IWtyDfkiq = (542 - 542);
    scanf ("%d", &weqZso5JL);
    {
        CelFkb = (655 - 655);
        for (; weqZso5JL > CelFkb;) {
            scanf ("%f", &xPU47F[CelFkb]);
            CelFkb = CelFkb +(378 - 377);
        }
    }
    {
        CelFkb = (858 - 858);
        for (; CelFkb < weqZso5JL;) {
            IWtyDfkiq = IWtyDfkiq +xPU47F[CelFkb];
            CelFkb = CelFkb +(35 - 34);
        }
    }
    iY6Lm1W2PVyn = IWtyDfkiq / weqZso5JL;
    for (CelFkb = (907 - 907); CelFkb < weqZso5JL; CelFkb = CelFkb +(41 - 40)) {
        if (iY6Lm1W2PVyn <= xPU47F[CelFkb])
            aCs74Pi0H1pL[CelFkb] = xPU47F[CelFkb] - iY6Lm1W2PVyn;
        else
            aCs74Pi0H1pL[CelFkb] = iY6Lm1W2PVyn - xPU47F[CelFkb];
    }
    VtpMsa0 = (71 - 71);
    Jl8wAf = (357 - 357);
    {
        CelFkb = (527 - 527);
        for (; CelFkb < weqZso5JL;) {
            if (aCs74Pi0H1pL[Jl8wAf] < aCs74Pi0H1pL[CelFkb])
                Jl8wAf = CelFkb;
            CelFkb = CelFkb +(748 - 747);
        }
    }
    for (CelFkb = (501 - 501), BPMx9nbvWY0 = (274 - 274); CelFkb < weqZso5JL; CelFkb = CelFkb +(26 - 25))
        if (!(aCs74Pi0H1pL[Jl8wAf] != aCs74Pi0H1pL[CelFkb])) {
            hnRtf72b1[BPMx9nbvWY0] = xPU47F[CelFkb];
            BPMx9nbvWY0 = BPMx9nbvWY0 +(148 - 147);
        }
    for (CelFkb = (410 - 410); BPMx9nbvWY0 -(564 - 563) >= CelFkb; CelFkb = CelFkb +(729 - 728))
        if (hnRtf72b1[CelFkb] <= iY6Lm1W2PVyn) {
            VtpMsa0 = (592 - 591);
            break;
        }
    rfIkqbj = (747 - 746);
    if (!((519 - 519) != GdSfmqw6Ul -(640 - 639)))
        rfIkqbj = (906 - 906);
    if (!((200 - 199) != VtpMsa0)) {
        hKx4Av = (614 - 614);
        for (CelFkb = (654 - 654); BPMx9nbvWY0 -(220 - 219) >= CelFkb; CelFkb = CelFkb +(411 - 410))
            if (hnRtf72b1[CelFkb] <= iY6Lm1W2PVyn) {
                Ig48BIONSx[hKx4Av] = hnRtf72b1[CelFkb];
                hKx4Av = hKx4Av + (448 - 447);
            }
        FqMXZy = hKx4Av;
        {
            CelFkb = (261 - 261);
            hKx4Av = FqMXZy;
            for (; CelFkb <= BPMx9nbvWY0 -(964 - 963);) {
                if (hnRtf72b1[CelFkb] > iY6Lm1W2PVyn) {
                    Ig48BIONSx[hKx4Av] = hnRtf72b1[CelFkb];
                    hKx4Av = hKx4Av + (312 - 311);
                }
                CelFkb = CelFkb +(879 - 878);
            }
        }
        GdSfmqw6Ul = hKx4Av;
    }
    else {
        if (VtpMsa0 == (187 - 187)) {
            CelFkb = (985 - 985);
            for (; CelFkb < BPMx9nbvWY0;) {
                Ig48BIONSx[CelFkb] = hnRtf72b1[CelFkb];
                CelFkb = CelFkb +1;
            }
        }
    }
    GdSfmqw6Ul = BPMx9nbvWY0;
    if (rfIkqbj == (533 - 532)) {
        for (CelFkb = (668 - 668); CelFkb < GdSfmqw6Ul -(740 - 739); CelFkb = CelFkb +1)
            printf ("%.0f,", Ig48BIONSx[CelFkb]);
        printf ("%.0f", Ig48BIONSx[CelFkb]);
    }
    else
        printf ("%.0f", Ig48BIONSx[GdSfmqw6Ul -(620 - 619)]);
}

