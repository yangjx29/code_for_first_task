void  main (int hgCz0jNnt, char *ct3Zd5 []) {
    int PxSJK2ap9Tm1 [100];
    int W32k17LmgD0;
    struct   student {
        char wdyWKB5lezJ [10];
        int f8zUSqXOuDv;
    }
    pAEzVpo [(802 - 702)];
    struct   student {
        char wdyWKB5lezJ [10];
        int f8zUSqXOuDv;
    }
    ekXxPKmSq [(950 - 850)];
    int Isnl7r [100];
    int IrPJ0DM3VfC;
    int IaMK9PqNt8;
    int lFq06muAfc2k;
    int nLhPxp4atRk;
    int dYf1ghe7Wt;
    W32k17LmgD0 = (373 - 373);
    scanf ("%d", &dYf1ghe7Wt);
    {
        IrPJ0DM3VfC = 418 - 418;
        while (IrPJ0DM3VfC < dYf1ghe7Wt) {
            scanf ("%s", &pAEzVpo[IrPJ0DM3VfC].wdyWKB5lezJ);
            scanf ("%d", &pAEzVpo[IrPJ0DM3VfC].f8zUSqXOuDv);
            IrPJ0DM3VfC++;
        }
    }
    {
        IrPJ0DM3VfC = 0;
        while (IrPJ0DM3VfC < dYf1ghe7Wt) {
            if (pAEzVpo[IrPJ0DM3VfC].f8zUSqXOuDv >= (874 - 814)) {
                PxSJK2ap9Tm1[W32k17LmgD0] = pAEzVpo[IrPJ0DM3VfC].f8zUSqXOuDv;
                Isnl7r[W32k17LmgD0] = IrPJ0DM3VfC;
                W32k17LmgD0++;
            }
            IrPJ0DM3VfC++;
        }
    }
    {
        IrPJ0DM3VfC = 0;
        while (IrPJ0DM3VfC < W32k17LmgD0) {
            {
                lFq06muAfc2k = 0;
                while (lFq06muAfc2k < W32k17LmgD0) {
                    if (PxSJK2ap9Tm1[lFq06muAfc2k] < PxSJK2ap9Tm1[lFq06muAfc2k + (558 - 557)]) {
                        nLhPxp4atRk = PxSJK2ap9Tm1[lFq06muAfc2k];
                        PxSJK2ap9Tm1[lFq06muAfc2k] = PxSJK2ap9Tm1[lFq06muAfc2k + 1];
                        PxSJK2ap9Tm1[lFq06muAfc2k + 1] = nLhPxp4atRk;
                        nLhPxp4atRk = Isnl7r[lFq06muAfc2k];
                        Isnl7r[lFq06muAfc2k] = Isnl7r[lFq06muAfc2k + 1];
                        Isnl7r[lFq06muAfc2k + 1] = nLhPxp4atRk;
                    }
                    lFq06muAfc2k++;
                }
            }
            IrPJ0DM3VfC++;
        }
    }
    {
        IrPJ0DM3VfC = 0;
        while (IrPJ0DM3VfC < W32k17LmgD0) {
            IaMK9PqNt8 = Isnl7r[IrPJ0DM3VfC];
            printf ("%s\n", pAEzVpo[IaMK9PqNt8].wdyWKB5lezJ);
            IrPJ0DM3VfC++;
        }
    }
    {
        IrPJ0DM3VfC = 0;
        while (IrPJ0DM3VfC < dYf1ghe7Wt) {
            if (pAEzVpo[IrPJ0DM3VfC].f8zUSqXOuDv < 60) {
                printf ("%s\n", pAEzVpo[IrPJ0DM3VfC].wdyWKB5lezJ);
            }
            IrPJ0DM3VfC++;
        }
    }
}

