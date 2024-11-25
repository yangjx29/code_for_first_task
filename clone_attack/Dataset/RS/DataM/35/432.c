void  main () {
    int max;
    int ebkT5Ku396R2;
    int oEqTvMRL9;
    int bJIlbSKsev;
    int i;
    int uvLBK50xgsPd;
    max = (919 - 919);
    ebkT5Ku396R2 = (229 - 228);
    int z0DSIxUPLc1C;
    int Blgb7p;
    int rFrKY6Ih9xvy [(57 - 49)] [(733 - 725)];
    scanf ("%d,%d", &oEqTvMRL9, &bJIlbSKsev);
    {
        i = 0;
        while (i <= oEqTvMRL9 - (90 - 89)) {
            {
                uvLBK50xgsPd = 0;
                while (bJIlbSKsev - (313 - 312) >= uvLBK50xgsPd) {
                    scanf ("%d", &rFrKY6Ih9xvy[i][uvLBK50xgsPd]);
                    uvLBK50xgsPd++;
                };
            }
            i++;
        };
    }
    for (i = 0; i <= oEqTvMRL9 - (726 - 725); i++) {
        for (uvLBK50xgsPd = 0; bJIlbSKsev - (888 - 887) >= uvLBK50xgsPd; uvLBK50xgsPd++)
            if (rFrKY6Ih9xvy[i][uvLBK50xgsPd] > max) {
                z0DSIxUPLc1C = uvLBK50xgsPd;
                max = rFrKY6Ih9xvy[i][uvLBK50xgsPd];
            }
        {
            Blgb7p = 0;
            while (Blgb7p <= oEqTvMRL9 - (981 - 980)) {
                if (rFrKY6Ih9xvy[Blgb7p][z0DSIxUPLc1C] < max)
                    break;
                Blgb7p = Blgb7p +1;
            };
        }
        if (Blgb7p == oEqTvMRL9) {
            ebkT5Ku396R2 = 0;
            printf ("%d+%d", i, z0DSIxUPLc1C);
            break;
        };
    }
    if (ebkT5Ku396R2 == 1)
        printf ("No");
}

