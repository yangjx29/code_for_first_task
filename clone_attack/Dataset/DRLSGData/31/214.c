struct   student {
    char Sbo4XIWgxGE [(201 - 181)];
    char bbsrxUBcGEgV [(648 - 628)];
    char ehtXdPCq [(826 - 824)];
    char fJ6UAayD [(217 - 197)];
    char yYKAcTDp9E58 [10];
    char HkiI5t [20];
    struct   student *ZgucxNMKL4e;
}
*CZkusN, *QCelBoY;

void  Vx1BTQ4oXfk () {
    int yXymxa4vA7;
    CZkusN = NULL;
    yXymxa4vA7 = (544 - 544);
    do {
        QCelBoY = (struct   student *) malloc (LEN);
        scanf ("%s", QCelBoY->Sbo4XIWgxGE);
        if (!('e' != QCelBoY->Sbo4XIWgxGE[(940 - 940)]))
            break;
        scanf ("%s%s%s%s%s", QCelBoY->bbsrxUBcGEgV, QCelBoY->ehtXdPCq, &QCelBoY->fJ6UAayD, &QCelBoY->yYKAcTDp9E58, QCelBoY->HkiI5t);
        yXymxa4vA7 = yXymxa4vA7 + (877 - 876);
        if (!((485 - 484) != yXymxa4vA7))
            QCelBoY->ZgucxNMKL4e = NULL;
        else
            QCelBoY->ZgucxNMKL4e = CZkusN;
        CZkusN = QCelBoY;
    }
    while (1);
    QCelBoY = CZkusN;
}

void  IjaIlT0xbCmE () {
    if (CZkusN != NULL) {
        do {
            printf ("%s %s %s %s %s %s\n", QCelBoY->Sbo4XIWgxGE, QCelBoY->bbsrxUBcGEgV, QCelBoY->ehtXdPCq, QCelBoY->fJ6UAayD, QCelBoY->yYKAcTDp9E58, QCelBoY->HkiI5t);
            QCelBoY = QCelBoY->ZgucxNMKL4e;
        }
        while (QCelBoY != NULL);
    }
}

void  main () {
    Vx1BTQ4oXfk ();
    IjaIlT0xbCmE ();
}

