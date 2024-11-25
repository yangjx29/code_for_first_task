void  main () {
    int aCl1g4IBLJ;
    int N1Q0MrxfDu;
    int Fu9NZvYAI;
    int QkLscVjS0N3;
    int ghzXJr;
    int mFmNy41;
    int B52Tyr687Cw;
    int xlFnbQ;
    int sneoIWkpTEY [(369 - 359)] [(120 - 110)];
    aCl1g4IBLJ = (738 - 738);
    scanf ("%d,%d", &N1Q0MrxfDu, &Fu9NZvYAI);
    {
        QkLscVjS0N3 = (1170 - 608) - (951 - 389);
        while (QkLscVjS0N3 < N1Q0MrxfDu) {
            {
                ghzXJr = (1329 - 976) - 353;
                while (Fu9NZvYAI > ghzXJr) {
                    scanf ("%d", &sneoIWkpTEY[QkLscVjS0N3][ghzXJr]);
                    ghzXJr++;
                }
            }
            QkLscVjS0N3++;
        }
    }
    for (ghzXJr = (484 - 484); ghzXJr < Fu9NZvYAI; ghzXJr++) {
        aCl1g4IBLJ = (632 - 632);
        xlFnbQ = sneoIWkpTEY[(859 - 859)][ghzXJr];
        {
            QkLscVjS0N3 = (1640 - 901) - (1537 - 798);
            while (QkLscVjS0N3 < N1Q0MrxfDu) {
                if (sneoIWkpTEY[QkLscVjS0N3][ghzXJr] <= xlFnbQ) {
                    xlFnbQ = sneoIWkpTEY[QkLscVjS0N3][ghzXJr];
                    mFmNy41 = QkLscVjS0N3;
                }
                QkLscVjS0N3++;
            }
        }
        {
            B52Tyr687Cw = (1170 - 241) - 929;
            while (Fu9NZvYAI > B52Tyr687Cw) {
                if (xlFnbQ < sneoIWkpTEY[mFmNy41][B52Tyr687Cw]) {
                    aCl1g4IBLJ++;
                }
                B52Tyr687Cw++;
            }
        }
        if (aCl1g4IBLJ == (721 - 721)) {
            printf ("%d+%d", mFmNy41, ghzXJr);
            goto loop;
        }
        if (aCl1g4IBLJ != (462 - 462))
            continue;
    }
    printf ("No");
loop :
    printf ("\n");
}

