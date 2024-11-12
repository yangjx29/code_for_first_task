int HwZHbVXtTGn [1000] [1000] = {0};
int IQg4x6n = 0;

void  aKaXHcu3 (int t8Kf0w9) {
    int dUNtKvb;
    int lQ0uXcB;
    int lcU7wIHu;
    int hvfrqUyap;
    hvfrqUyap = 10000;
    {
        dUNtKvb = 0;
        for (; dUNtKvb < t8Kf0w9;) {
            {
                lQ0uXcB = 0;
                while (lQ0uXcB < t8Kf0w9) {
                    if (HwZHbVXtTGn[dUNtKvb][lQ0uXcB] < hvfrqUyap)
                        hvfrqUyap = HwZHbVXtTGn[dUNtKvb][lQ0uXcB];
                    lQ0uXcB++;
                }
            }
            {
                lcU7wIHu = 0;
                while (lcU7wIHu < t8Kf0w9) {
                    HwZHbVXtTGn[dUNtKvb][lcU7wIHu] = HwZHbVXtTGn[dUNtKvb][lcU7wIHu] - hvfrqUyap;
                    lcU7wIHu++;
                }
            }
            hvfrqUyap = 10000;
            dUNtKvb++;
        }
    }
    hvfrqUyap = 10000;
    {
        dUNtKvb = 0;
        while (t8Kf0w9 > dUNtKvb) {
            for (lQ0uXcB = 0; t8Kf0w9 > lQ0uXcB; lQ0uXcB++) {
                if (hvfrqUyap > HwZHbVXtTGn[lQ0uXcB][dUNtKvb])
                    hvfrqUyap = HwZHbVXtTGn[lQ0uXcB][dUNtKvb];
            }
            {
                lcU7wIHu = 0;
                while (t8Kf0w9 > lcU7wIHu) {
                    HwZHbVXtTGn[lcU7wIHu][dUNtKvb] = HwZHbVXtTGn[lcU7wIHu][dUNtKvb] - hvfrqUyap;
                    lcU7wIHu++;
                }
            }
            hvfrqUyap = 10000;
            dUNtKvb++;
        }
    }
    IQg4x6n = IQg4x6n +HwZHbVXtTGn[1][1];
}

int main () {
    int t8Kf0w9, dUNtKvb, lQ0uXcB, lcU7wIHu, tIjQDV;
    cin >> t8Kf0w9;
    {
        dUNtKvb = 1;
        while (t8Kf0w9 >= dUNtKvb) {
            {
                lQ0uXcB = 0;
                while (t8Kf0w9 > lQ0uXcB) {
                    {
                        lcU7wIHu = 0;
                        while (t8Kf0w9 > lcU7wIHu) {
                            cin >> HwZHbVXtTGn[lQ0uXcB][lcU7wIHu];
                            lcU7wIHu++;
                        }
                    }
                    lQ0uXcB++;
                }
            }
            {
                tIjQDV = 1;
                while (tIjQDV < t8Kf0w9) {
                    aKaXHcu3 (t8Kf0w9 - tIjQDV + 1);
                    {
                        lQ0uXcB = 1;
                        while (t8Kf0w9 - tIjQDV > lQ0uXcB) {
                            {
                                lcU7wIHu = 1;
                                for (; lcU7wIHu < t8Kf0w9 - tIjQDV;) {
                                    HwZHbVXtTGn[lQ0uXcB][lcU7wIHu] = HwZHbVXtTGn[lQ0uXcB + 1][lcU7wIHu + 1];
                                    lcU7wIHu++;
                                }
                            }
                            lQ0uXcB++;
                        }
                    }
                    {
                        lcU7wIHu = 1;
                        for (; lcU7wIHu < (t8Kf0w9 - tIjQDV);) {
                            HwZHbVXtTGn[0][lcU7wIHu] = HwZHbVXtTGn[0][lcU7wIHu + 1];
                            lcU7wIHu++;
                        }
                    }
                    {
                        lcU7wIHu = 1;
                        while (lcU7wIHu < (t8Kf0w9 - tIjQDV)) {
                            HwZHbVXtTGn[lcU7wIHu][0] = HwZHbVXtTGn[lcU7wIHu + 1][0];
                            lcU7wIHu++;
                        }
                    }
                    tIjQDV++;
                }
            }
            cout << IQg4x6n << endl;
            IQg4x6n = 0;
            dUNtKvb++;
        }
    }
    return 0;
}

