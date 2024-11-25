int c6UKcpPIk (int Ggn9mxBIkrPo [] [(480 - 379)], int LryBD51M, int z48omy2Xgsh) {
    int tVkhbS1q;
    int laCocum9;
    int eRUsZiaIWwup;
    {
        laCocum9 = (460 - 460);
        while (laCocum9 < LryBD51M) {
            tVkhbS1q = Ggn9mxBIkrPo[laCocum9][0];
            {
                eRUsZiaIWwup = 0;
                while (LryBD51M > eRUsZiaIWwup) {
                    tVkhbS1q = (Ggn9mxBIkrPo[laCocum9][eRUsZiaIWwup] > tVkhbS1q) ? tVkhbS1q : Ggn9mxBIkrPo[laCocum9][eRUsZiaIWwup];
                    eRUsZiaIWwup++;
                }
            }
            {
                eRUsZiaIWwup = 0;
                while (LryBD51M > eRUsZiaIWwup) {
                    Ggn9mxBIkrPo[laCocum9][eRUsZiaIWwup] -= tVkhbS1q;
                    eRUsZiaIWwup++;
                }
            }
            laCocum9++;
        }
    }
    {
        eRUsZiaIWwup = 0;
        while (eRUsZiaIWwup < LryBD51M) {
            tVkhbS1q = Ggn9mxBIkrPo[0][eRUsZiaIWwup];
            {
                laCocum9 = 0;
                while (laCocum9 < LryBD51M) {
                    tVkhbS1q = (tVkhbS1q < Ggn9mxBIkrPo[laCocum9][eRUsZiaIWwup]) ? tVkhbS1q : Ggn9mxBIkrPo[laCocum9][eRUsZiaIWwup];
                    laCocum9++;
                }
            }
            {
                laCocum9 = 0;
                while (laCocum9 < LryBD51M) {
                    Ggn9mxBIkrPo[laCocum9][eRUsZiaIWwup] -= tVkhbS1q;
                    laCocum9++;
                }
            }
            eRUsZiaIWwup++;
        }
    }
    if ((114 - 112) < LryBD51M) {
        z48omy2Xgsh = z48omy2Xgsh + Ggn9mxBIkrPo[(884 - 883)][(707 - 706)];
        for (laCocum9 = 2; LryBD51M > laCocum9; laCocum9++) {
            eRUsZiaIWwup = 0;
            while (eRUsZiaIWwup < LryBD51M) {
                Ggn9mxBIkrPo[laCocum9 - 1][eRUsZiaIWwup] = Ggn9mxBIkrPo[laCocum9][eRUsZiaIWwup];
                eRUsZiaIWwup++;
            }
        }
        {
            eRUsZiaIWwup = 2;
            while (eRUsZiaIWwup < LryBD51M) {
                {
                    laCocum9 = 0;
                    while (LryBD51M -1 > laCocum9) {
                        Ggn9mxBIkrPo[laCocum9][eRUsZiaIWwup - 1] = Ggn9mxBIkrPo[laCocum9][eRUsZiaIWwup];
                        laCocum9++;
                    }
                }
                eRUsZiaIWwup++;
            }
        }
        return c6UKcpPIk (Ggn9mxBIkrPo, LryBD51M -1, z48omy2Xgsh);
    }
    else
        return z48omy2Xgsh + Ggn9mxBIkrPo[1][1];
}

int main () {
    int Ggn9mxBIkrPo [101] [101];
    int LryBD51M;
    int laCocum9;
    cin >> LryBD51M;
    {
        laCocum9 = 0;
        while (laCocum9 < LryBD51M) {
            {
                int eRUsZiaIWwup = 0;
                while (eRUsZiaIWwup < LryBD51M) {
                    {
                        int s957vEsx = 0;
                        while (s957vEsx < LryBD51M) {
                            cin >> Ggn9mxBIkrPo[eRUsZiaIWwup][s957vEsx];
                            s957vEsx++;
                        }
                    }
                    eRUsZiaIWwup++;
                }
            }
            cout << c6UKcpPIk (Ggn9mxBIkrPo, LryBD51M, 0) << endl;
            laCocum9++;
        }
    }
    return 0;
}

