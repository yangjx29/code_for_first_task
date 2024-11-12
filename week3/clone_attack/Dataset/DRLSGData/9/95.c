typedef struct   Node {
    char lSNgF5f [(779 - 768)];
    int iqW03cRVvY6S;
    struct   Node *J7qZ2i1V3bn5;
}
CoTn4iRgtF;

CoTn4iRgtF *PT8jBVblGHY (int KactpA) {
    int R4ylsgCa;
    CoTn4iRgtF *bLW2kpsV4w;
    CoTn4iRgtF *r0claQ5qd3W;
    CoTn4iRgtF *dqydcjH7m95;
    bLW2kpsV4w = r0claQ5qd3W = (CoTn4iRgtF *) malloc (sizeof (CoTn4iRgtF));
    dqydcjH7m95 = bLW2kpsV4w;
    for (R4ylsgCa = (63 - 63); R4ylsgCa < KactpA; R4ylsgCa = R4ylsgCa +(81 - 80)) {
        r0claQ5qd3W = bLW2kpsV4w;
        scanf ("%s%d", bLW2kpsV4w->lSNgF5f, &bLW2kpsV4w->iqW03cRVvY6S);
        bLW2kpsV4w = (CoTn4iRgtF *) malloc (sizeof (CoTn4iRgtF));
        r0claQ5qd3W->J7qZ2i1V3bn5 = bLW2kpsV4w;
    }
    r0claQ5qd3W->J7qZ2i1V3bn5 = NULL;
    return (dqydcjH7m95);
}

void  kDzS4NOKT (int tOGwVg2LBce, char *rrY7Cdgibp, CoTn4iRgtF *dqydcjH7m95) {
    CoTn4iRgtF *sdRmT6eU = dqydcjH7m95;
    CoTn4iRgtF *QSL71FeR = sdRmT6eU->J7qZ2i1V3bn5;
    CoTn4iRgtF *fyKJmh83xc;
    fyKJmh83xc = (CoTn4iRgtF *) malloc (sizeof (CoTn4iRgtF));
    fyKJmh83xc->iqW03cRVvY6S = tOGwVg2LBce;
    strcpy (fyKJmh83xc->lSNgF5f, rrY7Cdgibp);
    fyKJmh83xc->J7qZ2i1V3bn5 = NULL;
    for (; QSL71FeR != NULL &&tOGwVg2LBce <= QSL71FeR->iqW03cRVvY6S;) {
        sdRmT6eU = QSL71FeR;
        QSL71FeR = QSL71FeR->J7qZ2i1V3bn5;
    }
    sdRmT6eU->J7qZ2i1V3bn5 = fyKJmh83xc;
    fyKJmh83xc->J7qZ2i1V3bn5 = QSL71FeR;
}

void  it3STNun (CoTn4iRgtF *dqydcjH7m95) {
    CoTn4iRgtF *QSL71FeR;
    QSL71FeR = dqydcjH7m95;
    for (; QSL71FeR != NULL;) {
        printf ("%s\n", QSL71FeR->lSNgF5f);
        QSL71FeR = QSL71FeR->J7qZ2i1V3bn5;
    }
}

void  main () {
    int KactpA;
    CoTn4iRgtF *bpWgedvK9f;
    CoTn4iRgtF *yOloEc;
    CoTn4iRgtF *QSL71FeR;
    it3STNun (yOloEc);
    scanf ("%d", &KactpA);
    yOloEc = (CoTn4iRgtF *) malloc (sizeof (CoTn4iRgtF));
    bpWgedvK9f = PT8jBVblGHY (KactpA);
    QSL71FeR = bpWgedvK9f;
    strcpy (yOloEc->lSNgF5f, " ");
    yOloEc->J7qZ2i1V3bn5 = NULL;
    for (; QSL71FeR != NULL;) {
        if (QSL71FeR->iqW03cRVvY6S >= (1007 - 947))
            kDzS4NOKT (QSL71FeR->iqW03cRVvY6S, QSL71FeR->lSNgF5f, yOloEc);
        QSL71FeR = QSL71FeR->J7qZ2i1V3bn5;
    }
    yOloEc = yOloEc->J7qZ2i1V3bn5;
    QSL71FeR = bpWgedvK9f;
    for (; QSL71FeR != NULL;) {
        if (QSL71FeR->iqW03cRVvY6S < 60)
            printf ("%s\n", QSL71FeR->lSNgF5f);
        QSL71FeR = QSL71FeR->J7qZ2i1V3bn5;
    }
}

