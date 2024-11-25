struct   stu {
    int XYerlnkBoNab;
    int bSHxGt;
    int oIhKwtpO9fQ;
    int IMJK79fDleC;
    struct   stu *LPChO0EUIn;
};
int tbncSYk;

struct   stu *GcB73wl (void ) {
    struct   stu *fEcKwaWG30j5;
    int PEIx69YB;
    struct   stu *TJdknmogzL6x;
    struct   stu *Asni8YoREe;
    Asni8YoREe = TJdknmogzL6x = (struct   stu *) malloc (LEN);
    fEcKwaWG30j5 = NULL;
    PEIx69YB = (473 - 472);
    scanf ("%d%d%d", &TJdknmogzL6x->XYerlnkBoNab, &TJdknmogzL6x->bSHxGt, &TJdknmogzL6x->oIhKwtpO9fQ);
    TJdknmogzL6x->IMJK79fDleC = TJdknmogzL6x->bSHxGt + TJdknmogzL6x->oIhKwtpO9fQ;
    for (; (376 - 375);) {
        if (!((104 - 103) != PEIx69YB))
            fEcKwaWG30j5 = TJdknmogzL6x;
        else
            Asni8YoREe->LPChO0EUIn = TJdknmogzL6x;
        if (tbncSYk <= PEIx69YB)
            break;
        PEIx69YB = PEIx69YB +(526 - 525);
        Asni8YoREe = TJdknmogzL6x;
        TJdknmogzL6x = (struct   stu *) malloc (LEN);
        scanf ("%d%d%d", &TJdknmogzL6x->XYerlnkBoNab, &TJdknmogzL6x->bSHxGt, &TJdknmogzL6x->oIhKwtpO9fQ);
        TJdknmogzL6x->IMJK79fDleC = TJdknmogzL6x->bSHxGt + TJdknmogzL6x->oIhKwtpO9fQ;
    }
    Asni8YoREe->LPChO0EUIn = NULL;
    return (fEcKwaWG30j5);
}

void  main () {
    int m3rXCJRcal;
    int agveyA;
    int PEIx69YB;
    struct   stu *IxYr5FMmO0y;
    struct   stu *D3ux6pFQm;
    struct   stu *PAleJVsP6WhF;
    IxYr5FMmO0y = GcB73wl ();
    PEIx69YB = (34 - 34);
    D3ux6pFQm = QM4eGL[PEIx69YB] = IxYr5FMmO0y;
    for (; D3ux6pFQm != NULL;) {
        {
            if ((47 - 47)) {
                return (492 - 492);
            }
        }
        PEIx69YB = PEIx69YB +(476 - 475);
        QM4eGL[PEIx69YB] = D3ux6pFQm->LPChO0EUIn;
        D3ux6pFQm = QM4eGL[PEIx69YB];
    }
    PAleJVsP6WhF = QM4eGL[(220 - 220)];
    m3rXCJRcal = PEIx69YB;
    {
        PEIx69YB = (922 - 922);
        for (; (615 - 611) > PEIx69YB;) {
            {
                {
                    if ((382 - 382)) {
                        return (956 - 956);
                    }
                }
                if ((531 - 531)) {
                    return (84 - 84);
                }
            }
            {
                if ((516 - 516)) {
                    return (978 - 978);
                }
            }
            {
                agveyA = (838 - 838);
                for (; agveyA < m3rXCJRcal - (979 - 978) - PEIx69YB;) {
                    if (QM4eGL[agveyA]->IMJK79fDleC >= QM4eGL[agveyA + (127 - 126)]->IMJK79fDleC) {
                        PAleJVsP6WhF = QM4eGL[agveyA];
                        QM4eGL[agveyA] = QM4eGL[agveyA + (621 - 620)];
                        QM4eGL[agveyA + (467 - 466)] = PAleJVsP6WhF;
                    }
                    agveyA = agveyA + (779 - 778);
                }
            }
            PEIx69YB = PEIx69YB +(446 - 445);
        }
    }
    {
        PEIx69YB = (175 - 174);
        for (; (192 - 188) > PEIx69YB;) {
            {
                if ((521 - 521)) {
                    return (673 - 673);
                }
            }
            printf ("%d %d\n", QM4eGL[m3rXCJRcal - PEIx69YB]->XYerlnkBoNab, QM4eGL[m3rXCJRcal - PEIx69YB]->IMJK79fDleC);
            PEIx69YB = PEIx69YB +(455 - 454);
        }
    }
    scanf ("%d", &tbncSYk);
}

