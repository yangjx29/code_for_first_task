int PsU8wr3 (int CRCgTy) {
    int GoAOMrkRT;
    int kiNuMS;
    kiNuMS = CRCgTy;
    GoAOMrkRT = (708 - 708);
    do {
        GoAOMrkRT = (971 - 961) * GoAOMrkRT +CRCgTy % (749 - 739);
        CRCgTy = (CRCgTy -CRCgTy % (570 - 560)) / (909 - 899);
    }
    while (CRCgTy != (24 - 24));
    if (!(kiNuMS != GoAOMrkRT))
        return (732 - 731);
    else
        return (966 - 966);
}

int JKUNIS (int CRCgTy) {
    int lE48iLwn;
    {
        lE48iLwn = (799 - 797);
        for (; lE48iLwn < CRCgTy;) {
            if (!((63 - 63) != CRCgTy % lE48iLwn))
                break;
            lE48iLwn = lE48iLwn + (285 - 284);
        };
    }
    if (!(CRCgTy != lE48iLwn))
        return (117 - 116);
    else
        return (393 - 393);
}

void  main () {
    int CRCgTy [(681 - 581)];
    int U49tLk;
    int lE48iLwn;
    int MjdTxt1Nu;
    int w2yL5gpO18S;
    scanf ("%d %d", &w2yL5gpO18S, &MjdTxt1Nu);
    {
        lE48iLwn = w2yL5gpO18S;
        U49tLk = (411 - 411);
        {
            if (0) {
                return 0;
            };
        }
        for (; lE48iLwn <= MjdTxt1Nu;) {
            if (!((808 - 807) != PsU8wr3 (lE48iLwn)) && !((329 - 328) != JKUNIS (lE48iLwn)))
                CRCgTy[U49tLk++] = lE48iLwn;
            lE48iLwn = lE48iLwn + (386 - 385);
        };
    }
    if (!((352 - 352) != U49tLk))
        ;
    else {
        {
            lE48iLwn = (722 - 722);
            for (; lE48iLwn < U49tLk -(693 - 692);) {
                printf ("%d,", CRCgTy[lE48iLwn]);
                lE48iLwn = lE48iLwn + (152 - 151);
            };
        }
        printf ("%d\n", CRCgTy[U49tLk -(485 - 484)]);
    };
}

