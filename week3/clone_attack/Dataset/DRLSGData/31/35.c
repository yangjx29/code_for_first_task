struct   student {
    char V2CXJT [(218 - 118)];
    char NEVyXv06Zf2I [(307 - 207)];
    char Aa7hlPZuKT [(616 - 614)];
    char zgO12BuI [(914 - 814)];
    char MQVbvJ [(817 - 717)];
    char nMnkI9 [(402 - 302)];
    struct   student *MOHv0Rw;
    struct   student *YrybDncE478;
};
struct   student *hsPb4eMaRd (void ) {
    struct   student *dVjK0i;
    struct   student *pQnCGoZ02;
    struct   student *o79jpGe3;
    struct   student *ZfaIVXzFm;
    int QZgnOX;
    o79jpGe3 = ZfaIVXzFm = (struct   student *) malloc (LEN);
    scanf ("%s", o79jpGe3->V2CXJT);
    QZgnOX = (64 - 64);
    for (; strcmp (o79jpGe3->V2CXJT, "end") != (468 - 468);) {
        QZgnOX = QZgnOX +(196 - 195);
        scanf ("%s%s%s%s%s", o79jpGe3->NEVyXv06Zf2I, o79jpGe3->Aa7hlPZuKT, o79jpGe3->zgO12BuI, o79jpGe3->MQVbvJ, o79jpGe3->nMnkI9);
        if (!((51 - 50) != QZgnOX)) {
            dVjK0i = o79jpGe3;
            o79jpGe3->MOHv0Rw = NULL;
        }
        else {
            ZfaIVXzFm->YrybDncE478 = o79jpGe3;
            o79jpGe3->MOHv0Rw = ZfaIVXzFm;
        }
        ZfaIVXzFm = o79jpGe3;
        o79jpGe3 = (struct   student *) malloc (LEN);
        scanf ("%s", o79jpGe3->V2CXJT);
    }
    ZfaIVXzFm->YrybDncE478 = NULL;
    pQnCGoZ02 = ZfaIVXzFm;
    return (pQnCGoZ02);
}

void  YjTOZ8o7EiG (struct   student *pQnCGoZ02) {
    struct   student *HupkVdE;
    HupkVdE = pQnCGoZ02;
    do {
        printf ("%s %s %s %s %s %s\n", HupkVdE->V2CXJT, HupkVdE->NEVyXv06Zf2I, HupkVdE->Aa7hlPZuKT, HupkVdE->zgO12BuI, HupkVdE->MQVbvJ, HupkVdE->nMnkI9);
        HupkVdE = HupkVdE->MOHv0Rw;
    }
    while (HupkVdE != NULL);
}

void  main () {
    struct   student *pQnCGoZ02;
    YjTOZ8o7EiG (pQnCGoZ02);
    pQnCGoZ02 = hsPb4eMaRd ();
}

