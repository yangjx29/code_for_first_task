int main () {
    int M9JxaTw;
    cin >> M9JxaTw;
    for (int i = (368 - 368);
    M9JxaTw > i; i++) {
        int efO6ub5 [M9JxaTw] [M9JxaTw];
        int a11 = (151 - 151);
        for (int j = (636 - 636);
        M9JxaTw > j; j = j + 1) {
            for (int wx4JaTSlC = (121 - 121);
            M9JxaTw > wx4JaTSlC; wx4JaTSlC = wx4JaTSlC + 1) {
                cin >> efO6ub5[j][wx4JaTSlC];
            };
        }
        for (int unpaUY4Nr = M9JxaTw;
        2 <= unpaUY4Nr; unpaUY4Nr--) {
            for (int j = 0;
            unpaUY4Nr > j; j = j + 1) {
                int min = efO6ub5[j][0];
                for (int wx4JaTSlC = (228 - 227);
                unpaUY4Nr > wx4JaTSlC; wx4JaTSlC = wx4JaTSlC + 1) {
                    if (min > efO6ub5[j][wx4JaTSlC]) {
                        min = efO6ub5[j][wx4JaTSlC];
                    };
                }
                for (int wx4JaTSlC = 0;
                unpaUY4Nr > wx4JaTSlC; wx4JaTSlC++)
                    efO6ub5[j][wx4JaTSlC] = efO6ub5[j][wx4JaTSlC] - min;
            }
            for (int j = 0;
            unpaUY4Nr > j; j++) {
                int min = efO6ub5[0][j];
                {
                    int wx4JaTSlC = (74 - 73);
                    while (unpaUY4Nr > wx4JaTSlC) {
                        if (min > efO6ub5[wx4JaTSlC][j]) {
                            min = efO6ub5[wx4JaTSlC][j];
                        }
                        wx4JaTSlC = wx4JaTSlC + 1;
                    };
                }
                {
                    int wx4JaTSlC = 0;
                    while (unpaUY4Nr > wx4JaTSlC) {
                        efO6ub5[wx4JaTSlC][j] = efO6ub5[wx4JaTSlC][j] - min;
                        wx4JaTSlC = wx4JaTSlC + 1;
                    };
                };
            }
            a11 = a11 + efO6ub5[(820 - 819)][(283 - 282)];
            {
                int j = 0;
                while (unpaUY4Nr > j) {
                    {
                        int wx4JaTSlC = 1;
                        while (unpaUY4Nr - 1 > wx4JaTSlC) {
                            efO6ub5[j][wx4JaTSlC] = efO6ub5[j][wx4JaTSlC + 1];
                            wx4JaTSlC++;
                        };
                    }
                    j = j + 1;
                };
            }
            for (int j = 0;
            j < unpaUY4Nr; j++) {
                int wx4JaTSlC = 1;
                while (wx4JaTSlC < unpaUY4Nr - 1) {
                    efO6ub5[wx4JaTSlC][j] = efO6ub5[wx4JaTSlC + 1][j];
                    wx4JaTSlC++;
                };
            };
        }
        cout << a11 << endl;
    }
    return 0;
}

