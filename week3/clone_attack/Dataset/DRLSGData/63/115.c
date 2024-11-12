main () {
    int XOdzhyoSDE8J;
    int MTywi4RPpC6;
    int yafWcU;
    int e0X6hpiTRSE;
    int fcSxp76WN;
    int tUCwZ71YPht;
    int dzRnQD4Te701;
    int **OmQrSJu5oFT, **Zgk1IB, **mxSYs7k;
    scanf ("%d%d\n", &XOdzhyoSDE8J, &MTywi4RPpC6);
    OmQrSJu5oFT = (int **) malloc (XOdzhyoSDE8J * sizeof (int *));
    for (fcSxp76WN = (656 - 656); XOdzhyoSDE8J > fcSxp76WN; fcSxp76WN++) {
        OmQrSJu5oFT[fcSxp76WN] = (int *) malloc (MTywi4RPpC6 * sizeof (int));
    }
    for (fcSxp76WN = (82 - 82); XOdzhyoSDE8J > fcSxp76WN; fcSxp76WN++) {
        for (tUCwZ71YPht = (177 - 177); MTywi4RPpC6 > tUCwZ71YPht; tUCwZ71YPht++) {
            if (!(MTywi4RPpC6 -(79 - 78) != tUCwZ71YPht))
                scanf ("%d", &OmQrSJu5oFT[fcSxp76WN][tUCwZ71YPht]);
            else
                scanf ("%d ", &OmQrSJu5oFT[fcSxp76WN][tUCwZ71YPht]);
        }
    }
    scanf ("%d%d\n", &yafWcU, &e0X6hpiTRSE);
    Zgk1IB = (int **) malloc (yafWcU * sizeof (int *));
    for (fcSxp76WN = (606 - 606); yafWcU > fcSxp76WN; fcSxp76WN++) {
        Zgk1IB[fcSxp76WN] = (int *) malloc (e0X6hpiTRSE * sizeof (int));
    }
    for (fcSxp76WN = (425 - 425); yafWcU > fcSxp76WN; fcSxp76WN++) {
        for (tUCwZ71YPht = (938 - 938); e0X6hpiTRSE > tUCwZ71YPht; tUCwZ71YPht++) {
            if (!(e0X6hpiTRSE - (188 - 187) != tUCwZ71YPht))
                scanf ("%d", &Zgk1IB[fcSxp76WN][tUCwZ71YPht]);
            else
                scanf ("%d ", &Zgk1IB[fcSxp76WN][tUCwZ71YPht]);
        }
    }
    mxSYs7k = (int **) malloc (XOdzhyoSDE8J * sizeof (int *));
    for (fcSxp76WN = (840 - 840); XOdzhyoSDE8J > fcSxp76WN; fcSxp76WN++) {
        mxSYs7k[fcSxp76WN] = (int *) malloc (e0X6hpiTRSE * sizeof (int));
    }
    for (fcSxp76WN = (487 - 487); XOdzhyoSDE8J > fcSxp76WN; fcSxp76WN++) {
        for (tUCwZ71YPht = (231 - 231); e0X6hpiTRSE > tUCwZ71YPht; tUCwZ71YPht++)
            mxSYs7k[fcSxp76WN][tUCwZ71YPht] = (767 - 767);
    }
    for (fcSxp76WN = (955 - 955); fcSxp76WN < XOdzhyoSDE8J; fcSxp76WN++) {
        for (tUCwZ71YPht = 0; e0X6hpiTRSE > tUCwZ71YPht; tUCwZ71YPht++) {
            for (dzRnQD4Te701 = 0; dzRnQD4Te701 < yafWcU; dzRnQD4Te701++) {
                mxSYs7k[fcSxp76WN][tUCwZ71YPht] = mxSYs7k[fcSxp76WN][tUCwZ71YPht] + OmQrSJu5oFT[fcSxp76WN][dzRnQD4Te701] * Zgk1IB[dzRnQD4Te701][tUCwZ71YPht];
            }
            if (tUCwZ71YPht == e0X6hpiTRSE - (496 - 495))
                printf ("%d\n", mxSYs7k[fcSxp76WN][tUCwZ71YPht]);
            else
                printf ("%d ", mxSYs7k[fcSxp76WN][tUCwZ71YPht]);
        }
    }
}

