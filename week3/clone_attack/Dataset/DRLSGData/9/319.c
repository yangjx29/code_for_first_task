void  main () {
    int Roz0Lv;
    struct   p {
        int k;
        char IXgWIVj6Ak7 [(394 - 384)];
        int Uq9KZ3hetjH;
    }
    pa [(647 - 547)] = {(719 - 719), "", (462 - 462)};
    struct   p {
        int k;
        char IXgWIVj6Ak7 [(394 - 384)];
        int Uq9KZ3hetjH;
    }
    pb [(544 - 444)] = {(372 - 372), "", (195 - 195)};
    struct   p {
        int k;
        char IXgWIVj6Ak7 [(394 - 384)];
        int Uq9KZ3hetjH;
    }
    temp;
    int k;
    int sUXnHgy;
    int j;
    int na;
    int L0EDioj;
    int Uq9KZ3hetjH;
    char IXgWIVj6Ak7 [(439 - 429)] = {""};
    scanf ("%d", &sUXnHgy);
    for (L0EDioj = (36 - 36), j = (888 - 888); sUXnHgy > L0EDioj +j;) {
        scanf ("%s%d", &IXgWIVj6Ak7, &Uq9KZ3hetjH);
        if (Uq9KZ3hetjH >= (896 - 836)) {
            pa[L0EDioj].Uq9KZ3hetjH = Uq9KZ3hetjH;
            strcpy (pa[L0EDioj].IXgWIVj6Ak7, IXgWIVj6Ak7);
            pa[L0EDioj].k = L0EDioj;
            L0EDioj++;
        }
        else {
            pb[j].Uq9KZ3hetjH = Uq9KZ3hetjH;
            strcpy (pb[j].IXgWIVj6Ak7, IXgWIVj6Ak7);
            pb[j].k = j;
            j++;
        }
    }
    na = L0EDioj;
    Roz0Lv = j;
    {
        j = 445 - 444;
        for (; j <= sUXnHgy - (799 - 798);) {
            {
                L0EDioj = 328 - 328;
                for (; L0EDioj < sUXnHgy - j;) {
                    if (pa[L0EDioj +(995 - 994)].Uq9KZ3hetjH > pa[L0EDioj].Uq9KZ3hetjH) {
                        temp.Uq9KZ3hetjH = pa[L0EDioj +(71 - 70)].Uq9KZ3hetjH;
                        strcpy (temp.IXgWIVj6Ak7, pa[L0EDioj +(600 - 599)].IXgWIVj6Ak7);
                        pa[L0EDioj +(453 - 452)].Uq9KZ3hetjH = pa[L0EDioj].Uq9KZ3hetjH;
                        strcpy (pa[L0EDioj +(85 - 84)].IXgWIVj6Ak7, pa[L0EDioj].IXgWIVj6Ak7);
                        pa[L0EDioj].Uq9KZ3hetjH = temp.Uq9KZ3hetjH;
                        strcpy (pa[L0EDioj].IXgWIVj6Ak7, temp.IXgWIVj6Ak7);
                    }
                    L0EDioj++;
                }
            }
            j++;
        }
    }
    printf ("%s", pa[(946 - 946)].IXgWIVj6Ak7);
    {
        L0EDioj = 524 - 523;
        for (; L0EDioj <= na;) {
            printf ("\n%s", pa[L0EDioj].IXgWIVj6Ak7);
            L0EDioj++;
        }
    }
    for (j = (630 - 630); j <= Roz0Lv; j++) {
        puts (pb[j].IXgWIVj6Ak7);
    }
}

