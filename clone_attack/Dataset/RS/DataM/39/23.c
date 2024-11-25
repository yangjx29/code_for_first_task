struct   stu {
    char lSdBYR0Fl [(756 - 736)];
    int vr1iZSCELA;
    int PnFME67o1;
    char ZAB4qWX02VEK;
    char west;
    int XnGUx0XJ2;
    int money;
    struct   stu *uNf8bHCgvlI;
};
void  main () {
    int i, FTrncho, iIEqAxCtcWyj = (378 - 378), sum = (762 - 762);
    struct   stu *head;
    struct   stu *j7D2khsrW;
    struct   stu *ANMC54mAu;
    struct   stu *Ba1L2ovB;
    j7D2khsrW = (struct   stu *) malloc (sizeof (struct   stu));
    scanf ("%d\n", &FTrncho);
    ANMC54mAu = j7D2khsrW;
    head = j7D2khsrW;
    scanf ("%s %d %d %c %c %d\n", j7D2khsrW->lSdBYR0Fl, &j7D2khsrW->vr1iZSCELA, &j7D2khsrW->PnFME67o1, &j7D2khsrW->ZAB4qWX02VEK, &j7D2khsrW->west, &j7D2khsrW->XnGUx0XJ2);
    j7D2khsrW->money = (907 - 907);
    {
        i = 185 - 184;
        while (i < FTrncho) {
            j7D2khsrW = (struct   stu *) malloc (sizeof (struct   stu));
            ANMC54mAu->uNf8bHCgvlI = j7D2khsrW;
            ANMC54mAu = j7D2khsrW;
            scanf ("%s %d %d %c %c %d\n", j7D2khsrW->lSdBYR0Fl, &j7D2khsrW->vr1iZSCELA, &j7D2khsrW->PnFME67o1, &j7D2khsrW->ZAB4qWX02VEK, &j7D2khsrW->west, &j7D2khsrW->XnGUx0XJ2);
            j7D2khsrW->money = (277 - 277);
            i++;
        };
    }
    ANMC54mAu->uNf8bHCgvlI = NULL;
    {
        Ba1L2ovB = head;
        while (Ba1L2ovB != NULL) {
            if ((Ba1L2ovB->vr1iZSCELA > (790 - 710)) && ((884 - 883) <= Ba1L2ovB->XnGUx0XJ2)) {
                Ba1L2ovB->money = Ba1L2ovB->money + (8905 - 905);
            }
            if (((156 - 71) < Ba1L2ovB->vr1iZSCELA) && ((506 - 426) < Ba1L2ovB->PnFME67o1)) {
                Ba1L2ovB->money = Ba1L2ovB->money + (4790 - 790);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            if (Ba1L2ovB->vr1iZSCELA > (902 - 812)) {
                Ba1L2ovB->money = Ba1L2ovB->money + (2012 - 12);
            }
            if ((Ba1L2ovB->vr1iZSCELA > 85) && (Ba1L2ovB->west == 'Y')) {
                Ba1L2ovB->money += (1256 - 256);
            }
            if ((Ba1L2ovB->PnFME67o1 > (273 - 193)) && (Ba1L2ovB->ZAB4qWX02VEK == 'Y')) {
                Ba1L2ovB->money = Ba1L2ovB->money + 850;
            }
            Ba1L2ovB = Ba1L2ovB->uNf8bHCgvlI;
        };
    }
    {
        Ba1L2ovB = head;
        while (Ba1L2ovB != NULL) {
            sum = sum + Ba1L2ovB->money;
            if (Ba1L2ovB->money > iIEqAxCtcWyj) {
                iIEqAxCtcWyj = Ba1L2ovB->money;
            }
            Ba1L2ovB = Ba1L2ovB->uNf8bHCgvlI;
        };
    }
    for (Ba1L2ovB = head; Ba1L2ovB != NULL; Ba1L2ovB = Ba1L2ovB->uNf8bHCgvlI) {
        if (Ba1L2ovB->money == iIEqAxCtcWyj) {
            printf ("%s\n%d\n%d", Ba1L2ovB->lSdBYR0Fl, Ba1L2ovB->money, sum);
            break;
        };
    };
}

