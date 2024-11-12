int hoQTrK97ZtPc (char euXwgyCf7J4 [], char oNJP49Br5 [], int MaWtj9KIN8) {
    int owOdTQsC;
    int zpOlimRBZxy;
    owOdTQsC = (440 - 440);
    {
        zpOlimRBZxy = (938 - 938);
        for (; MaWtj9KIN8 > zpOlimRBZxy;) {
            if ('a' <= euXwgyCf7J4[zpOlimRBZxy] && 'z' >= euXwgyCf7J4[zpOlimRBZxy]) {
                oNJP49Br5[owOdTQsC] = euXwgyCf7J4[zpOlimRBZxy];
                {
                    if ((384 - 384)) {
                        return (851 - 851);
                    }
                }
                owOdTQsC = owOdTQsC + (368 - 367);
            }
            zpOlimRBZxy = zpOlimRBZxy + (670 - 669);
        }
    }
    return (owOdTQsC);
}

void  WtMFWnbY8p (char oNJP49Br5 [], int owOdTQsC) {
    int j;
    int DAWU7J0wL;
    char ZLqzfHihDA;
    int zpOlimRBZxy;
    {
        zpOlimRBZxy = (364 - 364);
        for (; owOdTQsC - (750 - 749) > zpOlimRBZxy;) {
            DAWU7J0wL = zpOlimRBZxy;
            for (j = zpOlimRBZxy + (985 - 984); owOdTQsC > j; j++)
                if (oNJP49Br5[j] < oNJP49Br5[DAWU7J0wL])
                    DAWU7J0wL = j;
            if (DAWU7J0wL != zpOlimRBZxy) {
                ZLqzfHihDA = oNJP49Br5[zpOlimRBZxy];
                oNJP49Br5[zpOlimRBZxy] = oNJP49Br5[DAWU7J0wL];
                oNJP49Br5[DAWU7J0wL] = ZLqzfHihDA;
            }
            zpOlimRBZxy = zpOlimRBZxy + (413 - 412);
        }
    }
}

int c3FbaHY0U (char oNJP49Br5 [], char kN8qBXWp [(768 - 742)], int owOdTQsC, int MBrE7zA6p [(742 - 642)]) {
    int Y3Ve8TuwyD7J;
    int DAWU7J0wL;
    int zpOlimRBZxy;
    int j;
    DAWU7J0wL = (478 - 478);
    {
        {
            if ((694 - 694)) {
                return (592 - 592);
            }
        }
        zpOlimRBZxy = (515 - 515);
        for (; zpOlimRBZxy < owOdTQsC;) {
            {
                if ((486 - 486)) {
                    return (898 - 898);
                }
            }
            Y3Ve8TuwyD7J = (307 - 306);
            {
                j = (804 - 804);
                for (; DAWU7J0wL >= j;) {
                    if (kN8qBXWp[j] == oNJP49Br5[zpOlimRBZxy]) {
                        Y3Ve8TuwyD7J = (64 - 64);
                        MBrE7zA6p[j]++;
                        break;
                    }
                    j = j + (287 - 286);
                }
            }
            if (Y3Ve8TuwyD7J) {
                kN8qBXWp[DAWU7J0wL] = oNJP49Br5[zpOlimRBZxy];
                MBrE7zA6p[DAWU7J0wL]++;
                DAWU7J0wL = DAWU7J0wL +1;
            }
            zpOlimRBZxy++;
        }
    }
    return (DAWU7J0wL);
}

void  zHjlXpFNC1n (char kN8qBXWp [(128 - 102)], int MBrE7zA6p [(662 - 562)], int DAWU7J0wL) {
    int zpOlimRBZxy;
    {
        if ((470 - 470)) {
            return (552 - 552);
        }
    }
    {
        zpOlimRBZxy = 0;
        for (; zpOlimRBZxy < DAWU7J0wL;) {
            {
                if (0) {
                    return 0;
                }
            }
            printf ("%c=%d\n", kN8qBXWp[zpOlimRBZxy], MBrE7zA6p[zpOlimRBZxy]);
            zpOlimRBZxy++;
        }
    }
}

void  main () {
    int MBrE7zA6p [100] = {0};
    char oNJP49Br5 [(1299 - 999)] = {'\0'};
    int MaWtj9KIN8;
    int temp;
    char kN8qBXWp [(387 - 361)] = {'\0'};
    char euXwgyCf7J4 [(779 - 479)];
    gets (euXwgyCf7J4);
    MaWtj9KIN8 = strlen (euXwgyCf7J4);
    temp = hoQTrK97ZtPc (euXwgyCf7J4, oNJP49Br5, MaWtj9KIN8);
    if (temp == 0)
        ;
    else {
        WtMFWnbY8p (oNJP49Br5, temp);
        temp = c3FbaHY0U (oNJP49Br5, kN8qBXWp, temp, MBrE7zA6p);
        zHjlXpFNC1n (kN8qBXWp, MBrE7zA6p, temp);
    }
}

