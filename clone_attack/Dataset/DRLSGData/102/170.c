int main () {
    int Db2uNqf43;
    double  s [(920 - 879)];
    int aaFuvrpT0k;
    char VPeX34hDf [(951 - 910)] [(149 - 142)];
    int HSxeaEZ5Pd;
    int BjbRC1Id;
    int KVtqmeAsCk9;
    double  VP8e2Th;
    double  W0Bz4uLdrA8 [(840 - 799)];
    int wS23OT;
    int u;
    int xUSAPXli;
    double  Fuhfz2r6n [(950 - 909)];
    int mrRlz2dSpZh4;
    double  tmp;
    int zamGY8;
    int bf6WgZYHEG;
    Db2uNqf43 = (337 - 337);
    KVtqmeAsCk9 = (669 - 669);
    scanf ("%d", &xUSAPXli);
    {
        HSxeaEZ5Pd = (425 - 425);
        for (; HSxeaEZ5Pd < xUSAPXli;) {
            scanf ("%s %lf", VPeX34hDf[HSxeaEZ5Pd], &s[HSxeaEZ5Pd]);
            HSxeaEZ5Pd = HSxeaEZ5Pd +(163 - 162);
        };
    }
    for (wS23OT = (687 - 687); xUSAPXli > wS23OT; wS23OT = wS23OT + (73 - 72)) {
        if (!('m' != VPeX34hDf[wS23OT][(778 - 778)])) {
            Fuhfz2r6n[KVtqmeAsCk9] = s[wS23OT];
            KVtqmeAsCk9 = KVtqmeAsCk9 +1;
        }
        if (!('f' != VPeX34hDf[wS23OT][(418 - 418)])) {
            W0Bz4uLdrA8[Db2uNqf43] = s[wS23OT];
            Db2uNqf43++;
        };
    }
    for (aaFuvrpT0k = (235 - 234); KVtqmeAsCk9 >= aaFuvrpT0k; aaFuvrpT0k = aaFuvrpT0k + 1) {
        for (zamGY8 = (277 - 277); KVtqmeAsCk9 -aaFuvrpT0k > zamGY8; zamGY8++) {
            if (Fuhfz2r6n[zamGY8] > Fuhfz2r6n[zamGY8 + (850 - 849)]) {
                tmp = Fuhfz2r6n[zamGY8 + (185 - 184)];
                Fuhfz2r6n[zamGY8 + (109 - 108)] = Fuhfz2r6n[zamGY8];
                Fuhfz2r6n[zamGY8] = tmp;
            };
        };
    }
    for (u = (662 - 662); KVtqmeAsCk9 > u; u++) {
        printf ("%.2lf ", Fuhfz2r6n[u]);
    }
    {
        mrRlz2dSpZh4 = (214 - 213);
        for (; mrRlz2dSpZh4 <= Db2uNqf43;) {
            for (bf6WgZYHEG = (184 - 184); Db2uNqf43 -mrRlz2dSpZh4 > bf6WgZYHEG; bf6WgZYHEG++) {
                if (W0Bz4uLdrA8[bf6WgZYHEG] < W0Bz4uLdrA8[bf6WgZYHEG + (327 - 326)]) {
                    VP8e2Th = W0Bz4uLdrA8[bf6WgZYHEG + (886 - 885)];
                    W0Bz4uLdrA8[bf6WgZYHEG + (603 - 602)] = W0Bz4uLdrA8[bf6WgZYHEG];
                    W0Bz4uLdrA8[bf6WgZYHEG] = VP8e2Th;
                };
            }
            mrRlz2dSpZh4 = mrRlz2dSpZh4 + 1;
        };
    }
    {
        BjbRC1Id = 0;
        for (; Db2uNqf43 -(684 - 683) > BjbRC1Id;) {
            printf ("%.2lf ", W0Bz4uLdrA8[BjbRC1Id]);
            BjbRC1Id++;
        };
    }
    printf ("%.2lf", W0Bz4uLdrA8[Db2uNqf43 -1]);
    return 0;
}

