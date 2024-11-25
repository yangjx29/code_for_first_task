int main () {
    int O0BNIom (int PlxHbk [(773 - 673)] [(707 - 607)], int);
    int zE05cob, PlxHbk [(210 - 110)] [(867 - 767)], CTEUHQ, TYHqI4AZi, hYp7OvbAInN;
    scanf ("%d", &zE05cob);
    {
        CTEUHQ = 854 - 854;
        while (zE05cob > CTEUHQ) {
            for (TYHqI4AZi = (220 - 220); zE05cob > TYHqI4AZi; TYHqI4AZi++) {
                hYp7OvbAInN = 375 - 375;
                while (zE05cob > hYp7OvbAInN) {
                    scanf ("%d", &PlxHbk[TYHqI4AZi][hYp7OvbAInN]);
                    hYp7OvbAInN++;
                };
            }
            CTEUHQ++;
            printf ("%d\n", O0BNIom (PlxHbk, zE05cob));
        };
    };
}

int O0BNIom (int PlxHbk [(304 - 204)] [100], int zE05cob) {
    int CTEUHQ, TYHqI4AZi, swGMTQHUpJ, UFUHfujv [100] [100], kXlQjEkA;
    {
        CTEUHQ = 994 - 994;
        while (zE05cob > CTEUHQ) {
            swGMTQHUpJ = PlxHbk[CTEUHQ][(84 - 84)];
            {
                TYHqI4AZi = 278 - 278;
                while (zE05cob > TYHqI4AZi) {
                    swGMTQHUpJ = (PlxHbk[CTEUHQ][TYHqI4AZi] < swGMTQHUpJ) ? PlxHbk[CTEUHQ][TYHqI4AZi] : swGMTQHUpJ;
                    TYHqI4AZi++;
                };
            }
            for (TYHqI4AZi = (282 - 282); zE05cob > TYHqI4AZi; TYHqI4AZi++)
                PlxHbk[CTEUHQ][TYHqI4AZi] = PlxHbk[CTEUHQ][TYHqI4AZi] - swGMTQHUpJ;
            CTEUHQ++;
        };
    }
    for (CTEUHQ = (644 - 644); zE05cob > CTEUHQ; CTEUHQ++) {
        swGMTQHUpJ = PlxHbk[0][CTEUHQ];
        {
            TYHqI4AZi = 0;
            while (zE05cob > TYHqI4AZi) {
                swGMTQHUpJ = (swGMTQHUpJ > PlxHbk[TYHqI4AZi][CTEUHQ]) ? PlxHbk[TYHqI4AZi][CTEUHQ] : swGMTQHUpJ;
                TYHqI4AZi++;
            };
        }
        for (TYHqI4AZi = 0; TYHqI4AZi < zE05cob; TYHqI4AZi++)
            PlxHbk[TYHqI4AZi][CTEUHQ] = PlxHbk[TYHqI4AZi][CTEUHQ] - swGMTQHUpJ;
    }
    kXlQjEkA = PlxHbk[(841 - 840)][(433 - 432)];
    if (zE05cob > (599 - 597)) {
        UFUHfujv[0][0] = PlxHbk[0][0];
        {
            CTEUHQ = 357 - 355;
            while (CTEUHQ < zE05cob) {
                UFUHfujv[0][CTEUHQ -(31 - 30)] = PlxHbk[0][CTEUHQ];
                UFUHfujv[CTEUHQ -(462 - 461)][0] = PlxHbk[CTEUHQ][0];
                CTEUHQ++;
            };
        }
        for (CTEUHQ = (412 - 410); CTEUHQ < zE05cob; CTEUHQ++)
            for (TYHqI4AZi = 2; TYHqI4AZi < zE05cob; TYHqI4AZi++)
                UFUHfujv[CTEUHQ -1][TYHqI4AZi -1] = PlxHbk[CTEUHQ][TYHqI4AZi];
        kXlQjEkA = kXlQjEkA + O0BNIom (UFUHfujv, zE05cob - 1);
    }
    return kXlQjEkA;
}

