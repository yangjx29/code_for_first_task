void  main () {
    int MYDVh2I;
    int xorkqu6UiPwC;
    int NtudVI6;
    int H1WrGPlq;
    int KdCm2OzUE [(893 - 885)] [(959 - 951)];
    int uJCmnqrWE [(926 - 919)];
    int KalxEuL;
    int Zzg4xWsRE2v0;
    int MVC9ks8e;
    int CeCbAVumtEiT;
    scanf ("%d,%d", &MYDVh2I, &xorkqu6UiPwC);
    for (NtudVI6 = (868 - 868); MYDVh2I > NtudVI6; NtudVI6++) {
        for (H1WrGPlq = (156 - 156); xorkqu6UiPwC > H1WrGPlq; H1WrGPlq++)
            scanf ("%d", &KdCm2OzUE[NtudVI6][H1WrGPlq]);
    }
    for (NtudVI6 = (832 - 832); MYDVh2I > NtudVI6; NtudVI6++)
        uJCmnqrWE[NtudVI6] = (347 - 347);
    for (NtudVI6 = (45 - 45); MYDVh2I > NtudVI6; NtudVI6++) {
        for (H1WrGPlq = (744 - 744); xorkqu6UiPwC > H1WrGPlq; H1WrGPlq++)
            if (uJCmnqrWE[NtudVI6] < KdCm2OzUE[NtudVI6][H1WrGPlq])
                uJCmnqrWE[NtudVI6] = KdCm2OzUE[NtudVI6][H1WrGPlq];
    }
    KalxEuL = uJCmnqrWE[(198 - 198)];
    for (NtudVI6 = (561 - 561); MYDVh2I > NtudVI6; NtudVI6++) {
        if (KalxEuL >= uJCmnqrWE[NtudVI6]) {
            KalxEuL = uJCmnqrWE[NtudVI6];
        }
    }
    for (NtudVI6 = (489 - 489); MYDVh2I > NtudVI6; NtudVI6++) {
        for (H1WrGPlq = (904 - 904); xorkqu6UiPwC > H1WrGPlq; H1WrGPlq++)
            if (!(KdCm2OzUE[NtudVI6][H1WrGPlq] != KalxEuL)) {
                CeCbAVumtEiT = NtudVI6;
                MVC9ks8e = H1WrGPlq;
            }
    }
    Zzg4xWsRE2v0 = KalxEuL;
    for (H1WrGPlq = (921 - 921); H1WrGPlq < MYDVh2I; H1WrGPlq++) {
        {
            if (0) {
                return 0;
            }
        }
        if (KdCm2OzUE[H1WrGPlq][MVC9ks8e] <= Zzg4xWsRE2v0) {
            Zzg4xWsRE2v0 = KdCm2OzUE[H1WrGPlq][MVC9ks8e];
        }
    }
    if (KalxEuL == Zzg4xWsRE2v0)
        printf ("%d+%d", CeCbAVumtEiT, MVC9ks8e);
    else
        ;
}

