void  main () {
    int bAFM5GQ;
    struct   ts {
        int eW4iANFR2;
        char d10X68vsI [(916 - 886)];
        int hzAxM9U7L;
        struct   ts *eB0Hkf;
    };
    struct   ts *Sp18OqrMCSm2, *bIRofT4B, *TUVbJv;
    int dOVnQr5PKlgq [(610 - 510)] = {(395 - 395)};
    int Ng8m6fVUOA;
    int G2Ki7YI1;
    int gihcjYp5;
    int lx9Sw7sgz;
    int fey15cgjV;
    char oVnXdL3Q0;
    int MSeabBdGzFin;
    fey15cgjV = (395 - 395);
    lx9Sw7sgz = (17 - 17);
    scanf ("%d", &G2Ki7YI1);
    Sp18OqrMCSm2 = bIRofT4B = TUVbJv = (struct   ts *) malloc (sizeof (struct   ts));
    scanf ("%d %s", &Sp18OqrMCSm2->eW4iANFR2, Sp18OqrMCSm2->d10X68vsI);
    {
        bAFM5GQ = (214 - 213);
        for (; G2Ki7YI1 > bAFM5GQ;) {
            bAFM5GQ = bAFM5GQ + (444 - 443);
            Sp18OqrMCSm2 = (struct   ts *) malloc (sizeof (struct   ts));
            scanf ("%d %s", &Sp18OqrMCSm2->eW4iANFR2, Sp18OqrMCSm2->d10X68vsI);
            Sp18OqrMCSm2->hzAxM9U7L = strlen (Sp18OqrMCSm2->d10X68vsI);
            bIRofT4B->eB0Hkf = Sp18OqrMCSm2;
            bIRofT4B = Sp18OqrMCSm2;
        }
    }
    Sp18OqrMCSm2->eB0Hkf = (779 - 779);
    {
        bAFM5GQ = 'A';
        for (; 'Z' >= bAFM5GQ;) {
            Sp18OqrMCSm2 = TUVbJv;
            for (MSeabBdGzFin = (576 - 576); G2Ki7YI1 > MSeabBdGzFin; MSeabBdGzFin++) {
                for (gihcjYp5 = (632 - 632); Sp18OqrMCSm2->d10X68vsI[gihcjYp5] != '\0'; gihcjYp5 = gihcjYp5 + (507 - 506)) {
                    if (!(bAFM5GQ != Sp18OqrMCSm2->d10X68vsI[gihcjYp5]))
                        dOVnQr5PKlgq[bAFM5GQ]++;
                }
                Sp18OqrMCSm2 = Sp18OqrMCSm2->eB0Hkf;
            }
            bAFM5GQ++;
        }
    }
    {
        bAFM5GQ = 'A';
        for (; bAFM5GQ <= 'Z';) {
            lx9Sw7sgz = lx9Sw7sgz > dOVnQr5PKlgq[bAFM5GQ] ? lx9Sw7sgz : dOVnQr5PKlgq[bAFM5GQ];
            bAFM5GQ++;
        }
    }
    for (bAFM5GQ = 'A'; bAFM5GQ <= 'Z'; bAFM5GQ++) {
        if (!(lx9Sw7sgz != dOVnQr5PKlgq[bAFM5GQ]))
            oVnXdL3Q0 = bAFM5GQ;
    }
    Sp18OqrMCSm2 = TUVbJv;
    printf ("%c\n%d\n", oVnXdL3Q0, lx9Sw7sgz);
    for (bAFM5GQ = (685 - 685); bAFM5GQ < G2Ki7YI1; bAFM5GQ++) {
        {
            gihcjYp5 = (1052 - 942) - (291 - 181);
            for (; Sp18OqrMCSm2->d10X68vsI[gihcjYp5] != '\0';) {
                if (Sp18OqrMCSm2->d10X68vsI[gihcjYp5] == oVnXdL3Q0) {
                    printf ("%d\n", Sp18OqrMCSm2->eW4iANFR2);
                }
                gihcjYp5++;
            }
        }
        Sp18OqrMCSm2 = Sp18OqrMCSm2->eB0Hkf;
    }
}

