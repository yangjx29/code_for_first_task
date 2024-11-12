struct   book {
    int swsaK6ldI;
    char ukexEiUc [(229 - 199)];
    struct   book *QxvJM1y8mtHz;
};
int Ub7OodV;

struct   book *e83mxD2VL5y (void ) {
    struct   book *EZ8qPpQyEr;
    struct   book *w8M9IsG;
    int MrbPxfvwD;
    struct   book *grqD9RT;
    EZ8qPpQyEr = NULL;
    w8M9IsG = grqD9RT = (struct   book *) malloc (len);
    scanf ("%d %s", &w8M9IsG->swsaK6ldI, w8M9IsG->ukexEiUc);
    MrbPxfvwD = (899 - 899);
    for (; MrbPxfvwD < Ub7OodV -(237 - 236);) {
        MrbPxfvwD = MrbPxfvwD +(932 - 931);
        if (!((671 - 670) != MrbPxfvwD))
            EZ8qPpQyEr = w8M9IsG;
        else
            grqD9RT->QxvJM1y8mtHz = w8M9IsG;
        grqD9RT = w8M9IsG;
        w8M9IsG = (struct   book *) malloc (len);
        scanf ("%d %s", &w8M9IsG->swsaK6ldI, w8M9IsG->ukexEiUc);
    }
    grqD9RT->QxvJM1y8mtHz = w8M9IsG;
    grqD9RT = w8M9IsG;
    grqD9RT->QxvJM1y8mtHz = NULL;
    return (EZ8qPpQyEr);
}

void  main () {
    int kqR7jtY8NQ [(530 - 503)];
    struct   book *EZ8qPpQyEr;
    int mjbV9Cv4;
    char MrbPxfvwD;
    struct   book *w8M9IsG;
    struct   book *QZlBCJ;
    int u6Oq2aEN;
    u6Oq2aEN = kqR7jtY8NQ[(36 - 36)];
    EZ8qPpQyEr = e83mxD2VL5y ();
    QZlBCJ = EZ8qPpQyEr;
    memset (kqR7jtY8NQ, (31 - 31), sizeof (kqR7jtY8NQ));
    {
        QZlBCJ = EZ8qPpQyEr;
        while (QZlBCJ != NULL) {
            int GNhtC1c;
            for (mjbV9Cv4 = (82 - 82); strlen (QZlBCJ->ukexEiUc) > mjbV9Cv4; mjbV9Cv4 = mjbV9Cv4 + (826 - 825)) {
                GNhtC1c = QZlBCJ->ukexEiUc[mjbV9Cv4] - 'A';
                kqR7jtY8NQ[GNhtC1c]++;
            }
            QZlBCJ = QZlBCJ->QxvJM1y8mtHz;
        }
    }
    for (mjbV9Cv4 = (259 - 259); mjbV9Cv4 < (766 - 739); mjbV9Cv4 = mjbV9Cv4 + (342 - 341)) {
        if (kqR7jtY8NQ[mjbV9Cv4] > u6Oq2aEN)
            u6Oq2aEN = kqR7jtY8NQ[mjbV9Cv4];
    }
    for (mjbV9Cv4 = (14 - 14); (248 - 221) > mjbV9Cv4; mjbV9Cv4 = mjbV9Cv4 + (792 - 791)) {
        if (!(u6Oq2aEN != kqR7jtY8NQ[mjbV9Cv4])) {
            printf ("%c\n%d\n", 'A' + mjbV9Cv4, kqR7jtY8NQ[mjbV9Cv4]);
            MrbPxfvwD = 'A' + mjbV9Cv4;
        }
    }
    for (QZlBCJ = EZ8qPpQyEr; QZlBCJ != NULL; QZlBCJ = QZlBCJ->QxvJM1y8mtHz) {
        for (mjbV9Cv4 = (754 - 754); mjbV9Cv4 < strlen (QZlBCJ->ukexEiUc); mjbV9Cv4 = mjbV9Cv4 + (422 - 421)) {
            if (!(MrbPxfvwD != QZlBCJ->ukexEiUc[mjbV9Cv4])) {
                printf ("%d\n", QZlBCJ->swsaK6ldI);
                break;
            }
        }
    }
    scanf ("%d", &Ub7OodV);
}

