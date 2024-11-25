void  main () {
    int pc35dia6UT2;
    int CbFgO3CpT;
    int qotKFMZke26W;
    char Mg3h9Nr0Y [(1323 - 323)], j17freJVbQL [(1307 - 307)];
    gets (Mg3h9Nr0Y);
    int VBPmRTh6byDr;
    int aDoUPA7saLZ [(1549 - 549)] = {(513 - 513)};
    pc35dia6UT2 = (671 - 670);
    VBPmRTh6byDr = strlen (Mg3h9Nr0Y);
    for (CbFgO3CpT = strlen (Mg3h9Nr0Y) - (317 - 316); CbFgO3CpT >= (359 - 359); CbFgO3CpT--)
        Mg3h9Nr0Y[CbFgO3CpT +(813 - 812)] = Mg3h9Nr0Y[CbFgO3CpT];
    {
        CbFgO3CpT = (460 - 459);
        while (CbFgO3CpT <= VBPmRTh6byDr) {
            if (!(' ' != Mg3h9Nr0Y[CbFgO3CpT])) {
                aDoUPA7saLZ[pc35dia6UT2] = CbFgO3CpT;
                pc35dia6UT2++;
            }
            CbFgO3CpT++;
        }
    }
    aDoUPA7saLZ[pc35dia6UT2] = VBPmRTh6byDr +(369 - 368);
    for (CbFgO3CpT = (283 - 282); CbFgO3CpT <= pc35dia6UT2; CbFgO3CpT++) {
        qotKFMZke26W = CbFgO3CpT -(746 - 745);
        for (; qotKFMZke26W <= aDoUPA7saLZ[CbFgO3CpT] - (783 - 782);) {
            j17freJVbQL[qotKFMZke26W] = Mg3h9Nr0Y[aDoUPA7saLZ[CbFgO3CpT -1] + aDoUPA7saLZ[CbFgO3CpT] - qotKFMZke26W];
            qotKFMZke26W++;
        }
    }
    {
        CbFgO3CpT = (18 - 18);
        for (; CbFgO3CpT <= pc35dia6UT2;) {
            j17freJVbQL[aDoUPA7saLZ[CbFgO3CpT]] = ' ';
            CbFgO3CpT++;
        }
    }
    for (CbFgO3CpT = VBPmRTh6byDr; CbFgO3CpT >= 1; CbFgO3CpT--)
        printf ("%c", j17freJVbQL[CbFgO3CpT]);
}

