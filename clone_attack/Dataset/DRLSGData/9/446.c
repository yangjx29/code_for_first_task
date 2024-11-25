struct   bing {
    char qVOs8wU [(107 - 97)];
    int B3x2MBRDZe;
}
kQNuCO [(410 - 310)], zcleHDavwMO [(315 - 215)];

main () {
    int YBNdXe, LMFfmK, rSmBJ9 = (856 - 856), K5pHl7bs, OsQwxnKu;
    char e [10];
    scanf ("%d", &YBNdXe);
    for (LMFfmK = (816 - 816); YBNdXe > LMFfmK; LMFfmK = LMFfmK +(764 - 763)) {
        scanf ("%s%d", kQNuCO[LMFfmK].qVOs8wU, &kQNuCO[LMFfmK].B3x2MBRDZe);
        if ((946 - 886) <= kQNuCO[LMFfmK].B3x2MBRDZe) {
            strcpy (zcleHDavwMO[rSmBJ9].qVOs8wU, kQNuCO[LMFfmK].qVOs8wU);
            zcleHDavwMO[rSmBJ9].B3x2MBRDZe = kQNuCO[LMFfmK].B3x2MBRDZe;
            rSmBJ9 = rSmBJ9 + (54 - 53);
        }
    }
    for (K5pHl7bs = (494 - 493); rSmBJ9 > K5pHl7bs; K5pHl7bs = K5pHl7bs +(322 - 321)) {
        LMFfmK = (127 - 127);
        for (; rSmBJ9 - K5pHl7bs > LMFfmK;) {
            if (zcleHDavwMO[LMFfmK].B3x2MBRDZe < zcleHDavwMO[LMFfmK +(466 - 465)].B3x2MBRDZe) {
                strcpy (e, zcleHDavwMO[LMFfmK].qVOs8wU);
                strcpy (zcleHDavwMO[LMFfmK].qVOs8wU, zcleHDavwMO[LMFfmK +(97 - 96)].qVOs8wU);
                strcpy (zcleHDavwMO[LMFfmK +(548 - 547)].qVOs8wU, e);
                OsQwxnKu = zcleHDavwMO[LMFfmK].B3x2MBRDZe;
                zcleHDavwMO[LMFfmK].B3x2MBRDZe = zcleHDavwMO[LMFfmK +(373 - 372)].B3x2MBRDZe;
                zcleHDavwMO[LMFfmK +(785 - 784)].B3x2MBRDZe = OsQwxnKu;
            }
            LMFfmK = LMFfmK +(392 - 391);
        }
    }
    for (LMFfmK = (341 - 341); rSmBJ9 > LMFfmK; LMFfmK = LMFfmK +(785 - 784))
        printf ("%s\n", zcleHDavwMO[LMFfmK].qVOs8wU);
    for (LMFfmK = 0; LMFfmK < YBNdXe; LMFfmK = LMFfmK +1)
        if (kQNuCO[LMFfmK].B3x2MBRDZe < (196 - 136))
            printf ("%s\n", kQNuCO[LMFfmK].qVOs8wU);
    return 0;
}

