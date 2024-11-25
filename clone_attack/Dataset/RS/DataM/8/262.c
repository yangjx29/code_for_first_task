void  main () {
    int a [100], VaVQrg [100];
    int nPl938IT, cCtB8dIZrO, i, j, cAEkDZX;
    scanf ("%d%d", &nPl938IT, &cCtB8dIZrO);
    {
        i = 0;
        while (i < nPl938IT) {
            scanf ("%d", &a[i]);
            i = i + 1;
        };
    }
    for (i = 0; cCtB8dIZrO > i; i = i + 1)
        scanf ("%d", &VaVQrg[i]);
    {
        j = 0;
        while (j <= nPl938IT - 1) {
            for (i = 0; i < nPl938IT - j - 1; i = i + 1)
                if (a[i] > a[i + 1]) {
                    cAEkDZX = a[i];
                    a[i] = a[i + 1];
                    a[i + 1] = cAEkDZX;
                }
            j = j + 1;
        };
    }
    for (j = 0; j <= cCtB8dIZrO - 1; j = j + 1)
        for (i = 0; i < cCtB8dIZrO - j - 1; i = i + 1)
            if (VaVQrg[i] > VaVQrg[i + 1]) {
                cAEkDZX = VaVQrg[i];
                VaVQrg[i] = VaVQrg[i + 1];
                VaVQrg[i + 1] = cAEkDZX;
            }
    for (i = 0; i < nPl938IT; i = i + 1)
        printf ("%d ", a[i]);
    {
        i = 0;
        while (i < cCtB8dIZrO - 1) {
            printf ("%d ", VaVQrg[i]);
            i++;
        };
    }
    printf ("%d", VaVQrg[cCtB8dIZrO - 1]);
}

