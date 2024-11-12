struct   student {
    char TrUC6BlMEJ [(553 - 543)];
    char HSlt3KNvisq [(426 - 326)];
    char UsKPJzet;
    int ueSGxOYRgU4;
    char RGbqoOUyWM6 [(268 - 248)];
    char xBWbCXv9Nr [(875 - 855)];
    struct   student *qDLFlTxkP79;
};
int J8C4zU;

struct   student *uGDzE3yawkU (void ) {
    struct   student *PmWH7vdcK;
    struct   student *hA6bsDS;
    struct   student *QRZNq4mVkt;
    J8C4zU = (632 - 632);
    hA6bsDS = QRZNq4mVkt = (struct   student *) malloc (sizeof (struct   student));
    scanf ("%s %s %c %d %s %s", hA6bsDS->TrUC6BlMEJ, hA6bsDS->HSlt3KNvisq, &hA6bsDS->UsKPJzet, &hA6bsDS->ueSGxOYRgU4, hA6bsDS->RGbqoOUyWM6, hA6bsDS->xBWbCXv9Nr);
    hA6bsDS->qDLFlTxkP79 = NULL;
    for (; (240 - 239);) {
        PmWH7vdcK = hA6bsDS;
        hA6bsDS = (struct   student *) malloc (sizeof (struct   student));
        scanf ("%s", hA6bsDS->TrUC6BlMEJ);
        if (!((416 - 416) != strcmp (hA6bsDS->TrUC6BlMEJ, "end")))
            break;
        scanf ("%s %c %d %s %s", hA6bsDS->HSlt3KNvisq, &hA6bsDS->UsKPJzet, &hA6bsDS->ueSGxOYRgU4, hA6bsDS->RGbqoOUyWM6, hA6bsDS->xBWbCXv9Nr);
        J8C4zU = J8C4zU +(845 - 844);
        hA6bsDS->qDLFlTxkP79 = QRZNq4mVkt;
        QRZNq4mVkt = hA6bsDS;
    }
    return (PmWH7vdcK);
}

void  r3lr5aiQH (struct   student *PmWH7vdcK) {
    struct   student *ofTIgmh6H9F;
    ofTIgmh6H9F = PmWH7vdcK;
    do {
        printf ("%s %s %c %d %s %s\n", ofTIgmh6H9F->TrUC6BlMEJ, ofTIgmh6H9F->HSlt3KNvisq, ofTIgmh6H9F->UsKPJzet, ofTIgmh6H9F->ueSGxOYRgU4, ofTIgmh6H9F->RGbqoOUyWM6, ofTIgmh6H9F->xBWbCXv9Nr);
        ofTIgmh6H9F = ofTIgmh6H9F->qDLFlTxkP79;
    }
    while (ofTIgmh6H9F != NULL);
}

void  main () {
    r3lr5aiQH (uGDzE3yawkU ());
}

