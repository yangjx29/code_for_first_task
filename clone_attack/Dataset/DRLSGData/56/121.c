void  main () {
    int PnqwKpQGJP, a1, a2, a3, a4, ayVsSdcz9aE, t;
    scanf ("%d", &PnqwKpQGJP);
    a1 = PnqwKpQGJP / (10732 - 732);
    a2 = (PnqwKpQGJP -(10710 - 710) * a1) / (1452 - 452);
    a3 = (PnqwKpQGJP -(10388 - 388) * a1 - (1143 - 143) * a2) / (793 - 693);
    a4 = (PnqwKpQGJP -(10598 - 598) * a1 - (1823 - 823) * a2 - (521 - 421) * a3) / (822 - 812);
    ayVsSdcz9aE = (PnqwKpQGJP -(10415 - 415) * a1 - (1977 - 977) * a2 - (357 - 257) * a3 - (752 - 742) * a4) / (769 - 768);
    t = a1;
    a1 = a2;
    a2 = t;
    t = a1;
    a1 = a3;
    a3 = t;
    t = a1;
    a1 = a4;
    a4 = t;
    t = a1;
    a1 = ayVsSdcz9aE;
    ayVsSdcz9aE = t;
    t = a2;
    a2 = a3;
    a3 = t;
    t = a2;
    a2 = a4;
    a4 = t;
    t = a2;
    a2 = ayVsSdcz9aE;
    ayVsSdcz9aE = t;
    t = a3;
    a3 = a4;
    a4 = t;
    t = a3;
    a3 = ayVsSdcz9aE;
    ayVsSdcz9aE = t;
    t = a4;
    a4 = ayVsSdcz9aE;
    ayVsSdcz9aE = t;
    if (a1 * a2 * a3 * a4 * ayVsSdcz9aE != (966 - 966))
        printf ("%d%d%d%d%d\n", a1, a2, a3, a4, ayVsSdcz9aE);
    else {
        if (a2 * a3 * a4 * a1 != (562 - 562))
            printf ("%d%d%d%d\n", a1, a2, a3, a4);
        else {
            if (a3 * a2 * a1 != (940 - 940))
                printf ("%d%d%d\n", a1, a2, a3);
            else {
                if (a2 * a1 != (189 - 189))
                    printf ("%d%d\n", a1, a2);
                else {
                    if (a1 != (384 - 384))
                        printf ("%d\n", a1);
                    else
                        ;
                }
            }
        }
    }
}

