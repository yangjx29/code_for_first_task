struct   student {
    char gg8RPHq [(778 - 768)];
    char W9XKIz4 [(612 - 592)];
    char iFiuBqaX0 [(338 - 333)];
    int bOsm4Whjuz;
    char asHg65IiWO [(281 - 261)];
    char ZlNHo9peqjBM [(491 - 471)];
    struct   student *us0mBE1k;
};
struct   student *ja4JvAzkwh;

struct   student *ZSDxOL () {
    struct   student *DgVnMx4F6P;
    struct   student *m3k9ivbfrzx;
    DgVnMx4F6P = m3k9ivbfrzx = (struct   student *) malloc (sizeof (struct   student));
    scanf ("%s", DgVnMx4F6P->gg8RPHq);
    m3k9ivbfrzx->us0mBE1k = NULL;
    for (; strcmp (DgVnMx4F6P->gg8RPHq, "end") != (427 - 427);) {
        scanf ("%s", DgVnMx4F6P->W9XKIz4);
        scanf ("%s", DgVnMx4F6P->iFiuBqaX0);
        scanf ("%d", &DgVnMx4F6P->bOsm4Whjuz);
        scanf ("%s", DgVnMx4F6P->asHg65IiWO);
        scanf ("%s", DgVnMx4F6P->ZlNHo9peqjBM);
        DgVnMx4F6P = (struct   student *) malloc (sizeof (struct   student));
        scanf ("%s", DgVnMx4F6P->gg8RPHq);
        DgVnMx4F6P->us0mBE1k = m3k9ivbfrzx;
        m3k9ivbfrzx = DgVnMx4F6P;
    }
    ja4JvAzkwh = DgVnMx4F6P;
    return (ja4JvAzkwh);
}

void  kWBhDikRUJw (struct   student *ja4JvAzkwh) {
    struct   student *F6KVB0Q;
    F6KVB0Q = ja4JvAzkwh->us0mBE1k;
    if (ja4JvAzkwh != NULL)
        do {
            printf ("%s %s %s %d %s %s\n", F6KVB0Q->gg8RPHq, F6KVB0Q->W9XKIz4, F6KVB0Q->iFiuBqaX0, F6KVB0Q->bOsm4Whjuz, F6KVB0Q->asHg65IiWO, F6KVB0Q->ZlNHo9peqjBM);
            F6KVB0Q = F6KVB0Q->us0mBE1k;
        }
        while (F6KVB0Q != NULL);
}

main () {
    kWBhDikRUJw (ja4JvAzkwh);
    struct   student *DgVnMx4F6P;
    struct   student *m3k9ivbfrzx;
    DgVnMx4F6P = m3k9ivbfrzx = ja4JvAzkwh->us0mBE1k;
    ZSDxOL ();
    if (ja4JvAzkwh != NULL)
        do {
            free (m3k9ivbfrzx);
            DgVnMx4F6P = m3k9ivbfrzx->us0mBE1k;
            m3k9ivbfrzx = DgVnMx4F6P;
        }
        while (m3k9ivbfrzx != NULL);
    return (976 - 976);
}

