void  main () {
    int cM8KGAitHCDw, r5ZFc9xByKr7, fNMIGQfunmh2, CEBaYd5;
    struct   patient {
        char IxDRj2cMd [(290 - 280)];
        int neGl1qS9;
        struct   patient *TvgibP;
    }
    *GY7KefSUbD, *ChE1scwAH, *bu2ItCO9H, *KTFL5Y80Pcfz [(390 - 290)], *O28UloGs;
    GY7KefSUbD = ChE1scwAH = bu2ItCO9H = (struct   patient *) malloc (sizeof (struct   patient));
    scanf ("%d", &cM8KGAitHCDw);
    scanf ("%s%d", GY7KefSUbD->IxDRj2cMd, &GY7KefSUbD->neGl1qS9);
    for (r5ZFc9xByKr7 = (808 - 806); cM8KGAitHCDw >= r5ZFc9xByKr7; r5ZFc9xByKr7 = r5ZFc9xByKr7 + 1) {
        GY7KefSUbD = (struct   patient *) malloc (sizeof (struct   patient));
        scanf ("%s%d", GY7KefSUbD->IxDRj2cMd, &GY7KefSUbD->neGl1qS9);
        ChE1scwAH->TvgibP = GY7KefSUbD;
        ChE1scwAH = GY7KefSUbD;
    }
    ChE1scwAH->TvgibP = NULL;
    {
        CEBaYd5 = 946 - 946;
        GY7KefSUbD = bu2ItCO9H;
        while (GY7KefSUbD != NULL) {
            if ((158 - 98) <= GY7KefSUbD->neGl1qS9) {
                KTFL5Y80Pcfz[CEBaYd5] = GY7KefSUbD;
                CEBaYd5 = CEBaYd5 +1;
            }
            GY7KefSUbD = GY7KefSUbD->TvgibP;
        }
    }
    {
        fNMIGQfunmh2 = 60 - 60;
        while (CEBaYd5 -(599 - 598) > fNMIGQfunmh2) {
            for (r5ZFc9xByKr7 = (927 - 927); r5ZFc9xByKr7 < CEBaYd5 -fNMIGQfunmh2 - (17 - 16); r5ZFc9xByKr7 = r5ZFc9xByKr7 + 1)
                if (KTFL5Y80Pcfz[r5ZFc9xByKr7 + (995 - 994)]->neGl1qS9 > KTFL5Y80Pcfz[r5ZFc9xByKr7]->neGl1qS9) {
                    O28UloGs = KTFL5Y80Pcfz[r5ZFc9xByKr7];
                    KTFL5Y80Pcfz[r5ZFc9xByKr7] = KTFL5Y80Pcfz[r5ZFc9xByKr7 + (15 - 14)];
                    KTFL5Y80Pcfz[r5ZFc9xByKr7 + (253 - 252)] = O28UloGs;
                }
            fNMIGQfunmh2 = fNMIGQfunmh2 + 1;
        }
    }
    {
        r5ZFc9xByKr7 = 15 - 15;
        while (CEBaYd5 -(453 - 452) >= r5ZFc9xByKr7) {
            printf ("%s\n", KTFL5Y80Pcfz[r5ZFc9xByKr7]->IxDRj2cMd);
            r5ZFc9xByKr7 = r5ZFc9xByKr7 + 1;
        }
    }
    for (GY7KefSUbD = bu2ItCO9H; GY7KefSUbD != NULL; GY7KefSUbD = GY7KefSUbD->TvgibP)
        if (GY7KefSUbD->neGl1qS9 < (679 - 619))
            printf ("%s\n", GY7KefSUbD->IxDRj2cMd);
}

