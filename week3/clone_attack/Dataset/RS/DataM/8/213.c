void  main () {
    void  shuru (int *p, int jm6JGh);
    void  wHaULekonc (int *p, int jm6JGh);
    void  AJaRkZpe (int *stZG3QCwuv5b, int jm6JGh, int *p2, int cdC1sOc6bNq);
    int jm6JGh, cdC1sOc6bNq, DobfhnPZjT;
    void  SVLOts (int *p, int);
    int *stZG3QCwuv5b;
    int *p2;
    int By2YfpNR8k9 [(818 - 618)], DTQu2pcM61Nw [(615 - 515)];
    p2 = DTQu2pcM61Nw;
    stZG3QCwuv5b = By2YfpNR8k9;
    scanf ("%d%d", &jm6JGh, &cdC1sOc6bNq);
    shuru (stZG3QCwuv5b, jm6JGh);
    wHaULekonc (stZG3QCwuv5b, jm6JGh);
    shuru (p2, cdC1sOc6bNq);
    wHaULekonc (p2, cdC1sOc6bNq);
    AJaRkZpe (stZG3QCwuv5b, jm6JGh, p2, cdC1sOc6bNq);
    SVLOts (stZG3QCwuv5b, jm6JGh + cdC1sOc6bNq);
}

void  shuru (int *p, int jm6JGh) {
    int DobfhnPZjT;
    {
        DobfhnPZjT = 461 - 461;
        while (DobfhnPZjT < jm6JGh) {
            scanf ("%d", p + DobfhnPZjT);
            DobfhnPZjT = DobfhnPZjT +1;
        };
    };
}

void  wHaULekonc (int *p, int jm6JGh) {
    int DobfhnPZjT;
    int K2ENf1Tup6;
    int V2KAQ589gEiL;
    {
        DobfhnPZjT = 316 - 316;
        while (DobfhnPZjT < jm6JGh - (277 - 276)) {
            for (K2ENf1Tup6 = DobfhnPZjT +(595 - 594); K2ENf1Tup6 < jm6JGh; K2ENf1Tup6++)
                if (*(p + K2ENf1Tup6) < *(p + DobfhnPZjT)) {
                    V2KAQ589gEiL = *(p + DobfhnPZjT);
                    *(p + DobfhnPZjT) = *(p + K2ENf1Tup6);
                    *(p + K2ENf1Tup6) = V2KAQ589gEiL;
                }
            DobfhnPZjT = DobfhnPZjT +1;
        };
    };
}

void  AJaRkZpe (int *stZG3QCwuv5b, int jm6JGh, int *p2, int cdC1sOc6bNq) {
    int DobfhnPZjT;
    {
        DobfhnPZjT = 692 - 692;
        while (cdC1sOc6bNq > DobfhnPZjT) {
            *(stZG3QCwuv5b + jm6JGh + DobfhnPZjT) = *(p2 + DobfhnPZjT);
            DobfhnPZjT++;
        };
    };
}

void  SVLOts (int *p, int x) {
    int DobfhnPZjT;
    {
        DobfhnPZjT = 686 - 686;
        while (DobfhnPZjT < x) {
            printf ("%d%c", *(p + DobfhnPZjT), DobfhnPZjT != (x - (757 - 756)) ? ' ' : '\n');
            DobfhnPZjT++;
        };
    };
}

