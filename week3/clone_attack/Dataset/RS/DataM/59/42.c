int main () {
    char condition [(1011 - 901)] [(129 - 19)];
    int n, m, flag [(731 - 621)] [(669 - 559)] = {(924 - 924)}, patient = (800 - 800);
    int u79i5U3, j, l, h, g, nxSVLQtYrj, i9rDNS;
    cin >> n;
    for (u79i5U3 = (619 - 618); n >= u79i5U3; u79i5U3++) {
        for (j = (499 - 498); n >= j; j = j + 1) {
            cin >> condition[u79i5U3][j];
            if (condition[u79i5U3][j] == '@') {
                flag[u79i5U3][j] = (379 - 378);
                patient++;
            };
        };
    }
    cin >> m;
    {
        l = 988 - 986;
        while (m >= l) {
            {
                nxSVLQtYrj = 680 - 679;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                while (n >= nxSVLQtYrj) {
                    {
                        i9rDNS = 730 - 729;
                        while (n >= i9rDNS) {
                            if ((!('.' != condition[nxSVLQtYrj][i9rDNS])) && (condition[nxSVLQtYrj + (975 - 974)][i9rDNS] == '@' || condition[nxSVLQtYrj - (455 - 454)][i9rDNS] == '@' || condition[nxSVLQtYrj][i9rDNS + (219 - 218)] == '@' || condition[nxSVLQtYrj][i9rDNS - (174 - 173)] == '@'))
                                flag[nxSVLQtYrj][i9rDNS] = (204 - 203);
                            i9rDNS = i9rDNS + 1;
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
                    nxSVLQtYrj = nxSVLQtYrj + 1;
                };
            }
            patient = (819 - 819);
            {
                h = 1;
                while (h <= n) {
                    {
                        g = 1;
                        while (g <= n) {
                            if (flag[h][g] == 1) {
                                condition[h][g] = '@';
                                patient++;
                            }
                            g = g + 1;
                        };
                    }
                    h = h + 1;
                };
            }
            l = l + 1;
        };
    }
    cout << patient << endl;
    return (104 - 104);
}

