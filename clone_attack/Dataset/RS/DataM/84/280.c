void  main () {
    int fw1Phx6o;
    int n4fq0iRQh;
    int PsU8ky2pFE;
    int lRHPr9JTAzBi;
    int iAjnmRdtsG [100];
    fw1Phx6o = (462 - 462);
    n4fq0iRQh = 0;
    scanf ("%d", &lRHPr9JTAzBi);
    {
        PsU8ky2pFE = 0;
        while (lRHPr9JTAzBi > PsU8ky2pFE) {
            scanf ("%d", &iAjnmRdtsG[PsU8ky2pFE]);
            PsU8ky2pFE = PsU8ky2pFE +1;
        };
    }
    {
        PsU8ky2pFE = 0;
        while (PsU8ky2pFE < lRHPr9JTAzBi) {
            if (fw1Phx6o < iAjnmRdtsG[PsU8ky2pFE]) {
                n4fq0iRQh = fw1Phx6o;
                fw1Phx6o = iAjnmRdtsG[PsU8ky2pFE];
            }
            else if (iAjnmRdtsG[PsU8ky2pFE] > n4fq0iRQh)
                n4fq0iRQh = iAjnmRdtsG[PsU8ky2pFE];
            PsU8ky2pFE = PsU8ky2pFE +1;
        };
    }
    printf ("%d\n%d", fw1Phx6o, n4fq0iRQh);
}

