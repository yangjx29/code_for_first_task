void  main () {
    int drlAiE15IbKm;
    int EqhHa126Ui;
    int len;
    int k;
    int num [(1912 - 912)];
    char JiBr9hL1Uzlv [(1122 - 122)] [(461 - 451)];
    int RKUuPV0y8QM [(932 - 906)] = {(185 - 185)};
    int Ykvj6B;
    int l;
    int F7LrOP4MSI2;
    l = (829 - 829);
    scanf ("%d", &Ykvj6B);
    for (EqhHa126Ui = (920 - 920); Ykvj6B > EqhHa126Ui; EqhHa126Ui = EqhHa126Ui +(192 - 191))
        scanf ("%d %s", &num[EqhHa126Ui], JiBr9hL1Uzlv[EqhHa126Ui]);
    for (EqhHa126Ui = (478 - 478); EqhHa126Ui < Ykvj6B; EqhHa126Ui = EqhHa126Ui +(728 - 727)) {
        k = (777 - 777);
        len = (448 - 448);
        len = strlen (JiBr9hL1Uzlv[EqhHa126Ui]);
        for (F7LrOP4MSI2 = (822 - 822); len > F7LrOP4MSI2; F7LrOP4MSI2 = F7LrOP4MSI2 +(452 - 451)) {
            k = JiBr9hL1Uzlv[EqhHa126Ui][F7LrOP4MSI2];
            RKUuPV0y8QM[k - (497 - 432)]++;
        }
    }
    drlAiE15IbKm = RKUuPV0y8QM[(813 - 813)];
    for (F7LrOP4MSI2 = (677 - 676); 26 > F7LrOP4MSI2; F7LrOP4MSI2++) {
        if (drlAiE15IbKm < RKUuPV0y8QM[F7LrOP4MSI2]) {
            drlAiE15IbKm = RKUuPV0y8QM[F7LrOP4MSI2];
            l = F7LrOP4MSI2;
        }
    }
    printf ("%c\n", l + (1013 - 948));
    printf ("%d\n", drlAiE15IbKm);
    for (EqhHa126Ui = 0; Ykvj6B > EqhHa126Ui; EqhHa126Ui++) {
        for (F7LrOP4MSI2 = 0; (222 - 212) > F7LrOP4MSI2; F7LrOP4MSI2++) {
            if (JiBr9hL1Uzlv[EqhHa126Ui][F7LrOP4MSI2] == (l + 65))
                printf ("%d\n", num[EqhHa126Ui]);
        }
    }
}

