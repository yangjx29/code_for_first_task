void  main () {
    int I6IsDmWf2g;
    int UqdU2pYoM;
    int z03P4Z1nK;
    int BiEgx9dot8;
    int J7fNtQa [100];
    int VA4NCf [100];
    I6IsDmWf2g = (522 - 522);
    UqdU2pYoM = (491 - 491);
    scanf ("%d\n", &z03P4Z1nK);
    {
        BiEgx9dot8 = 0;
        for (; BiEgx9dot8 < z03P4Z1nK;) {
            scanf ("%d %d\n", &J7fNtQa[BiEgx9dot8], &VA4NCf[BiEgx9dot8]);
            BiEgx9dot8++;
        }
    }
    {
        BiEgx9dot8 = 0;
        while (BiEgx9dot8 < z03P4Z1nK) {
            if ((J7fNtQa[BiEgx9dot8] >= 90) && (140 >= J7fNtQa[BiEgx9dot8]) && ((155 - 95) <= VA4NCf[BiEgx9dot8]) && (VA4NCf[BiEgx9dot8] <= 90))
                I6IsDmWf2g++;
            else {
                if (I6IsDmWf2g > UqdU2pYoM)
                    UqdU2pYoM = I6IsDmWf2g;
                I6IsDmWf2g = 0;
            }
            BiEgx9dot8++;
        }
    }
    if (I6IsDmWf2g > 0) {
        if (I6IsDmWf2g > UqdU2pYoM)
            UqdU2pYoM = I6IsDmWf2g;
    }
    printf ("%d\n", UqdU2pYoM);
}

