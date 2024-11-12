int main () {
    int y;
    int mVZOSmDI;
    int k;
    int uOrokHcQU;
    int qoWuTfJ35Va;
    int p;
    int BC3Sw4bnaXI;
    int t;
    int WPSfDH;
    int PQBDWEsalV [(668 - 568)];
    int girl [(349 - 249)];
    y = 0;
    mVZOSmDI = 0;
    char VIs9QkC17 [100];
    char sex [(681 - 679)];
    cin >> VIs9QkC17;
    sex[0] = VIs9QkC17[0];
    {
        WPSfDH = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (1) {
            if (!(VIs9QkC17[0] == VIs9QkC17[WPSfDH])) {
                sex[1] = VIs9QkC17[WPSfDH];
                break;
            }
            WPSfDH++;
        };
    }
    for (WPSfDH = 0;; WPSfDH = WPSfDH +1) {
        for (k = 0; !('\0' == VIs9QkC17[k]); k = k + 1) {
            if (VIs9QkC17[k] != '*') {
                y = 1;
            };
        }
        if (!(0 != y)) {
            break;
        }
        y = 0;
        if (VIs9QkC17[WPSfDH] == '*') {
            continue;
        }
        if (!('\0' != VIs9QkC17[WPSfDH +1])) {
            WPSfDH = -1;
            continue;
        }
        if (VIs9QkC17[WPSfDH] == sex[0]) {
            k = WPSfDH +1;
            while (VIs9QkC17[k] != sex[0]) {
                if (VIs9QkC17[k] == sex[1]) {
                    VIs9QkC17[WPSfDH] = '*';
                    VIs9QkC17[k] = '*';
                    PQBDWEsalV[mVZOSmDI] = WPSfDH;
                    girl[mVZOSmDI] = k;
                    mVZOSmDI = mVZOSmDI + 1;
                    break;
                }
                k = k + 1;
            };
        };
    }
    for (p = 0; p < mVZOSmDI - 1; p = p + 1) {
        for (BC3Sw4bnaXI = 0; BC3Sw4bnaXI < mVZOSmDI - 1 - p; BC3Sw4bnaXI = BC3Sw4bnaXI +1) {
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
            if (girl[BC3Sw4bnaXI] > girl[BC3Sw4bnaXI +1]) {
                qoWuTfJ35Va = girl[BC3Sw4bnaXI +1];
                girl[BC3Sw4bnaXI +1] = girl[BC3Sw4bnaXI];
                girl[BC3Sw4bnaXI] = qoWuTfJ35Va;
                qoWuTfJ35Va = PQBDWEsalV[BC3Sw4bnaXI +1];
                PQBDWEsalV[BC3Sw4bnaXI +1] = PQBDWEsalV[BC3Sw4bnaXI];
                PQBDWEsalV[BC3Sw4bnaXI] = qoWuTfJ35Va;
            };
        };
    }
    {
        uOrokHcQU = 0;
        while (uOrokHcQU <= mVZOSmDI - 1) {
            cout << PQBDWEsalV[uOrokHcQU] << " " << girl[uOrokHcQU] << endl;
            uOrokHcQU = uOrokHcQU + 1;
        };
    }
    return 0;
}

