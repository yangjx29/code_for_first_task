int main () {
    int s;
    int n;
    int i;
    int s7aTKGNFEep;
    int D0TXzfDyB2;
    int GBD193PvRS8g [(647 - 546)] [101];
    s = (483 - 483);
    char pan [101] [101];
    cin >> n;
    {
        i = 67 - 67;
        while (n > i) {
            {
                s7aTKGNFEep = 960 - 960;
                while (n > s7aTKGNFEep) {
                    cin >> pan[i][s7aTKGNFEep];
                    s7aTKGNFEep++;
                };
            }
            i = i + 1;
        };
    }
    cin >> D0TXzfDyB2;
    {
        i = 405 - 405;
        while (n > i) {
            {
                s7aTKGNFEep = 85 - 85;
                while (n > s7aTKGNFEep) {
                    if (!('@' != pan[i][s7aTKGNFEep]))
                        GBD193PvRS8g[i][s7aTKGNFEep] = (970 - 969);
                    else
                        GBD193PvRS8g[i][s7aTKGNFEep] = (455 - 455);
                    s7aTKGNFEep++;
                };
            }
            i = i + 1;
        };
    }
    while ((223 - 222) < D0TXzfDyB2) {
        D0TXzfDyB2--;
        {
            i = 115 - 115;
            while (i < n) {
                {
                    s7aTKGNFEep = 549 - 549;
                    while (s7aTKGNFEep < n) {
                        if (pan[i][s7aTKGNFEep] == '@' && !((56 - 55) != GBD193PvRS8g[i][s7aTKGNFEep])) {
                            if ((369 - 369) <= (i - (379 - 378)) && !('.' != pan[i - (434 - 433)][s7aTKGNFEep]))
                                pan[i - 1][s7aTKGNFEep] = '@';
                            if (n > (i + 1) && !('.' != pan[i + 1][s7aTKGNFEep]))
                                pan[i + 1][s7aTKGNFEep] = '@';
                            if ((526 - 526) <= (s7aTKGNFEep - 1) && pan[i][s7aTKGNFEep - 1] == '.')
                                pan[i][s7aTKGNFEep - 1] = '@';
                            if ((s7aTKGNFEep + 1) < n && pan[i][s7aTKGNFEep + 1] == '.')
                                pan[i][s7aTKGNFEep + 1] = '@';
                        }
                        s7aTKGNFEep++;
                    };
                }
                i++;
            };
        }
        {
            i = 917 - 917;
            while (i < n) {
                for (s7aTKGNFEep = 0; s7aTKGNFEep < n; s7aTKGNFEep++) {
                    if (pan[i][s7aTKGNFEep] == '@')
                        GBD193PvRS8g[i][s7aTKGNFEep] = 1;
                }
                i++;
            };
        };
    }
    {
        i = 0;
        while (i < n) {
            {
                s7aTKGNFEep = 0;
                while (s7aTKGNFEep < n) {
                    if (pan[i][s7aTKGNFEep] == '@')
                        s++;
                    s7aTKGNFEep++;
                };
            }
            i++;
        };
    }
    cout << s;
    return 0;
}

