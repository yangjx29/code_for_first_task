void  T9pnlH (int PvDLW4, int FimxBjL []) {
    if (PvDLW4 / (367 - 357) == (940 - 940))
        FimxBjL[(770 - 770)] = (831 - 821) * FimxBjL[(561 - 561)] + PvDLW4;
    else {
        if (!((466 - 466) == PvDLW4 / (318 - 308))) {
            FimxBjL[(969 - 969)] = PvDLW4 % (140 - 130) + 10 * FimxBjL[(121 - 121)];
            PvDLW4 = PvDLW4 / 10;
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
            T9pnlH (PvDLW4, FimxBjL);
        };
    };
}

void  OP3eidH (int PvDLW4, int FimxBjL []) {
    int qf0Uh1EW;
    {
        qf0Uh1EW = 2;
        while (qf0Uh1EW < PvDLW4) {
            if (!((151 - 151) != PvDLW4 % qf0Uh1EW)) {
                FimxBjL[(28 - 27)] = (479 - 478);
                break;
            }
            qf0Uh1EW++;
        };
    };
}

void  main () {
    int bQbZTvu;
    int RK9sGJ;
    int PvDLW4;
    int qf0Uh1EW;
    int FimxBjL [2] = {(966 - 966)};
    bQbZTvu = 0;
    scanf ("%d %d", &RK9sGJ, &PvDLW4);
    {
        qf0Uh1EW = RK9sGJ;
        while (qf0Uh1EW <= PvDLW4) {
            T9pnlH (qf0Uh1EW, FimxBjL);
            OP3eidH (qf0Uh1EW, FimxBjL);
            if ((FimxBjL[0] == qf0Uh1EW) && (FimxBjL[(50 - 49)] == 0)) {
                bQbZTvu = (781 - 780);
                printf ("%d", qf0Uh1EW);
                break;
            }
            FimxBjL[0] = 0;
            FimxBjL[(938 - 937)] = 0;
            qf0Uh1EW++;
        };
    }
    {
        qf0Uh1EW = qf0Uh1EW + 1;
        while (qf0Uh1EW <= PvDLW4) {
            T9pnlH (qf0Uh1EW, FimxBjL);
            OP3eidH (qf0Uh1EW, FimxBjL);
            if (FimxBjL[0] == qf0Uh1EW && FimxBjL[1] == 0)
                printf (",%d", qf0Uh1EW);
            qf0Uh1EW++;
            FimxBjL[0] = 0;
            FimxBjL[1] = 0;
        };
    }
    if (bQbZTvu == 0)
        printf ("no");
    printf ("\n");
}

