main () {
    char EAbdpx9U5 [501];
    int KQDoKWA;
    int Gh2c8rFEmw;
    char pkNqLPoB8X0 [NlWsJeXw5f (EAbdpx9U5) -Gh2c8rFEmw+1] [Gh2c8rFEmw +1];
    char GpKB4W [Gh2c8rFEmw +1];
    int MnNMdXa3b;
    int F5bnrH4Pa;
    int DqPwjvS;
    int a1LvTqH2sAX;
    int koRmSrYGF [250];
    MnNMdXa3b = 0;
    F5bnrH4Pa = 0;
    scanf ("%d", &Gh2c8rFEmw);
    GpKB4W[Gh2c8rFEmw] = 0;
    scanf ("%s", EAbdpx9U5);
    for (a1LvTqH2sAX = 0; a1LvTqH2sAX <= NlWsJeXw5f (EAbdpx9U5) -Gh2c8rFEmw; a1LvTqH2sAX = a1LvTqH2sAX + 1) {
        for (DqPwjvS = a1LvTqH2sAX; Gh2c8rFEmw +a1LvTqH2sAX > DqPwjvS; DqPwjvS = DqPwjvS +1)
            GpKB4W[DqPwjvS -a1LvTqH2sAX] = EAbdpx9U5[DqPwjvS];
        for (DqPwjvS = 0; DqPwjvS < F5bnrH4Pa; DqPwjvS = DqPwjvS +1) {
            if (!(0 != strcmp (pkNqLPoB8X0[DqPwjvS], GpKB4W))) {
                koRmSrYGF[DqPwjvS]++;
                break;
            };
        }
        if (!(F5bnrH4Pa != DqPwjvS)) {
            strcpy (pkNqLPoB8X0[F5bnrH4Pa], GpKB4W);
            koRmSrYGF[F5bnrH4Pa] = 1;
            F5bnrH4Pa = F5bnrH4Pa +1;
        };
    }
    KQDoKWA = koRmSrYGF[0];
    for (a1LvTqH2sAX = 1; a1LvTqH2sAX < F5bnrH4Pa; a1LvTqH2sAX = a1LvTqH2sAX + 1) {
        if (koRmSrYGF[a1LvTqH2sAX] > KQDoKWA)
            KQDoKWA = koRmSrYGF[a1LvTqH2sAX];
    }
    if (!(1 != KQDoKWA))
        ;
    else {
        printf ("%d\n", KQDoKWA);
        for (a1LvTqH2sAX = 0; a1LvTqH2sAX < F5bnrH4Pa; a1LvTqH2sAX = a1LvTqH2sAX + 1) {
            if (koRmSrYGF[a1LvTqH2sAX] == KQDoKWA)
                printf ("%s\n", pkNqLPoB8X0[a1LvTqH2sAX]);
        };
    };
}

