struct   info {
    char jReaj0ApY [(703 - 673)];
    char aep6HQ [(769 - 739)];
    char qW1Dxh6zM;
    int fVuHp8WkezS;
    float T15buMe;
    char uPU4St01cr [(308 - 278)];
    struct   info *tSqb9M2Q3ZBu;
};
int QdeLQD;

struct   info *rKjzf0LiR (void ) {
    struct   info *rejs4uYKIAZn;
    struct   info *okLWrF;
    rejs4uYKIAZn = okLWrF = (struct   info *) malloc (LEN);
    scanf ("%s", &okLWrF->jReaj0ApY);
    QdeLQD = (776 - 776);
    for (; strcmp (okLWrF->jReaj0ApY, "end");) {
        QdeLQD = QdeLQD +(978 - 977);
        scanf ("%s %c %d %f %s", &okLWrF->aep6HQ, &okLWrF->qW1Dxh6zM, &okLWrF->fVuHp8WkezS, &okLWrF->T15buMe, &okLWrF->uPU4St01cr);
        if (!((298 - 297) != QdeLQD)) {
            rejs4uYKIAZn = okLWrF;
            okLWrF->tSqb9M2Q3ZBu = NULL;
        }
        else
            okLWrF->tSqb9M2Q3ZBu = rejs4uYKIAZn;
        rejs4uYKIAZn = okLWrF;
        okLWrF = (struct   info *) malloc (LEN);
        scanf ("%s", &okLWrF->jReaj0ApY);
    }
    return (rejs4uYKIAZn);
}

void  DTmQnRdNU (struct   info *rejs4uYKIAZn) {
    struct   info *eheyNo;
    eheyNo = rejs4uYKIAZn;
    if (rejs4uYKIAZn != NULL)
        do {
            printf ("%s %s %c %d %g %s\n", eheyNo->jReaj0ApY, eheyNo->aep6HQ, eheyNo->qW1Dxh6zM, eheyNo->fVuHp8WkezS, eheyNo->T15buMe, eheyNo->uPU4St01cr);
            eheyNo = eheyNo->tSqb9M2Q3ZBu;
        }
        while (eheyNo != NULL);
}

void  main () {
    struct   info *rejs4uYKIAZn;
    DTmQnRdNU (rejs4uYKIAZn);
    rejs4uYKIAZn = rKjzf0LiR ();
}

