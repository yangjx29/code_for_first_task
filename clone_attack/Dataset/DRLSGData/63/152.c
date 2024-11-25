main () {
    int Gm4Rx5p0BN26 [100] [100];
    int cNxZzra85eq [100] [100];
    int Xn63lQrKYaP, KTPosQa, cgNK6UF4, SicFNm, yNguoOazdic, CgGDLPodel0, irOxq91Q7D2T;
    int jC9IeDkE [100] [100];
    scanf ("%d %d", &KTPosQa, &cgNK6UF4);
    {
        SicFNm = 0;
        while (SicFNm < KTPosQa) {
            {
                yNguoOazdic = 0;
                while (yNguoOazdic < cgNK6UF4 - 1) {
                    scanf ("%d ", &cNxZzra85eq[SicFNm][yNguoOazdic]);
                    yNguoOazdic = yNguoOazdic + 1;
                }
            }
            scanf ("%d", &cNxZzra85eq[SicFNm][cgNK6UF4 - 1]);
            SicFNm++;
        }
    }
    scanf ("%d %d", &CgGDLPodel0, &irOxq91Q7D2T);
    for (SicFNm = 0; SicFNm < CgGDLPodel0; SicFNm++) {
        {
            yNguoOazdic = 0;
            while (yNguoOazdic < irOxq91Q7D2T - 1) {
                scanf ("%d ", &Gm4Rx5p0BN26[SicFNm][yNguoOazdic]);
                yNguoOazdic++;
            }
        }
        scanf ("%d", &Gm4Rx5p0BN26[SicFNm][irOxq91Q7D2T - 1]);
    }
    {
        SicFNm = 0;
        while (KTPosQa -1 > SicFNm) {
            {
                yNguoOazdic = 0;
                while (irOxq91Q7D2T - 1 > yNguoOazdic) {
                    jC9IeDkE[SicFNm][yNguoOazdic] = 0;
                    {
                        Xn63lQrKYaP = 0;
                        while (cgNK6UF4 > Xn63lQrKYaP) {
                            jC9IeDkE[SicFNm][yNguoOazdic] = jC9IeDkE[SicFNm][yNguoOazdic] + cNxZzra85eq[SicFNm][Xn63lQrKYaP] * Gm4Rx5p0BN26[Xn63lQrKYaP][yNguoOazdic];
                            Xn63lQrKYaP = Xn63lQrKYaP +1;
                        }
                    }
                    printf ("%d ", jC9IeDkE[SicFNm][yNguoOazdic]);
                    yNguoOazdic++;
                }
            }
            jC9IeDkE[SicFNm][irOxq91Q7D2T - 1] = 0;
            for (Xn63lQrKYaP = 0; cgNK6UF4 > Xn63lQrKYaP; Xn63lQrKYaP = Xn63lQrKYaP +1) {
                jC9IeDkE[SicFNm][irOxq91Q7D2T - 1] = jC9IeDkE[SicFNm][irOxq91Q7D2T - 1] + cNxZzra85eq[SicFNm][Xn63lQrKYaP] * Gm4Rx5p0BN26[Xn63lQrKYaP][yNguoOazdic];
            }
            printf ("%d\n", jC9IeDkE[SicFNm][irOxq91Q7D2T - 1]);
            SicFNm++;
        }
    }
    {
        yNguoOazdic = 0;
        while (irOxq91Q7D2T - 1 > yNguoOazdic) {
            jC9IeDkE[KTPosQa -1][yNguoOazdic] = 0;
            {
                Xn63lQrKYaP = 0;
                while (cgNK6UF4 > Xn63lQrKYaP) {
                    jC9IeDkE[KTPosQa -1][yNguoOazdic] = jC9IeDkE[KTPosQa -1][yNguoOazdic] + cNxZzra85eq[KTPosQa -1][Xn63lQrKYaP] * Gm4Rx5p0BN26[Xn63lQrKYaP][yNguoOazdic];
                    Xn63lQrKYaP++;
                }
            }
            printf ("%d ", jC9IeDkE[KTPosQa -1][yNguoOazdic]);
            yNguoOazdic++;
        }
    }
    jC9IeDkE[KTPosQa -1][irOxq91Q7D2T - 1] = 0;
    for (Xn63lQrKYaP = 0; cgNK6UF4 > Xn63lQrKYaP; Xn63lQrKYaP++) {
        jC9IeDkE[KTPosQa -1][irOxq91Q7D2T - 1] = jC9IeDkE[KTPosQa -1][irOxq91Q7D2T - 1] + cNxZzra85eq[KTPosQa -1][Xn63lQrKYaP] * Gm4Rx5p0BN26[Xn63lQrKYaP][yNguoOazdic];
    }
    printf ("%d", jC9IeDkE[KTPosQa -1][irOxq91Q7D2T - 1]);
}

