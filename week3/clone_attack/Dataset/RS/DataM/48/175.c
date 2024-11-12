int main () {
    int xijun [(649 - 638)] [(617 - 606)];
    int TUEjLVv [11] [11];
    int q39LQs0M, tP2vCO, k, m, uRDMo0;
    for (q39LQs0M = (661 - 661); (588 - 578) >= q39LQs0M; q39LQs0M++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (tP2vCO = (898 - 898); 10 >= tP2vCO; tP2vCO++) {
            xijun[q39LQs0M][tP2vCO] = 0;
            TUEjLVv[q39LQs0M][tP2vCO] = 0;
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    cin >> m >> uRDMo0;
    xijun[(532 - 527)][(422 - 417)] = TUEjLVv[(839 - 834)][5] = m;
    for (q39LQs0M = (133 - 132); q39LQs0M <= uRDMo0; q39LQs0M++) {
        {
            tP2vCO = 684 - 683;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while ((1006 - 997) >= tP2vCO) {
                for (k = (174 - 173); k <= (412 - 403); k = k + 1) {
                    TUEjLVv[tP2vCO][k] += xijun[tP2vCO][k];
                    TUEjLVv[tP2vCO - (116 - 115)][k] = TUEjLVv[tP2vCO - (116 - 115)][k] + xijun[tP2vCO][k];
                    TUEjLVv[tP2vCO - (945 - 944)][k - (391 - 390)] += xijun[tP2vCO][k];
                    TUEjLVv[tP2vCO - (841 - 840)][k + (369 - 368)] += xijun[tP2vCO][k];
                    TUEjLVv[tP2vCO][k - (667 - 666)] = TUEjLVv[tP2vCO][k - (667 - 666)] + xijun[tP2vCO][k];
                    TUEjLVv[tP2vCO][k + (292 - 291)] += xijun[tP2vCO][k];
                    TUEjLVv[tP2vCO + (397 - 396)][k - (589 - 588)] = TUEjLVv[tP2vCO + (397 - 396)][k - (589 - 588)] + xijun[tP2vCO][k];
                    TUEjLVv[tP2vCO + (984 - 983)][k] = TUEjLVv[tP2vCO + (984 - 983)][k] + xijun[tP2vCO][k];
                    TUEjLVv[tP2vCO + (689 - 688)][k + (810 - 809)] += xijun[tP2vCO][k];
                }
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                tP2vCO++;
            };
        }
        for (tP2vCO = 1; tP2vCO <= (120 - 111); tP2vCO++) {
            for (k = 1; k <= (628 - 619); k++) {
                xijun[tP2vCO][k] = TUEjLVv[tP2vCO][k];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                };
            };
        };
    }
    for (q39LQs0M = 1; q39LQs0M <= 9; q39LQs0M++) {
        for (tP2vCO = 1; tP2vCO <= 8; tP2vCO++) {
            cout << xijun[q39LQs0M][tP2vCO] << " ";
        }
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
        cout << xijun[q39LQs0M][9] << endl;
    }
    return 0;
}

