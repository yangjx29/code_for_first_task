int main () {
    int LWDfEaP, m, a [(344 - 335)] [(368 - 359)] = {(83 - 83)}, RemAUBW [9] [9] = {(381 - 381)};
    cin >> LWDfEaP >> m;
    a[(379 - 375)][4] = LWDfEaP;
    while (m) {
        m = m - 1;
        for (int i = 1;
        i < 8; i = i + 1) {
            for (int cibBPaR = 1;
            cibBPaR < 8; cibBPaR = cibBPaR + 1) {
                if (!(0 == a[i][cibBPaR])) {
                    for (int p = i - 1;
                    i + 1 >= p; p = p + 1) {
                        int co1ShCnR = cibBPaR - 1;
                        while (co1ShCnR <= cibBPaR + 1) {
                            RemAUBW[p][co1ShCnR] = RemAUBW[p][co1ShCnR] + a[i][cibBPaR];
                            co1ShCnR = co1ShCnR + 1;
                        };
                    }
                    RemAUBW[i][cibBPaR] = RemAUBW[i][cibBPaR] + a[i][cibBPaR];
                };
            };
        }
        {
            int i = 0;
            while (9 > i) {
                {
                    int cibBPaR = 0;
                    while (cibBPaR < 9) {
                        a[i][cibBPaR] = RemAUBW[i][cibBPaR];
                        RemAUBW[i][cibBPaR] = 0;
                        cibBPaR = cibBPaR + 1;
                    };
                }
                i = i + 1;
            };
        };
    }
    for (int i = 0;
    i < 9; i = i + 1) {
        {
            int cibBPaR = 0;
            while (cibBPaR < 9) {
                if (cibBPaR == 8)
                    cout << a[i][cibBPaR];
                else
                    cout << a[i][cibBPaR] << " ";
                cibBPaR = cibBPaR + 1;
            };
        }
        cout << endl;
    }
    return 0;
}

