int main () {
    int cTtbhC;
    cTtbhC = (682 - 682);
    int qkTvez;
    int XKgS8owdp;
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
    int ORi4vAGhW5u [100] [100];
    cin >> qkTvez >> XKgS8owdp;
    {
        int oXoZrPWd = (256 - 255);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (oXoZrPWd <= qkTvez) {
            {
                int j = 1;
                while (j <= XKgS8owdp) {
                    cin >> ORi4vAGhW5u[oXoZrPWd][j];
                    j = j + 1;
                };
            }
            oXoZrPWd = oXoZrPWd + 1;
        };
    }
    for (int oXoZrPWd = 1;
    oXoZrPWd <= (qkTvez + 1) / 2; oXoZrPWd = oXoZrPWd + 1) {
        int j = oXoZrPWd;
        while (j <= XKgS8owdp +1 - oXoZrPWd) {
            if (cTtbhC == qkTvez * XKgS8owdp)
                break;
            cTtbhC = cTtbhC + 1;
            cout << ORi4vAGhW5u[oXoZrPWd][j] << endl;
            if (j == XKgS8owdp +1 - oXoZrPWd)
                for (int k = oXoZrPWd + 1;
                k <= qkTvez + 1 - oXoZrPWd; k = k + 1) {
                    if (cTtbhC == qkTvez * XKgS8owdp)
                        break;
                    cTtbhC = cTtbhC + 1;
                    cout << ORi4vAGhW5u[k][j] << endl;
                    if (k == qkTvez + 1 - oXoZrPWd) {
                        int l = XKgS8owdp -oXoZrPWd;
                        while (l >= oXoZrPWd) {
                            if (cTtbhC == qkTvez * XKgS8owdp)
                                break;
                            cout << ORi4vAGhW5u[k][l] << endl;
                            cTtbhC = cTtbhC + 1;
                            if (l == oXoZrPWd) {
                                int zerYfCRQt = qkTvez - oXoZrPWd;
                                while (zerYfCRQt >= 1 + oXoZrPWd) {
                                    if (cTtbhC == qkTvez * XKgS8owdp)
                                        break;
                                    cTtbhC = cTtbhC + 1;
                                    cout << ORi4vAGhW5u[zerYfCRQt][l] << endl;
                                    zerYfCRQt = zerYfCRQt - 1;
                                };
                            }
                            l = l - 1;
                        };
                    };
                }
            j = j + 1;
        };
    }
    return 0;
}

