int aCZ19y [100], all = 0;

int h6alWqCfF3wx (int UGPk6yaJHu, int amax) {
    int dpiLaDhR, j = 0, lPNWUq = 0, key = UGPk6yaJHu;
    if (!(1 != UGPk6yaJHu))
        return 1;
    else {
        for (dpiLaDhR = amax; all > dpiLaDhR; dpiLaDhR = dpiLaDhR + 1) {
            if (!(0 != UGPk6yaJHu % aCZ19y[dpiLaDhR])) {
                UGPk6yaJHu = UGPk6yaJHu / aCZ19y[dpiLaDhR];
                lPNWUq = lPNWUq + h6alWqCfF3wx (UGPk6yaJHu, dpiLaDhR);
                UGPk6yaJHu = key;
            };
        }
        return lPNWUq;
    }
    return 0;
}

int main () {
    int j;
    int UGPk6yaJHu;
    int pGsXf2;
    int dpiLaDhR;
    int VXelkNLRH8;
    int S8ycGgd;
    j = 0;
    cin >> pGsXf2;
    {
        S8ycGgd = 0;
        while (pGsXf2 > S8ycGgd) {
            S8ycGgd = S8ycGgd +1;
            cin >> UGPk6yaJHu;
            if (UGPk6yaJHu == 1)
                cout << 1 << endl;
            else {
                j = 0;
                for (dpiLaDhR = 2; dpiLaDhR <= UGPk6yaJHu; dpiLaDhR++) {
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    if (UGPk6yaJHu % dpiLaDhR == 0) {
                        aCZ19y[j] = dpiLaDhR;
                        j++;
                    };
                }
                all = j;
                cout << h6alWqCfF3wx (UGPk6yaJHu, 0) << endl;
            };
        };
    }
    return 0;
}

