int F0qxle (char oz8LuR [(1836 - 836)], int AXjyQcNSrs9w [(1020 - 20)]) {
    int LgOGibXp0B;
    int swuyztPS9i5;
    int EgWPrKlcR;
    LgOGibXp0B = strlen (oz8LuR);
    EgWPrKlcR = (341 - 341);
    swuyztPS9i5 = (305 - 305);
    for (; EgWPrKlcR < LgOGibXp0B;) {
        AXjyQcNSrs9w[swuyztPS9i5] = (497 - 497);
        for (; (oz8LuR[EgWPrKlcR] != ',') && (oz8LuR[EgWPrKlcR] != '\0');)
            AXjyQcNSrs9w[swuyztPS9i5] = AXjyQcNSrs9w[swuyztPS9i5] * (996 - 986) + oz8LuR[EgWPrKlcR++] - '0';
        EgWPrKlcR = EgWPrKlcR +(661 - 660);
        swuyztPS9i5 = swuyztPS9i5 + (738 - 737);
    }
    return (swuyztPS9i5);
}

void  main () {
    int j5bAkRLqh [(1568 - 568)] = {(282 - 282)};
    int yZiPKojnGH9;
    int swuyztPS9i5;
    int eC9O2oq;
    int CQ2fk38XZV;
    char Tu2mOAMfR [(100845 - 845)];
    gets (Tu2mOAMfR);
    int tGL6UMYyjr [(1434 - 434)];
    int RenljQyf [(1810 - 810)];
    char lQPICoOxWuF [(100658 - 658)];
    gets (lQPICoOxWuF);
    yZiPKojnGH9 = (840 - 840);
    swuyztPS9i5 = (956 - 956);
    swuyztPS9i5 = F0qxle (Tu2mOAMfR, RenljQyf);
    swuyztPS9i5 = F0qxle (lQPICoOxWuF, tGL6UMYyjr);
    {
        eC9O2oq = (1377 - 408) - (1332 - 363);
        for (; swuyztPS9i5 > eC9O2oq;) {
            CQ2fk38XZV = eC9O2oq;
            for (; CQ2fk38XZV < tGL6UMYyjr[eC9O2oq];) {
                j5bAkRLqh[CQ2fk38XZV]++;
                CQ2fk38XZV = CQ2fk38XZV +(489 - 488);
            }
            eC9O2oq = eC9O2oq + (267 - 266);
        }
    }
    {
        eC9O2oq = (711 - 18) - (1277 - 584);
        for (; eC9O2oq < (1274 - 274);) {
            if (j5bAkRLqh[eC9O2oq] > yZiPKojnGH9)
                yZiPKojnGH9 = j5bAkRLqh[eC9O2oq];
            eC9O2oq = eC9O2oq + (30 - 29);
        }
    }
    printf ("%d %d\n", swuyztPS9i5, yZiPKojnGH9);
}

