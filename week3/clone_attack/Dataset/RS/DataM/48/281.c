int main () {
    int n, SJxDpTANvWX1, WM61eckPRJx, XGTNDmz4, QtNfWFTxUd, u1wBOl, DKWE97aOF;
    int pU8RgKv2e [(940 - 929)] [(623 - 612)];
    int zhHFwB [(153 - 142)] [11];
    {
        WM61eckPRJx = 328 - 328;
        while (11 > WM61eckPRJx) {
            {
                QtNfWFTxUd = 837 - 837;
                while (11 > QtNfWFTxUd) {
                    pU8RgKv2e[WM61eckPRJx][QtNfWFTxUd] = (785 - 785);
                    zhHFwB[WM61eckPRJx][QtNfWFTxUd] = (26 - 26);
                    QtNfWFTxUd = QtNfWFTxUd +1;
                };
            }
            WM61eckPRJx = WM61eckPRJx +1;
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
    cin >> SJxDpTANvWX1 >> n;
    zhHFwB[5][5] = SJxDpTANvWX1;
    {
        DKWE97aOF = 123 - 122;
        while (DKWE97aOF <= n) {
            DKWE97aOF++;
            {
                WM61eckPRJx = 0;
                while (WM61eckPRJx < 11) {
                    {
                        QtNfWFTxUd = 0;
                        while (QtNfWFTxUd < 11) {
                            pU8RgKv2e[WM61eckPRJx][QtNfWFTxUd] = 0;
                            QtNfWFTxUd = QtNfWFTxUd +1;
                        };
                    }
                    WM61eckPRJx = WM61eckPRJx +1;
                };
            }
            {
                WM61eckPRJx = 674 - 673;
                while (WM61eckPRJx < (279 - 269)) {
                    {
                        QtNfWFTxUd = 1;
                        while (10 > QtNfWFTxUd) {
                            pU8RgKv2e[WM61eckPRJx][QtNfWFTxUd] = 2 * zhHFwB[WM61eckPRJx][QtNfWFTxUd] + zhHFwB[WM61eckPRJx -1][QtNfWFTxUd -1] + zhHFwB[WM61eckPRJx -1][QtNfWFTxUd] + zhHFwB[WM61eckPRJx -1][QtNfWFTxUd +1] + zhHFwB[WM61eckPRJx][QtNfWFTxUd -1] + zhHFwB[WM61eckPRJx][QtNfWFTxUd +1] + zhHFwB[WM61eckPRJx +1][QtNfWFTxUd -1] + zhHFwB[WM61eckPRJx +1][QtNfWFTxUd] + zhHFwB[WM61eckPRJx +1][QtNfWFTxUd +1];
                            QtNfWFTxUd++;
                        };
                    }
                    WM61eckPRJx = WM61eckPRJx +1;
                };
            }
            {
                WM61eckPRJx = 0;
                while (10 > WM61eckPRJx) {
                    {
                        QtNfWFTxUd = 1;
                        while (10 > QtNfWFTxUd) {
                            zhHFwB[WM61eckPRJx][QtNfWFTxUd] = pU8RgKv2e[WM61eckPRJx][QtNfWFTxUd];
                            QtNfWFTxUd++;
                        };
                    }
                    WM61eckPRJx++;
                };
            };
        };
    }
    {
        WM61eckPRJx = 1;
        while (10 > WM61eckPRJx) {
            {
                QtNfWFTxUd = 1;
                while (QtNfWFTxUd < 9) {
                    cout << pU8RgKv2e[WM61eckPRJx][QtNfWFTxUd];
                    QtNfWFTxUd++;
                    cout << " ";
                };
            }
            cout << pU8RgKv2e[WM61eckPRJx][9] << endl;
            WM61eckPRJx++;
        };
    }
    return 0;
}

