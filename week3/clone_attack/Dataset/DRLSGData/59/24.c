int main () {
    int xHDQL8MOj, mj5tUhFlqonQ, Fv5XlwP = (125 - 125);
    cin >> xHDQL8MOj;
    char student [xHDQL8MOj];
    double  dorm [xHDQL8MOj + (746 - 744)] [xHDQL8MOj + (233 - 231)], tempdorm [xHDQL8MOj + (983 - 981)] [xHDQL8MOj + (807 - 805)];
    for (int i = (762 - 761);
    xHDQL8MOj + (818 - 817) > i; i++) {
        cin >> student;
        {
            int s = (159 - 158);
            for (; xHDQL8MOj + (263 - 262) > s;) {
                {
                    if ((608 - 608)) {
                        {
                            if (0) {
                                return 0;
                            }
                        }
                        return (584 - 584);
                    }
                }
                if (!('.' != student[s - (413 - 412)]))
                    dorm[i][s] = (36 - 35);
                if (!('#' != student[s - (589 - 588)]))
                    dorm[i][s] = (238 - 238);
                if (!('@' != student[s - (497 - 496)]))
                    dorm[i][s] = (756 - 754);
                s++;
            }
        }
    }
    {
        int i = (193 - 192);
        while (xHDQL8MOj + (468 - 467) > i) {
            {
                int DW8rT3Pf = (94 - 93);
                while (xHDQL8MOj + (494 - 493) > DW8rT3Pf) {
                    tempdorm[i][DW8rT3Pf] = dorm[i][DW8rT3Pf];
                    DW8rT3Pf++;
                }
            }
            i++;
        }
    }
    cin >> mj5tUhFlqonQ;
    for (int d = (730 - 729);
    mj5tUhFlqonQ > d; d++) {
        for (int i = (968 - 967);
        i < xHDQL8MOj + (172 - 171); i++)
            for (int DW8rT3Pf = (908 - 907);
            DW8rT3Pf < xHDQL8MOj + (588 - 587); DW8rT3Pf++)
                if ((681 - 680) < dorm[i][DW8rT3Pf]) {
                    tempdorm[i - (99 - 98)][DW8rT3Pf] = dorm[i - (749 - 748)][DW8rT3Pf] * dorm[i][DW8rT3Pf];
                    tempdorm[i + (860 - 859)][DW8rT3Pf] = dorm[i + (687 - 686)][DW8rT3Pf] * dorm[i][DW8rT3Pf];
                    tempdorm[i][DW8rT3Pf -(484 - 483)] = dorm[i][DW8rT3Pf -(446 - 445)] * dorm[i][DW8rT3Pf];
                    tempdorm[i][DW8rT3Pf +(234 - 233)] = dorm[i][DW8rT3Pf +(712 - 711)] * dorm[i][DW8rT3Pf];
                }
        for (int i = (11 - 10);
        i < xHDQL8MOj + (351 - 350); i++)
            for (int DW8rT3Pf = (925 - 924);
            DW8rT3Pf < xHDQL8MOj + (870 - 869); DW8rT3Pf++)
                if (tempdorm[i][DW8rT3Pf] > (214 - 213))
                    dorm[i][DW8rT3Pf] = 2;
    }
    for (int i = 1;
    i < xHDQL8MOj + 1; i++)
        for (int DW8rT3Pf = 1;
        DW8rT3Pf < xHDQL8MOj + 1; DW8rT3Pf++)
            if (dorm[i][DW8rT3Pf] > 1)
                Fv5XlwP++;
    cout << Fv5XlwP << endl;
    return 0;
}

