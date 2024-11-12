int main () {
    char CeVSyg [150] [150] = {'\0'};
    char maze1 [150] [150] = {'\0'};
    int A4agneCtTxYQ;
    int mziCYN;
    int G5nLAtUX;
    int xbWOYGD13;
    int m;
    int k;
    A4agneCtTxYQ = 0;
    k = 1;
    cin >> xbWOYGD13;
    {
        mziCYN = 833 - 832;
        while (xbWOYGD13 >= mziCYN) {
            {
                G5nLAtUX = 1;
                while (G5nLAtUX <= xbWOYGD13) {
                    cin >> CeVSyg[mziCYN][G5nLAtUX];
                    G5nLAtUX = G5nLAtUX +1;
                };
            }
            mziCYN = mziCYN + 1;
        };
    }
    cin >> m;
    for (;;) {
        if (m <= k)
            break;
        {
            mziCYN = 1;
            while (mziCYN <= xbWOYGD13) {
                {
                    G5nLAtUX = 1;
                    while (G5nLAtUX <= xbWOYGD13) {
                        maze1[mziCYN][G5nLAtUX] = CeVSyg[mziCYN][G5nLAtUX];
                        G5nLAtUX++;
                    };
                }
                mziCYN++;
            };
        }
        {
            mziCYN = 1;
            while (mziCYN <= xbWOYGD13) {
                {
                    G5nLAtUX = 1;
                    while (G5nLAtUX <= xbWOYGD13) {
                        if (CeVSyg[mziCYN][G5nLAtUX] == '@') {
                            if (CeVSyg[mziCYN + 1][G5nLAtUX] == '.')
                                maze1[mziCYN + 1][G5nLAtUX] = '@';
                            if (CeVSyg[mziCYN - 1][G5nLAtUX] == '.')
                                maze1[mziCYN - 1][G5nLAtUX] = '@';
                            if (CeVSyg[mziCYN][G5nLAtUX +1] == '.')
                                maze1[mziCYN][G5nLAtUX +1] = '@';
                            if (CeVSyg[mziCYN][G5nLAtUX -1] == '.')
                                maze1[mziCYN][G5nLAtUX -1] = '@';
                        }
                        G5nLAtUX++;
                    };
                }
                mziCYN++;
            };
        }
        {
            mziCYN = 1;
            while (mziCYN <= xbWOYGD13) {
                for (G5nLAtUX = 1; G5nLAtUX <= xbWOYGD13; G5nLAtUX++) {
                    CeVSyg[mziCYN][G5nLAtUX] = maze1[mziCYN][G5nLAtUX];
                }
                mziCYN++;
            };
        }
        k++;
    }
    {
        mziCYN = 1;
        while (mziCYN <= xbWOYGD13) {
            {
                G5nLAtUX = 1;
                while (G5nLAtUX <= xbWOYGD13) {
                    if (CeVSyg[mziCYN][G5nLAtUX] == '@')
                        A4agneCtTxYQ++;
                    G5nLAtUX++;
                };
            }
            mziCYN++;
        };
    }
    cout << A4agneCtTxYQ;
    return 0;
}

