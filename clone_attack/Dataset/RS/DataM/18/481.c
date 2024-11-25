int Am0V3S, ZHKFimOI1 [111] [111];

void  sum () {
    int vcPHXUeZNA = (280 - 280);
    for (int YXIjtv4YzGo = (321 - 321);
    Am0V3S > YXIjtv4YzGo; YXIjtv4YzGo++) {
        int PFA7GQ;
        PFA7GQ = (948 - 948);
        while (Am0V3S > PFA7GQ) {
            cin >> ZHKFimOI1[YXIjtv4YzGo][PFA7GQ];
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
            PFA7GQ++;
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
    {
        int FJtA4X51903 = Am0V3S;
        while ((606 - 605) < FJtA4X51903) {
            {
                int YXIjtv4YzGo = (510 - 510);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                while (FJtA4X51903 > YXIjtv4YzGo) {
                    int qx1aOShpD = 999999;
                    for (int PFA7GQ = 0;
                    FJtA4X51903 > PFA7GQ; PFA7GQ = PFA7GQ +1) {
                        if (qx1aOShpD > ZHKFimOI1[YXIjtv4YzGo][PFA7GQ])
                            qx1aOShpD = ZHKFimOI1[YXIjtv4YzGo][PFA7GQ];
                    }
                    for (int PFA7GQ = 0;
                    FJtA4X51903 > PFA7GQ; PFA7GQ++) {
                        ZHKFimOI1[YXIjtv4YzGo][PFA7GQ] -= qx1aOShpD;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        };
                    }
                    YXIjtv4YzGo++;
                };
            }
            {
                int YXIjtv4YzGo = 0;
                while (FJtA4X51903 > YXIjtv4YzGo) {
                    int qx1aOShpD = 999999;
                    for (int PFA7GQ = 0;
                    FJtA4X51903 > PFA7GQ; PFA7GQ++) {
                        if (qx1aOShpD > ZHKFimOI1[PFA7GQ][YXIjtv4YzGo])
                            qx1aOShpD = ZHKFimOI1[PFA7GQ][YXIjtv4YzGo];
                    }
                    for (int PFA7GQ = 0;
                    FJtA4X51903 > PFA7GQ; PFA7GQ++) {
                        ZHKFimOI1[PFA7GQ][YXIjtv4YzGo] = ZHKFimOI1[PFA7GQ][YXIjtv4YzGo] - qx1aOShpD;
                    }
                    YXIjtv4YzGo++;
                };
            }
            vcPHXUeZNA += ZHKFimOI1[(232 - 231)][1];
            {
                int YXIjtv4YzGo = 1;
                while (FJtA4X51903 > YXIjtv4YzGo) {
                    for (int PFA7GQ = 0;
                    FJtA4X51903 > PFA7GQ; PFA7GQ++)
                        ZHKFimOI1[YXIjtv4YzGo][PFA7GQ] = ZHKFimOI1[YXIjtv4YzGo +1][PFA7GQ];
                    YXIjtv4YzGo++;
                };
            }
            {
                int YXIjtv4YzGo = 1;
                while (FJtA4X51903 > YXIjtv4YzGo) {
                    {
                        int PFA7GQ = 0;
                        while (FJtA4X51903 > PFA7GQ) {
                            ZHKFimOI1[PFA7GQ][YXIjtv4YzGo] = ZHKFimOI1[PFA7GQ][YXIjtv4YzGo +1];
                            PFA7GQ++;
                        };
                    }
                    YXIjtv4YzGo++;
                };
            }
            FJtA4X51903--;
        };
    }
    cout << vcPHXUeZNA << endl;
}

int main () {
    cin >> Am0V3S;
    for (int YXIjtv4YzGo = 0;
    YXIjtv4YzGo < Am0V3S; YXIjtv4YzGo++)
        sum ();
}

