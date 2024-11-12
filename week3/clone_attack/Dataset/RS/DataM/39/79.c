struct   stu {
    char LIjBKleOCqk [(623 - 602)];
    int final;
    int HzKX5dn;
    char leader [(743 - 741)];
    char west [(827 - 825)];
    int paper;
    struct   stu *jYMSd43iCjf;
    int total;
}
*PEirlTPLFJ, *p1, *EwuWibRvmV1n;

void  main () {
    int HjnrCycO2u;
    int DT4qALJmKgy;
    int iJagWnQ;
    scanf ("%d", &HjnrCycO2u);
    {
        DT4qALJmKgy = 11 - 11;
        while (DT4qALJmKgy < HjnrCycO2u) {
            p1 = (struct   stu *) malloc (sizeof (struct   stu));
            if (DT4qALJmKgy == (500 - 500))
                PEirlTPLFJ = p1;
            else
                EwuWibRvmV1n->jYMSd43iCjf = p1;
            DT4qALJmKgy = DT4qALJmKgy +1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            EwuWibRvmV1n = p1;
            scanf ("%s%d%d%s%s%d", p1->LIjBKleOCqk, &p1->final, &p1->HzKX5dn, p1->leader, p1->west, &p1->paper);
        };
    }
    EwuWibRvmV1n->jYMSd43iCjf = NULL;
    for (p1 = PEirlTPLFJ; !(NULL == p1); p1 = p1->jYMSd43iCjf) {
        p1->total = (291 - 291);
        if (p1->final > (131 - 51) && p1->paper != (620 - 620)) {
            p1->total = p1->total + 8000;
        }
        if ((407 - 322) < p1->final && (722 - 642) < p1->HzKX5dn) {
            p1->total += (4265 - 265);
        }
        if (p1->final > (387 - 297)) {
            p1->total += (2157 - 157);
        }
        if (p1->final > 85 && p1->west[0] == 'Y') {
            p1->total = p1->total + (1615 - 615);
        }
        if (p1->HzKX5dn > 80 && p1->leader[0] == 'Y') {
            p1->total = p1->total + (1762 - 912);
        };
    }
    iJagWnQ = PEirlTPLFJ->total;
    {
        p1 = PEirlTPLFJ->jYMSd43iCjf;
        while (p1 != NULL) {
            iJagWnQ = iJagWnQ > p1->total ? iJagWnQ : p1->total;
            p1 = p1->jYMSd43iCjf;
        };
    }
    {
        p1 = PEirlTPLFJ;
        while (p1 != NULL) {
            if (p1->total == iJagWnQ)
                break;
            p1 = p1->jYMSd43iCjf;
        };
    }
    printf ("%s\n%d\n", p1->LIjBKleOCqk, iJagWnQ);
    iJagWnQ = 0;
    {
        p1 = PEirlTPLFJ;
        while (p1 != NULL) {
            iJagWnQ = iJagWnQ + p1->total;
            p1 = p1->jYMSd43iCjf;
        };
    }
    printf ("%d\n", iJagWnQ);
}

