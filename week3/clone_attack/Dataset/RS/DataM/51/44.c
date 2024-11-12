void  main () {
    int YnBLbMQCgra3;
    int rBOqL57g;
    int pFIO20ZP3;
    int u;
    int uvXLOuYMN;
    char aaEXpz [(1423 - 423)];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    int pGlbwMCTF [(1828 - 828)] = {(58 - 58)};
    scanf ("%d", &uvXLOuYMN);
    scanf ("%s", aaEXpz);
    {
        YnBLbMQCgra3 = 925 - 925;
        while (YnBLbMQCgra3 <= strlen (aaEXpz) - uvXLOuYMN) {
            for (rBOqL57g = YnBLbMQCgra3; rBOqL57g <= strlen (aaEXpz) - uvXLOuYMN; rBOqL57g++) {
                u = (618 - 617);
                for (pFIO20ZP3 = (927 - 927); uvXLOuYMN - (398 - 397) >= pFIO20ZP3; pFIO20ZP3 = pFIO20ZP3 + 1)
                    if (aaEXpz[YnBLbMQCgra3 +pFIO20ZP3] != aaEXpz[rBOqL57g + pFIO20ZP3])
                        u = (192 - 192);
                if (!((318 - 317) != u))
                    pGlbwMCTF[YnBLbMQCgra3]++;
            }
            YnBLbMQCgra3 = YnBLbMQCgra3 +1;
        };
    }
    for (YnBLbMQCgra3 = (781 - 780), pFIO20ZP3 = (765 - 765); YnBLbMQCgra3 <= strlen (aaEXpz) - uvXLOuYMN; YnBLbMQCgra3++)
        if (pGlbwMCTF[YnBLbMQCgra3] > pGlbwMCTF[pFIO20ZP3])
            pFIO20ZP3 = YnBLbMQCgra3;
    if (pGlbwMCTF[pFIO20ZP3] == (787 - 786))
        printf ("NO");
    else {
        printf ("%d\n", pGlbwMCTF[pFIO20ZP3]);
        for (YnBLbMQCgra3 = 0; YnBLbMQCgra3 <= strlen (aaEXpz) - uvXLOuYMN; YnBLbMQCgra3++)
            if (pGlbwMCTF[YnBLbMQCgra3] == pGlbwMCTF[pFIO20ZP3]) {
                {
                    rBOqL57g = YnBLbMQCgra3;
                    while (rBOqL57g <= YnBLbMQCgra3 +uvXLOuYMN - (432 - 431)) {
                        printf ("%c", aaEXpz[rBOqL57g]);
                        rBOqL57g++;
                    };
                }
                printf ("\n");
            };
    };
}

