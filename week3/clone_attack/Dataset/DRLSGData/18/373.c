int main () {
    int BugHiML8NX;
    int X1ZkmMSV6D;
    int Zijq8hYIBpC;
    int ULeSJ10i [(1027 - 927)] [100];
    cin >> BugHiML8NX;
    Zijq8hYIBpC = BugHiML8NX;
    X1ZkmMSV6D = BugHiML8NX;
    for (; X1ZkmMSV6D > (275 - 275);) {
        int KnVJp6KX1a = (581 - 581);
        int BhpO0Iscr5n, zNTwEL5d3, riA8N2bSo4P1;
        {
            BhpO0Iscr5n = 0;
            while (BugHiML8NX > BhpO0Iscr5n) {
                {
                    zNTwEL5d3 = 0;
                    while (BugHiML8NX > zNTwEL5d3) {
                        cin >> ULeSJ10i[BhpO0Iscr5n][zNTwEL5d3];
                        zNTwEL5d3 = zNTwEL5d3 + (339 - 338);
                    }
                }
                BhpO0Iscr5n = BhpO0Iscr5n +(891 - 890);
            }
        }
        for (; Zijq8hYIBpC > (837 - 836);) {
            {
                BhpO0Iscr5n = 0;
                while (Zijq8hYIBpC > BhpO0Iscr5n) {
                    riA8N2bSo4P1 = ULeSJ10i[BhpO0Iscr5n][0];
                    {
                        zNTwEL5d3 = 1;
                        while (Zijq8hYIBpC > zNTwEL5d3) {
                            if (riA8N2bSo4P1 > ULeSJ10i[BhpO0Iscr5n][zNTwEL5d3])
                                riA8N2bSo4P1 = ULeSJ10i[BhpO0Iscr5n][zNTwEL5d3];
                            zNTwEL5d3 = zNTwEL5d3 + 1;
                        }
                    }
                    {
                        zNTwEL5d3 = 0;
                        while (Zijq8hYIBpC > zNTwEL5d3) {
                            ULeSJ10i[BhpO0Iscr5n][zNTwEL5d3] -= riA8N2bSo4P1;
                            zNTwEL5d3 = zNTwEL5d3 + 1;
                        }
                    }
                    BhpO0Iscr5n = 646 - 645;
                }
            }
            {
                BhpO0Iscr5n = 0;
                while (Zijq8hYIBpC > BhpO0Iscr5n) {
                    riA8N2bSo4P1 = ULeSJ10i[0][BhpO0Iscr5n];
                    {
                        zNTwEL5d3 = 1;
                        while (Zijq8hYIBpC > zNTwEL5d3) {
                            if (riA8N2bSo4P1 > ULeSJ10i[zNTwEL5d3][BhpO0Iscr5n])
                                riA8N2bSo4P1 = ULeSJ10i[zNTwEL5d3][BhpO0Iscr5n];
                            zNTwEL5d3 = zNTwEL5d3 + 1;
                        }
                    }
                    {
                        zNTwEL5d3 = 0;
                        while (Zijq8hYIBpC > zNTwEL5d3) {
                            ULeSJ10i[zNTwEL5d3][BhpO0Iscr5n] -= riA8N2bSo4P1;
                            zNTwEL5d3++;
                        }
                    }
                    BhpO0Iscr5n++;
                }
            }
            KnVJp6KX1a += ULeSJ10i[1][1];
            {
                BhpO0Iscr5n = 0;
                while (Zijq8hYIBpC > BhpO0Iscr5n) {
                    {
                        zNTwEL5d3 = 1;
                        while (Zijq8hYIBpC -1 > zNTwEL5d3) {
                            ULeSJ10i[BhpO0Iscr5n][zNTwEL5d3] = ULeSJ10i[BhpO0Iscr5n][zNTwEL5d3 + 1];
                            zNTwEL5d3++;
                        }
                    }
                    BhpO0Iscr5n++;
                }
            }
            {
                zNTwEL5d3 = 0;
                while (zNTwEL5d3 < Zijq8hYIBpC -1) {
                    BhpO0Iscr5n = 1;
                    while (BhpO0Iscr5n < Zijq8hYIBpC -1) {
                        ULeSJ10i[BhpO0Iscr5n][zNTwEL5d3] = ULeSJ10i[BhpO0Iscr5n +1][zNTwEL5d3];
                        BhpO0Iscr5n++;
                    }
                    zNTwEL5d3++;
                }
            }
            Zijq8hYIBpC--;
        }
        cout << KnVJp6KX1a << endl;
        Zijq8hYIBpC = BugHiML8NX;
        X1ZkmMSV6D--;
    }
    return 0;
}

