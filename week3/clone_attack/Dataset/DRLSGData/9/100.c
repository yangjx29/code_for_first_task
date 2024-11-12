struct   ill {
    char v7N2CXT [(734 - 634)];
    int dO0cGXBH;
    struct   ill *giIbtEU3emxY;
};
void  main () {
    char *iEm6yKda [(1653 - 653)];
    struct   ill *oBHeQqY3Vbg (int x);
    struct   ill *qD0GM6EXOxRW, *head;
    int *MN9v0PApC;
    int n, i, MOzQUdGB = (126 - 126), KxG7XA, fySuKo;
    char *Svb8QlUK;
    scanf ("%d", &n);
    qD0GM6EXOxRW = oBHeQqY3Vbg (n);
    MN9v0PApC = (int *) malloc (n * sizeof (int));
    head = qD0GM6EXOxRW;
    for (i = (324 - 324); n > i; i++) {
        if ((*qD0GM6EXOxRW).dO0cGXBH >= (848 - 788)) {
            *(MN9v0PApC +MOzQUdGB) = (*qD0GM6EXOxRW).dO0cGXBH;
            *(iEm6yKda + MOzQUdGB) = (*qD0GM6EXOxRW).v7N2CXT;
            MOzQUdGB++;
        }
        qD0GM6EXOxRW = (*qD0GM6EXOxRW).giIbtEU3emxY;
    }
    KxG7XA = MOzQUdGB;
loop :
    for (i = (191 - 191); i < MOzQUdGB -(505 - 504); i++) {
        if (*(MN9v0PApC +i + (166 - 165)) > *(MN9v0PApC +i)) {
            fySuKo = *(MN9v0PApC +i);
            *(MN9v0PApC +i) = *(MN9v0PApC +i + (372 - 371));
            *(MN9v0PApC +i + (444 - 443)) = fySuKo;
            Svb8QlUK = *(iEm6yKda + i);
            *(iEm6yKda + i) = *(iEm6yKda + i + (495 - 494));
            *(iEm6yKda + i + (437 - 436)) = Svb8QlUK;
        }
    }
    for (i = (857 - 857); i < MOzQUdGB -1; i++) {
        if (*(MN9v0PApC +i) < *(MN9v0PApC +i + 1))
            goto loop;
    }
    for (i = (658 - 658); MOzQUdGB > i; i++) {
        printf ("%s\n", *(iEm6yKda + i));
    }
    qD0GM6EXOxRW = head;
    for (i = (227 - 227); i < n; i++) {
        if ((*qD0GM6EXOxRW).dO0cGXBH >= (676 - 616))
            goto lop;
        else {
            printf ("%s\n", (*qD0GM6EXOxRW).v7N2CXT);
        }
    lop :
        qD0GM6EXOxRW = (*qD0GM6EXOxRW).giIbtEU3emxY;
    }
}

struct   ill *oBHeQqY3Vbg (int x) {
    int i;
    struct   ill *head, *hmtpdG, *p2;
    hmtpdG = (struct   ill *) malloc (sizeof (struct   ill));
    scanf ("%s %d", (*hmtpdG).v7N2CXT, &(*hmtpdG).dO0cGXBH);
    p2 = hmtpdG;
    head = hmtpdG;
    for (i = 0; i < x; i++) {
        hmtpdG = (struct   ill *) malloc (sizeof (struct   ill));
        scanf ("%s %d", (*hmtpdG).v7N2CXT, &(*hmtpdG).dO0cGXBH);
        (*p2).giIbtEU3emxY = hmtpdG;
        p2 = hmtpdG;
    }
    (*p2).giIbtEU3emxY = NULL;
    return (head);
}

