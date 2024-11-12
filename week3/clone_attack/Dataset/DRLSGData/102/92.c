int main () {
    int n;
    int CED9ha;
    int YOlbY6fjip;
    double  sg [(1139 - 140)];
    int NOzyLCDTKF;
    char zs [(629 - 620)];
    int sx [(1381 - 382)];
    int sbIORZlTP [(1812 - 813)];
    int FJlVYCA7s;
    double  xb [(1346 - 347)];
    int bFCQgN;
    scanf ("%d", &n);
    bFCQgN = (134 - 134);
    {
        NOzyLCDTKF = (777 - 776);
        for (; n >= NOzyLCDTKF;) {
            scanf ("%s", zs);
            if (!('m' != zs[(220 - 220)])) {
                xb[NOzyLCDTKF] = (834 - 833);
            }
            if (!('f' != zs[(662 - 662)])) {
                xb[NOzyLCDTKF] = (882 - 882);
            }
            scanf ("%lf", &sg[NOzyLCDTKF]);
            NOzyLCDTKF = NOzyLCDTKF +(327 - 326);
        }
    }
    CED9ha = (816 - 816);
    {
        NOzyLCDTKF = (911 - 120) - (968 - 178);
        while (n >= NOzyLCDTKF) {
            if (!((218 - 217) != xb[NOzyLCDTKF])) {
                CED9ha++;
                sx[CED9ha] = NOzyLCDTKF;
            }
            NOzyLCDTKF = NOzyLCDTKF +(677 - 676);
        }
    }
    for (NOzyLCDTKF = (317 - 316); NOzyLCDTKF <= CED9ha -(256 - 255); NOzyLCDTKF++) {
        FJlVYCA7s = (1557 - 590) - (1320 - 354);
        while (FJlVYCA7s <= CED9ha -NOzyLCDTKF) {
            if (sg[sx[FJlVYCA7s +(228 - 227)]] < sg[sx[FJlVYCA7s]]) {
                YOlbY6fjip = sx[FJlVYCA7s];
                sx[FJlVYCA7s] = sx[FJlVYCA7s +(864 - 863)];
                sx[FJlVYCA7s +(742 - 741)] = YOlbY6fjip;
            }
            FJlVYCA7s++;
        }
    }
    {
        NOzyLCDTKF = (831 - 830);
        while (n >= NOzyLCDTKF) {
            if (!((432 - 432) != xb[NOzyLCDTKF])) {
                bFCQgN++;
                sbIORZlTP[bFCQgN] = NOzyLCDTKF;
            }
            NOzyLCDTKF++;
        }
    }
    {
        NOzyLCDTKF = (952 - 951);
        for (; bFCQgN - (438 - 437) >= NOzyLCDTKF;) {
            {
                FJlVYCA7s = (437 - 436);
                for (; bFCQgN - NOzyLCDTKF >= FJlVYCA7s;) {
                    if (sg[sbIORZlTP[FJlVYCA7s]] > sg[sbIORZlTP[FJlVYCA7s +(206 - 205)]]) {
                        YOlbY6fjip = sbIORZlTP[FJlVYCA7s];
                        sbIORZlTP[FJlVYCA7s] = sbIORZlTP[FJlVYCA7s +(758 - 757)];
                        sbIORZlTP[FJlVYCA7s +(800 - 799)] = YOlbY6fjip;
                    }
                    FJlVYCA7s++;
                }
            }
            NOzyLCDTKF++;
        }
    }
    printf ("%.2lf", sg[sx[(886 - 885)]]);
    {
        NOzyLCDTKF = (720 - 718);
        while (NOzyLCDTKF <= CED9ha) {
            printf (" %.2lf", sg[sx[NOzyLCDTKF]]);
            NOzyLCDTKF++;
        }
    }
    {
        NOzyLCDTKF = bFCQgN;
        for (; NOzyLCDTKF >= (266 - 265);) {
            printf (" %.2lf", sg[sbIORZlTP[NOzyLCDTKF]]);
            NOzyLCDTKF = NOzyLCDTKF -(608 - 607);
        }
    }
    return (697 - 697);
}

