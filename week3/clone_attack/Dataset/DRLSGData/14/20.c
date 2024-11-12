struct   student {
    int hlPQMZAO3xS;
    int Ar6mxP5IX;
    int TwaipNC5gOmb;
    int DlxTgPonFCE;
};
void  main () {
    struct   student *LZGY5ksAF, *RKAqtVNWx, mZWTb8mI;
    free (RKAqtVNWx);
    int OhEiON2, E1pHby;
    scanf ("%d", &OhEiON2);
    RKAqtVNWx = (struct   student *) calloc (OhEiON2, sizeof (struct   student));
    for (LZGY5ksAF = RKAqtVNWx; OhEiON2 > LZGY5ksAF -RKAqtVNWx; LZGY5ksAF = LZGY5ksAF +1) {
        scanf ("%d%d%d", &LZGY5ksAF->hlPQMZAO3xS, &LZGY5ksAF->Ar6mxP5IX, &LZGY5ksAF->TwaipNC5gOmb);
        LZGY5ksAF->DlxTgPonFCE = LZGY5ksAF->Ar6mxP5IX + LZGY5ksAF->TwaipNC5gOmb;
    }
    {
        E1pHby = 0;
        while (E1pHby < 3) {
            for (LZGY5ksAF = RKAqtVNWx +OhEiON2-1; RKAqtVNWx +E1pHby < LZGY5ksAF; LZGY5ksAF = LZGY5ksAF -1) {
                if (LZGY5ksAF->DlxTgPonFCE > (LZGY5ksAF -1)->DlxTgPonFCE) {
                    mZWTb8mI = *LZGY5ksAF;
                    *(LZGY5ksAF -1) = mZWTb8mI;
                    *LZGY5ksAF = *(LZGY5ksAF -1);
                }
            }
            E1pHby++;
            printf ("%d %d\n", LZGY5ksAF->hlPQMZAO3xS, LZGY5ksAF->DlxTgPonFCE);
        }
    }
}

