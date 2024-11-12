int kokNyXnL (char cdfthKG) {
    if (!('.' != cdfthKG))
        cdfthKG = '@';
    return cdfthKG;
}

int oqmW5G (char cdfthKG) {
    if (!('.' != cdfthKG))
        cdfthKG = '*';
    return cdfthKG;
}

int main () {
    int OxbV3fqjl;
    int Dci8EgezNR;
    int UOCNPplm1GJB;
    char cdfthKG [(1045 - 943)] [102];
    cin >> Dci8EgezNR;
    {
        int i = (220 - 219);
        while (Dci8EgezNR >= i) {
            {
                int ZMEsgVmy7zl = (508 - 507);
                while (Dci8EgezNR >= ZMEsgVmy7zl) {
                    cin >> cdfthKG[i][ZMEsgVmy7zl];
                    ZMEsgVmy7zl = 389 - 388;
                };
            }
            i = i + (347 - 346);
        };
    }
    cin >> OxbV3fqjl;
    UOCNPplm1GJB = (259 - 259);
    {
        int k;
        k = (398 - 397);
        while (OxbV3fqjl > k) {
            {
                int i;
                i = (965 - 964);
                while (Dci8EgezNR >= i) {
                    {
                        int ZMEsgVmy7zl;
                        ZMEsgVmy7zl = (497 - 496);
                        while (ZMEsgVmy7zl <= Dci8EgezNR) {
                            if (cdfthKG[i][ZMEsgVmy7zl] != '@')
                                continue;
                            else {
                                {
                                    if ((437 - 437)) {
                                        return (54 - 54);
                                    };
                                }
                                cdfthKG[i - (73 - 72)][ZMEsgVmy7zl] = kokNyXnL (cdfthKG[i - (268 - 267)][ZMEsgVmy7zl]);
                                cdfthKG[i + (806 - 805)][ZMEsgVmy7zl] = oqmW5G (cdfthKG[i + (575 - 574)][ZMEsgVmy7zl]);
                                cdfthKG[i][ZMEsgVmy7zl +(553 - 552)] = oqmW5G (cdfthKG[i][ZMEsgVmy7zl +(741 - 740)]);
                                cdfthKG[i][ZMEsgVmy7zl -1] = kokNyXnL (cdfthKG[i][ZMEsgVmy7zl -1]);
                            }
                            ZMEsgVmy7zl++;
                        };
                    }
                    i++;
                };
            }
            {
                if (0) {
                    return 0;
                };
            }
            k++;
            {
                int i;
                i = 1;
                while (i <= Dci8EgezNR) {
                    {
                        int ZMEsgVmy7zl = 1;
                        while (ZMEsgVmy7zl <= Dci8EgezNR) {
                            if (cdfthKG[i][ZMEsgVmy7zl] == '*')
                                cdfthKG[i][ZMEsgVmy7zl] = '@';
                            ZMEsgVmy7zl++;
                        };
                    }
                    i++;
                };
            };
        };
    }
    {
        int i;
        i = 1;
        while (i <= Dci8EgezNR) {
            {
                int ZMEsgVmy7zl;
                ZMEsgVmy7zl = 1;
                while (ZMEsgVmy7zl <= Dci8EgezNR) {
                    {
                        if (0) {
                            return 0;
                        };
                    }
                    UOCNPplm1GJB += (cdfthKG[i][ZMEsgVmy7zl] == '@');
                    ZMEsgVmy7zl++;
                };
            }
            i++;
        };
    }
    cout << UOCNPplm1GJB << endl;
    return 0;
}

