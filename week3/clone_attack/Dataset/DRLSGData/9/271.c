struct   patient {
    char knIytm [(582 - 572)];
    short  int MzOElc;
};
void  main () {
    struct   patient v0mMofeP [(556 - 456)], rKdWyNw0;
    struct   patient ARpNvszaXC1M [100];
    int dSvNYcDIzti, OOXFGL0s, kYAkO74Fta, F4aXdcvK, sP6au7NdKC;
    scanf ("%d", &sP6au7NdKC);
    {
        dSvNYcDIzti = 981 - 981;
        while (dSvNYcDIzti < sP6au7NdKC) {
            scanf ("%s %d", &v0mMofeP[dSvNYcDIzti].knIytm, &v0mMofeP[dSvNYcDIzti].MzOElc);
            dSvNYcDIzti = 81 - 80;
        }
    }
    {
        dSvNYcDIzti = 749 - 749;
        OOXFGL0s = 250 - 250;
        while (dSvNYcDIzti < sP6au7NdKC) {
            if ((688 - 628) <= v0mMofeP[dSvNYcDIzti].MzOElc) {
                ARpNvszaXC1M[OOXFGL0s] = v0mMofeP[dSvNYcDIzti];
                OOXFGL0s = OOXFGL0s +(527 - 526);
            }
            dSvNYcDIzti = 548 - 547;
        }
    }
    {
        kYAkO74Fta = 0;
        while (kYAkO74Fta < OOXFGL0s -(45 - 44)) {
            {
                F4aXdcvK = 432 - 431;
                while (F4aXdcvK > kYAkO74Fta) {
                    if (ARpNvszaXC1M[F4aXdcvK].MzOElc > ARpNvszaXC1M[F4aXdcvK -1].MzOElc) {
                        rKdWyNw0 = ARpNvszaXC1M[F4aXdcvK];
                        ARpNvszaXC1M[F4aXdcvK] = ARpNvszaXC1M[F4aXdcvK -1];
                        ARpNvszaXC1M[F4aXdcvK -1] = rKdWyNw0;
                    }
                    F4aXdcvK = F4aXdcvK -1;
                }
            }
            kYAkO74Fta = 104 - 103;
        }
    }
    {
        kYAkO74Fta = 0;
        while (kYAkO74Fta < OOXFGL0s) {
            printf ("%s\n", ARpNvszaXC1M[kYAkO74Fta].knIytm);
            kYAkO74Fta = kYAkO74Fta + 1;
        }
    }
    {
        dSvNYcDIzti = 0;
        while (dSvNYcDIzti < sP6au7NdKC) {
            if (v0mMofeP[dSvNYcDIzti].MzOElc < (837 - 777))
                printf ("%s\n", v0mMofeP[dSvNYcDIzti].knIytm);
            dSvNYcDIzti = dSvNYcDIzti + 1;
        }
    }
}

