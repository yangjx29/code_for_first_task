char OLFMKlB0yd [102] [102] = {(729 - 729)};

void  zkKTI6 (int WcHVlKAPX84j, int o2og5Ca1E9) {
    if (OLFMKlB0yd[WcHVlKAPX84j +(938 - 937)][o2og5Ca1E9] == '.')
        OLFMKlB0yd[WcHVlKAPX84j +(269 - 268)][o2og5Ca1E9] = 'X';
    if (OLFMKlB0yd[WcHVlKAPX84j][o2og5Ca1E9 - (760 - 759)] == '.')
        OLFMKlB0yd[WcHVlKAPX84j][o2og5Ca1E9 - 1] = 'X';
    if (OLFMKlB0yd[WcHVlKAPX84j -1][o2og5Ca1E9] == '.')
        OLFMKlB0yd[WcHVlKAPX84j -1][o2og5Ca1E9] = 'X';
    if (OLFMKlB0yd[WcHVlKAPX84j][o2og5Ca1E9 + 1] == '.')
        OLFMKlB0yd[WcHVlKAPX84j][o2og5Ca1E9 + 1] = 'X';
}

int main () {
    int Bzhxu9osDk;
    int SZQ28DhJkfx;
    int qx6OW41;
    int bPnlgJ5;
    int nuBVf0n1Mr8z;
    cin >> Bzhxu9osDk;
    {
        qx6OW41 = 1;
        while (qx6OW41 <= Bzhxu9osDk) {
            {
                bPnlgJ5 = 1;
                while (bPnlgJ5 <= Bzhxu9osDk) {
                    cin >> OLFMKlB0yd[qx6OW41][bPnlgJ5];
                    bPnlgJ5 = bPnlgJ5 + 1;
                };
            }
            qx6OW41 = qx6OW41 + 1;
        };
    }
    cin >> nuBVf0n1Mr8z;
    {
        SZQ28DhJkfx = 1;
        while (SZQ28DhJkfx < nuBVf0n1Mr8z) {
            SZQ28DhJkfx = SZQ28DhJkfx +1;
            {
                qx6OW41 = 1;
                while (qx6OW41 <= Bzhxu9osDk) {
                    {
                        bPnlgJ5 = 1;
                        while (bPnlgJ5 <= Bzhxu9osDk) {
                            if (OLFMKlB0yd[qx6OW41][bPnlgJ5] == '@')
                                zkKTI6 (qx6OW41, bPnlgJ5);
                            bPnlgJ5 = bPnlgJ5 + 1;
                        };
                    }
                    qx6OW41 = qx6OW41 + 1;
                };
            }
            {
                qx6OW41 = 1;
                while (qx6OW41 <= Bzhxu9osDk) {
                    {
                        bPnlgJ5 = 1;
                        while (bPnlgJ5 <= Bzhxu9osDk) {
                            if (OLFMKlB0yd[qx6OW41][bPnlgJ5] == 'X')
                                OLFMKlB0yd[qx6OW41][bPnlgJ5] = '@';
                            bPnlgJ5 = bPnlgJ5 + 1;
                        };
                    }
                    qx6OW41 = qx6OW41 + 1;
                };
            };
        };
    }
    SZQ28DhJkfx = 0;
    {
        qx6OW41 = 1;
        while (qx6OW41 <= Bzhxu9osDk) {
            {
                bPnlgJ5 = 1;
                while (bPnlgJ5 <= Bzhxu9osDk) {
                    if (OLFMKlB0yd[qx6OW41][bPnlgJ5] == '@')
                        SZQ28DhJkfx = SZQ28DhJkfx +1;
                    bPnlgJ5++;
                };
            }
            qx6OW41 = qx6OW41 + 1;
        };
    }
    cout << SZQ28DhJkfx << endl;
    return 0;
}

