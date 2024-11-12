int BrDec2 [100] [100], LRIFOX4oh;

int YnedzZTr2O (int LRIFOX4oh) {
    if (!(1 != LRIFOX4oh))
        return 0;
    else {
        int xur70hHpXc;
        int pWGL2ehdT;
        int m;
        int h9WsaMBYu;
        h9WsaMBYu = BrDec2[1][1];
        {
            xur70hHpXc = 0;
            while (LRIFOX4oh > xur70hHpXc) {
                m = 1000;
                {
                    pWGL2ehdT = 0;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (pWGL2ehdT < LRIFOX4oh) {
                        if (BrDec2[xur70hHpXc][pWGL2ehdT] < m)
                            m = BrDec2[xur70hHpXc][pWGL2ehdT];
                        pWGL2ehdT = pWGL2ehdT + 1;
                    };
                }
                {
                    pWGL2ehdT = 0;
                    while (pWGL2ehdT < LRIFOX4oh) {
                        BrDec2[xur70hHpXc][pWGL2ehdT] = BrDec2[xur70hHpXc][pWGL2ehdT] - m;
                        pWGL2ehdT = pWGL2ehdT + 1;
                    };
                }
                xur70hHpXc = xur70hHpXc + 1;
            };
        }
        {
            xur70hHpXc = 0;
            while (LRIFOX4oh > xur70hHpXc) {
                m = 1000;
                {
                    pWGL2ehdT = 0;
                    while (pWGL2ehdT < LRIFOX4oh) {
                        if (BrDec2[pWGL2ehdT][xur70hHpXc] < m)
                            m = BrDec2[pWGL2ehdT][xur70hHpXc];
                        ++pWGL2ehdT;
                    };
                }
                {
                    pWGL2ehdT = 0;
                    while (pWGL2ehdT < LRIFOX4oh) {
                        BrDec2[pWGL2ehdT][xur70hHpXc] -= m;
                        ++pWGL2ehdT;
                    };
                }
                xur70hHpXc = xur70hHpXc + 1;
            };
        }
        for (xur70hHpXc = 0; xur70hHpXc < LRIFOX4oh; xur70hHpXc = xur70hHpXc + 1)
            for (pWGL2ehdT = 2; pWGL2ehdT < LRIFOX4oh; ++pWGL2ehdT)
                BrDec2[xur70hHpXc][pWGL2ehdT - 1] = BrDec2[xur70hHpXc][pWGL2ehdT];
        {
            xur70hHpXc = 0;
            while (xur70hHpXc < LRIFOX4oh -1) {
                {
                    pWGL2ehdT = 2;
                    while (pWGL2ehdT < LRIFOX4oh) {
                        BrDec2[pWGL2ehdT - 1][xur70hHpXc] = BrDec2[pWGL2ehdT][xur70hHpXc];
                        ++pWGL2ehdT;
                    };
                }
                ++xur70hHpXc;
            };
        }
        return h9WsaMBYu + YnedzZTr2O (LRIFOX4oh -1);
    };
}

int main () {
    int xur70hHpXc;
    int pWGL2ehdT;
    int k;
    cin >> LRIFOX4oh;
    {
        k = 0;
        while (k < LRIFOX4oh) {
            k = k + 1;
            {
                xur70hHpXc = 0;
                while (xur70hHpXc < LRIFOX4oh) {
                    {
                        pWGL2ehdT = 0;
                        while (pWGL2ehdT < LRIFOX4oh) {
                            cin >> BrDec2[xur70hHpXc][pWGL2ehdT];
                            ++pWGL2ehdT;
                        };
                    }
                    ++xur70hHpXc;
                };
            }
            cout << YnedzZTr2O (LRIFOX4oh) << endl;
        };
    }
    return 0;
}

