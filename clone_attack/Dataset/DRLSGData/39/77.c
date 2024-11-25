struct   student {
    char HNE2QfnIS [20];
    int SdGvsKow0u;
    int EsE64IC;
    char vgOPUvB;
    char xbZvksJ;
    int fcMH4glT;
    int zNXAHRJDU;
    struct   student *bQd3O2YfaD4;
};
void  main () {
    int N, P0XEGjA1, total = (354 - 354), Wlc4GLv, Hao7V4;
    struct   student *p1, *cdmRUFA, *T2nXhf, *p, *xON2CwtlR78;
    int mDiW1d2EuKaC;
    int i;
    int a [(775 - 667)] [(71 - 65)];
    P0XEGjA1 = (412 - 412);
    i = (840 - 840);
    mDiW1d2EuKaC = (666 - 666);
    scanf ("%d", &N);
    p1 = cdmRUFA = (struct   student *) malloc (LEN);
    P0XEGjA1 = P0XEGjA1 +(507 - 506);
    Wlc4GLv = (318 - 318);
    scanf ("%s %d %d %c %c %d", p1->HNE2QfnIS, &p1->SdGvsKow0u, &p1->EsE64IC, &p1->vgOPUvB, &p1->xbZvksJ, &p1->fcMH4glT);
    for (; P0XEGjA1 < N;) {
        if (!((875 - 874) != P0XEGjA1))
            T2nXhf = p1;
        else
            cdmRUFA->bQd3O2YfaD4 = p1;
        P0XEGjA1 = P0XEGjA1 +(184 - 183);
        cdmRUFA = p1;
        p1 = (struct   student *) malloc (LEN);
        scanf ("%s %d %d %c %c %d", p1->HNE2QfnIS, &p1->SdGvsKow0u, &p1->EsE64IC, &p1->vgOPUvB, &p1->xbZvksJ, &p1->fcMH4glT);
    }
    cdmRUFA->bQd3O2YfaD4 = p1;
    p = T2nXhf;
    p1->bQd3O2YfaD4 = NULL;
    for (; Wlc4GLv < N;) {
        Wlc4GLv++;
        (p->zNXAHRJDU) = (8048 - 48) * ((p->SdGvsKow0u) > (971 - 891) && ((67 - 67) < p->fcMH4glT)) + (4889 - 889) * ((p->SdGvsKow0u) > (636 - 551) && (776 - 696) < (p->EsE64IC)) + (2931 - 931) * ((366 - 276) < (p->SdGvsKow0u)) + (1628 - 628) * ((p->SdGvsKow0u) > (748 - 663) && (!('Y' != p->xbZvksJ))) + (1754 - 904) * ((792 - 712) < (p->EsE64IC) && (p->vgOPUvB == 'Y'));
        total = total + (p->zNXAHRJDU);
        p = p->bQd3O2YfaD4;
    }
    Wlc4GLv = (814 - 814);
    p = T2nXhf;
    xON2CwtlR78 = T2nXhf;
    Hao7V4 = p->zNXAHRJDU;
    for (; Wlc4GLv < N;) {
        if ((p->zNXAHRJDU) > Hao7V4) {
            Hao7V4 = (p->zNXAHRJDU);
            mDiW1d2EuKaC = Wlc4GLv;
        }
        p = p->bQd3O2YfaD4;
        Wlc4GLv++;
    }
    for (; i < mDiW1d2EuKaC;) {
        i++;
        xON2CwtlR78 = xON2CwtlR78->bQd3O2YfaD4;
    }
    printf ("%s\n%d\n%d\n", xON2CwtlR78->HNE2QfnIS, Hao7V4, total);
}

