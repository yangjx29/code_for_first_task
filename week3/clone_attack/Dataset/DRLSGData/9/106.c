struct   dI5A3fte4hP {
    char zb5reAVXhvN [(849 - 838)];
    int AeOamsEc;
    struct   dI5A3fte4hP *S97EMn4p3x5I;
}
*gZVArvY0, *Dy827Yjtma1, *yxeMrAjCkdi, *Z1I9Dw, *qnwrUt, *CmoNPiBZMsY;

void  main () {
    int HlLJhPjbduoI, snpfvdhusON, YZdkt68xU92Y = (825 - 825);
    struct   dI5A3fte4hP *R2STvH (struct   dI5A3fte4hP *yxeMrAjCkdi, int snpfvdhusON);
    void  smYBRe (struct   dI5A3fte4hP *yxeMrAjCkdi);
    free (yxeMrAjCkdi);
    smYBRe (CmoNPiBZMsY);
    yxeMrAjCkdi = gZVArvY0 = Dy827Yjtma1 = (struct   dI5A3fte4hP *) malloc (LEN);
    yxeMrAjCkdi->S97EMn4p3x5I = NULL;
    scanf ("%d", &snpfvdhusON);
    for (HlLJhPjbduoI = (744 - 744); HlLJhPjbduoI < snpfvdhusON; HlLJhPjbduoI = HlLJhPjbduoI +1) {
        gZVArvY0 = (struct   dI5A3fte4hP *) malloc (LEN);
        scanf ("%s %d", gZVArvY0->zb5reAVXhvN, &gZVArvY0->AeOamsEc);
        if (60 <= (gZVArvY0->AeOamsEc))
            YZdkt68xU92Y = YZdkt68xU92Y +1;
        Dy827Yjtma1->S97EMn4p3x5I = gZVArvY0;
        Dy827Yjtma1 = gZVArvY0;
    }
    Dy827Yjtma1->S97EMn4p3x5I = NULL;
    for (HlLJhPjbduoI = snpfvdhusON; HlLJhPjbduoI > snpfvdhusON - YZdkt68xU92Y; HlLJhPjbduoI = HlLJhPjbduoI -1) {
        yxeMrAjCkdi = R2STvH (yxeMrAjCkdi, HlLJhPjbduoI);
    }
    CmoNPiBZMsY = Z1I9Dw = qnwrUt = (struct   dI5A3fte4hP *) malloc (LEN);
    CmoNPiBZMsY->S97EMn4p3x5I = NULL;
    qnwrUt->S97EMn4p3x5I = NULL;
    qnwrUt->S97EMn4p3x5I = yxeMrAjCkdi->S97EMn4p3x5I;
}

struct   dI5A3fte4hP *R2STvH (struct   dI5A3fte4hP *yxeMrAjCkdi, int snpfvdhusON) {
    struct   dI5A3fte4hP *gZVArvY0, *Dy827Yjtma1, *yuy4jgkBqsQ6, *db7pWQC5;
    free (yuy4jgkBqsQ6);
    int LWUSY39 = (533 - 474), HlLJhPjbduoI;
    Dy827Yjtma1 = yxeMrAjCkdi;
    gZVArvY0 = yxeMrAjCkdi->S97EMn4p3x5I;
    for (HlLJhPjbduoI = (768 - 768); snpfvdhusON > HlLJhPjbduoI; HlLJhPjbduoI = HlLJhPjbduoI +1) {
        if (LWUSY39 < (gZVArvY0->AeOamsEc)) {
            LWUSY39 = gZVArvY0->AeOamsEc;
            yuy4jgkBqsQ6 = gZVArvY0;
            db7pWQC5 = Dy827Yjtma1;
        }
        gZVArvY0 = gZVArvY0->S97EMn4p3x5I;
        Dy827Yjtma1 = Dy827Yjtma1->S97EMn4p3x5I;
    }
    Z1I9Dw = (struct   dI5A3fte4hP *) malloc (LEN);
    strcpy (Z1I9Dw->zb5reAVXhvN, yuy4jgkBqsQ6->zb5reAVXhvN);
    Z1I9Dw->AeOamsEc = yuy4jgkBqsQ6->AeOamsEc;
    qnwrUt->S97EMn4p3x5I = Z1I9Dw;
    if (db7pWQC5 == yxeMrAjCkdi)
        yxeMrAjCkdi->S97EMn4p3x5I = yuy4jgkBqsQ6->S97EMn4p3x5I;
    else
        db7pWQC5->S97EMn4p3x5I = yuy4jgkBqsQ6->S97EMn4p3x5I;
    qnwrUt = Z1I9Dw;
    return (yxeMrAjCkdi);
}

void  smYBRe (struct   dI5A3fte4hP *CmoNPiBZMsY) {
    struct   dI5A3fte4hP *q;
    q = CmoNPiBZMsY->S97EMn4p3x5I;
    do {
        printf ("%s\n", q->zb5reAVXhvN);
        q = q->S97EMn4p3x5I;
    }
    while (q != NULL);
}

