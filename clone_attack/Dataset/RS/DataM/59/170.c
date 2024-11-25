int main () {
    int n;
    int g8fuqH4srkOC;
    int XbEnSCBo;
    int Am6AlTKYGv;
    int pgRaEmvcfO6;
    int BkFvmDw4;
    int q;
    char iRxzpsNi [102] [102];
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
    BkFvmDw4 = 0;
    q = 0;
    cin >> n;
    {
        g8fuqH4srkOC = 681 - 680;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (g8fuqH4srkOC <= n) {
            {
                XbEnSCBo = 262 - 261;
                while (XbEnSCBo <= n) {
                    cin >> iRxzpsNi[g8fuqH4srkOC][XbEnSCBo];
                    if (iRxzpsNi[g8fuqH4srkOC][XbEnSCBo] == '@')
                        BkFvmDw4++;
                    if (iRxzpsNi[g8fuqH4srkOC][XbEnSCBo] == '#')
                        q = q + 1;
                    XbEnSCBo = XbEnSCBo +1;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            g8fuqH4srkOC = g8fuqH4srkOC + 1;
        };
    }
    for (g8fuqH4srkOC = 0; g8fuqH4srkOC <= n + (684 - 683); g8fuqH4srkOC++) {
        XbEnSCBo = 0;
        while (n + 1 >= XbEnSCBo) {
            if (g8fuqH4srkOC == 0 || XbEnSCBo == 0 || !(n + 1 != g8fuqH4srkOC) || XbEnSCBo == n + 1)
                iRxzpsNi[g8fuqH4srkOC][XbEnSCBo] = '#';
            XbEnSCBo = XbEnSCBo +1;
        };
    }
    for (pgRaEmvcfO6 = 0; Am6AlTKYGv -1 > pgRaEmvcfO6; pgRaEmvcfO6 = pgRaEmvcfO6 + 1) {
        {
            g8fuqH4srkOC = 1;
            while (g8fuqH4srkOC <= n) {
                for (XbEnSCBo = 1; XbEnSCBo <= n; XbEnSCBo++)
                    if ((iRxzpsNi[g8fuqH4srkOC][XbEnSCBo] == '.') && ((iRxzpsNi[g8fuqH4srkOC - 1][XbEnSCBo] == '@') || (iRxzpsNi[g8fuqH4srkOC + 1][XbEnSCBo] == '@') || (iRxzpsNi[g8fuqH4srkOC][XbEnSCBo -1] == '@') || (iRxzpsNi[g8fuqH4srkOC][XbEnSCBo +1] == '@'))) {
                        BkFvmDw4++;
                        iRxzpsNi[g8fuqH4srkOC][XbEnSCBo] = '*';
                    }
                g8fuqH4srkOC++;
            };
        }
        {
            g8fuqH4srkOC = 1;
            while (g8fuqH4srkOC <= n) {
                {
                    XbEnSCBo = 1;
                    while (XbEnSCBo <= n) {
                        if (iRxzpsNi[g8fuqH4srkOC][XbEnSCBo] == '*')
                            iRxzpsNi[g8fuqH4srkOC][XbEnSCBo] = '@';
                        XbEnSCBo++;
                    };
                }
                g8fuqH4srkOC++;
            };
        };
    }
    cout << BkFvmDw4 << endl;
    cin >> Am6AlTKYGv;
    return 0;
}

