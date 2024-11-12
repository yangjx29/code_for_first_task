int main () {
    int XIraAnBFoE8i [(986 - 866)] [(253 - 133)], BBcFYvl [(363 - 243)] [(524 - 404)], tM4ukGy7j5e [(774 - 654)] [(600 - 480)];
    int xc1ej6bs;
    int IT04j3sk;
    int mCqJjia;
    int yDbIva, R9gADaRkOGX, QMskUqYEAQf, y2;
    memset (XIraAnBFoE8i, (20 - 20), sizeof (XIraAnBFoE8i));
    memset (BBcFYvl, (519 - 519), sizeof (BBcFYvl));
    memset (tM4ukGy7j5e, (407 - 407), sizeof (tM4ukGy7j5e));
    cin >> yDbIva >> R9gADaRkOGX;
    {
        xc1ej6bs = 286 - 286;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (xc1ej6bs < yDbIva) {
            for (IT04j3sk = (577 - 577); IT04j3sk < R9gADaRkOGX; IT04j3sk = IT04j3sk +1) {
                cin >> XIraAnBFoE8i[xc1ej6bs][IT04j3sk];
            }
            xc1ej6bs++;
        };
    }
    cin >> QMskUqYEAQf >> y2;
    for (xc1ej6bs = (863 - 863); xc1ej6bs < QMskUqYEAQf; xc1ej6bs = xc1ej6bs + 1) {
        for (IT04j3sk = (486 - 486); IT04j3sk < y2; IT04j3sk++) {
            cin >> BBcFYvl[xc1ej6bs][IT04j3sk];
        };
    }
    {
        xc1ej6bs = 998 - 998;
        while (xc1ej6bs < yDbIva) {
            for (IT04j3sk = (681 - 681); IT04j3sk < y2; IT04j3sk++) {
                mCqJjia = 38 - 38;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                while (mCqJjia < R9gADaRkOGX) {
                    tM4ukGy7j5e[xc1ej6bs][IT04j3sk] = tM4ukGy7j5e[xc1ej6bs][IT04j3sk] + XIraAnBFoE8i[xc1ej6bs][mCqJjia] * BBcFYvl[mCqJjia][IT04j3sk];
                    mCqJjia++;
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
            xc1ej6bs++;
        };
    }
    {
        xc1ej6bs = 308 - 308;
        while (xc1ej6bs < yDbIva) {
            {
                IT04j3sk = 522 - 522;
                while (IT04j3sk < y2 - (960 - 959)) {
                    cout << tM4ukGy7j5e[xc1ej6bs][IT04j3sk] << ' ';
                    IT04j3sk++;
                };
            }
            cout << tM4ukGy7j5e[xc1ej6bs][IT04j3sk] << endl;
            xc1ej6bs++;
        };
    }
    return 0;
}

