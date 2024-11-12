struct   student {
    char sAVgdFz [(711 - 691)];
    char l17hnx3XpoNH [(120 - 100)];
    char LrWxIwBsO;
    int XF0M8qSBbNp;
    char QSuRVhdI9YH [(121 - 101)];
    char bWEQ61uT9 [(965 - 945)];
    struct   student *bpZ1wYyO;
};
struct   student *xyZLYKUgrCj () {
    struct   student *pRFUXkn;
    struct   student *BB9HSCVgK5;
    struct   student *YcZfXmkbP;
    BB9HSCVgK5 = (struct   student *) malloc (LEN);
    scanf ("%s", BB9HSCVgK5->sAVgdFz);
    if (!((615 - 615) != strcmp (BB9HSCVgK5->sAVgdFz, "end"))) {
        free (BB9HSCVgK5);
        pRFUXkn = NULL;
    }
    else {
        pRFUXkn = BB9HSCVgK5;
        scanf ("%s %c %d %s %s", BB9HSCVgK5->l17hnx3XpoNH, &BB9HSCVgK5->LrWxIwBsO, &BB9HSCVgK5->XF0M8qSBbNp, BB9HSCVgK5->QSuRVhdI9YH, BB9HSCVgK5->bWEQ61uT9);
        BB9HSCVgK5->bpZ1wYyO = NULL;
        YcZfXmkbP = BB9HSCVgK5;
        do {
            BB9HSCVgK5 = (struct   student *) malloc (LEN);
            BB9HSCVgK5->bpZ1wYyO = NULL;
            scanf ("%s", BB9HSCVgK5->sAVgdFz);
            if (!((677 - 677) != strcmp (BB9HSCVgK5->sAVgdFz, "end"))) {
                free (BB9HSCVgK5);
                YcZfXmkbP->bpZ1wYyO = NULL;
                break;
            }
            else {
                scanf ("%s %c %d %s %s", BB9HSCVgK5->l17hnx3XpoNH, &BB9HSCVgK5->LrWxIwBsO, &BB9HSCVgK5->XF0M8qSBbNp, BB9HSCVgK5->QSuRVhdI9YH, BB9HSCVgK5->bWEQ61uT9);
                YcZfXmkbP->bpZ1wYyO = BB9HSCVgK5;
                BB9HSCVgK5->bpZ1wYyO = NULL;
                YcZfXmkbP = BB9HSCVgK5;
            };
        }
        while ((173 - 172));
    }
    return (pRFUXkn);
}

struct   student *boP9pxmR5 (struct   student *pRFUXkn) {
    struct   student *yZj5usn;
    struct   student *L9SYVD;
    struct   student *IGeab58P;
    yZj5usn = NULL;
    L9SYVD = pRFUXkn;
    for (; L9SYVD;) {
        IGeab58P = L9SYVD->bpZ1wYyO;
        L9SYVD->bpZ1wYyO = yZj5usn;
        yZj5usn = L9SYVD;
        L9SYVD = IGeab58P;
    }
    return yZj5usn;
}

void  ClArDUf (struct   student *pRFUXkn) {
    struct   student *jP984WB7G;
    jP984WB7G = pRFUXkn;
    for (; jP984WB7G;) {
        printf ("%s %s %c %d %s %s\n", jP984WB7G->sAVgdFz, jP984WB7G->l17hnx3XpoNH, jP984WB7G->LrWxIwBsO, jP984WB7G->XF0M8qSBbNp, jP984WB7G->QSuRVhdI9YH, jP984WB7G->bWEQ61uT9);
        jP984WB7G = jP984WB7G->bpZ1wYyO;
    };
}

int main () {
    struct   student *pRFUXkn;
    ClArDUf (pRFUXkn);
    pRFUXkn = xyZLYKUgrCj ();
    pRFUXkn = boP9pxmR5 (pRFUXkn);
}

