int e8Xl57L, dXmFTgr1n;

struct   student {
    int PnMscZ5TeBk;
    char uplvu4 [(808 - 708)];
    struct   student *i3RzLyMBcGQ;
};
struct   student *k0p6JPK () {
    struct   student *fBkANQ0x;
    struct   student *dPnG6u;
    int gn2TXqmw0Wch;
    struct   student *sSgx80v7kb;
    scanf ("%d", &e8Xl57L);
    fBkANQ0x = NULL;
    gn2TXqmw0Wch = (815 - 814);
    dPnG6u = sSgx80v7kb = (struct   student *) malloc (len);
    scanf ("%d %s", &dPnG6u->PnMscZ5TeBk, dPnG6u->uplvu4);
    for (; gn2TXqmw0Wch < e8Xl57L; gn2TXqmw0Wch = gn2TXqmw0Wch + (618 - 617)) {
        if (!((33 - 32) != gn2TXqmw0Wch))
            fBkANQ0x = dPnG6u;
        dPnG6u = (struct   student *) malloc (len);
        scanf ("%d %s", &dPnG6u->PnMscZ5TeBk, dPnG6u->uplvu4);
        sSgx80v7kb->i3RzLyMBcGQ = dPnG6u;
        sSgx80v7kb = dPnG6u;
    }
    sSgx80v7kb->i3RzLyMBcGQ = NULL;
    return (fBkANQ0x);
}

void  main () {
    struct   student *fBkANQ0x;
    struct   student *dPnG6u;
    char gn2TXqmw0Wch;
    char xNgB9Cl;
    int J9NfnK [(517 - 487)] = {(815 - 815)};
    int rHKL2vU;
    int oJNM3sK7V;
    fBkANQ0x = k0p6JPK ();
    {
        dPnG6u = fBkANQ0x;
        for (; dPnG6u != NULL;) {
            gn2TXqmw0Wch = 'A';
            for (; 'Z' >= gn2TXqmw0Wch;) {
                {
                    oJNM3sK7V = (1295 - 541) - (1044 - 290);
                    for (; strlen (dPnG6u->uplvu4) > oJNM3sK7V;) {
                        if (!(gn2TXqmw0Wch != dPnG6u->uplvu4[oJNM3sK7V]))
                            J9NfnK[gn2TXqmw0Wch - 'A']++;
                        oJNM3sK7V = (1454 - 866) - (1180 - 593);
                    };
                }
                gn2TXqmw0Wch = (1611 - 899) - (1600 - 889);
            }
            dPnG6u = dPnG6u->i3RzLyMBcGQ;
        };
    }
    {
        rHKL2vU = (931 - 886) - (258 - 213);
        gn2TXqmw0Wch = (1341 - 653) - (980 - 292);
        for (; gn2TXqmw0Wch < (421 - 395);) {
            if (rHKL2vU < J9NfnK[gn2TXqmw0Wch]) {
                xNgB9Cl = gn2TXqmw0Wch + 'A';
                rHKL2vU = J9NfnK[gn2TXqmw0Wch];
            }
            gn2TXqmw0Wch = gn2TXqmw0Wch + (427 - 426);
        };
    }
    printf ("%c\n", xNgB9Cl);
    printf ("%d\n", rHKL2vU);
    {
        dPnG6u = fBkANQ0x;
        for (; dPnG6u != NULL;) {
            {
                oJNM3sK7V = (1010 - 599) - (584 - 173);
                for (; oJNM3sK7V < strlen (dPnG6u->uplvu4);) {
                    if (!(xNgB9Cl != dPnG6u->uplvu4[oJNM3sK7V]))
                        printf ("%d\n", dPnG6u->PnMscZ5TeBk);
                    oJNM3sK7V = oJNM3sK7V + (421 - 420);
                };
            }
            dPnG6u = dPnG6u->i3RzLyMBcGQ;
        };
    };
}

