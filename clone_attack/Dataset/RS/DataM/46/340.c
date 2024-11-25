void  main () {
    int Ryrhpi9;
    int Xpe58MFCr;
    int eRmTaFC;
    int TqMEd2PBi;
    int N6QIhyK;
    int LB0n76oCtNp;
    int FT2G1Og;
    int oblWgm2BD [100] [100];
    scanf ("%d%d", &Ryrhpi9, &Xpe58MFCr);
    for (eRmTaFC = 0; Ryrhpi9 -(309 - 308) >= eRmTaFC; eRmTaFC++)
        for (N6QIhyK = 0; N6QIhyK <= Xpe58MFCr -1; N6QIhyK++)
            scanf ("%d", &oblWgm2BD[eRmTaFC][N6QIhyK]);
    eRmTaFC = 0;
    N6QIhyK = 0;
    TqMEd2PBi = Ryrhpi9 -1;
    LB0n76oCtNp = Xpe58MFCr -1;
    for (;;) {
        for (FT2G1Og = N6QIhyK; LB0n76oCtNp >= FT2G1Og; FT2G1Og++)
            printf ("%d\n", oblWgm2BD[eRmTaFC][FT2G1Og]);
        eRmTaFC++;
        if (eRmTaFC > TqMEd2PBi)
            break;
        for (FT2G1Og = eRmTaFC; TqMEd2PBi >= FT2G1Og; FT2G1Og++)
            printf ("%d\n", oblWgm2BD[FT2G1Og][LB0n76oCtNp]);
        LB0n76oCtNp--;
        if (N6QIhyK > LB0n76oCtNp)
            break;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (FT2G1Og = LB0n76oCtNp; FT2G1Og >= N6QIhyK; FT2G1Og--)
            printf ("%d\n", oblWgm2BD[TqMEd2PBi][FT2G1Og]);
        TqMEd2PBi--;
        if (eRmTaFC > TqMEd2PBi)
            break;
        for (FT2G1Og = TqMEd2PBi; FT2G1Og >= eRmTaFC; FT2G1Og--)
            printf ("%d\n", oblWgm2BD[FT2G1Og][N6QIhyK]);
        N6QIhyK++;
        if (N6QIhyK > LB0n76oCtNp)
            break;
    };
}

