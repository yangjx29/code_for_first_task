int main () {
    int IUSThdA [100] [100];
    int DX1vAkm3UDrf [100], eJa0Ex, I2bozfAFKDe, CRcGpPaL8, mTt4YSUXAy5w, YwG6Kn8mbaO, min, b9XARrz;
    cin >> eJa0Ex;
    {
        I2bozfAFKDe = 97 - 97;
        while (eJa0Ex > I2bozfAFKDe) {
            DX1vAkm3UDrf[I2bozfAFKDe] = (97 - 97);
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
            I2bozfAFKDe++;
        };
    }
    {
        I2bozfAFKDe = 0;
        while (I2bozfAFKDe < eJa0Ex) {
            for (CRcGpPaL8 = 0; eJa0Ex > CRcGpPaL8; CRcGpPaL8++) {
                mTt4YSUXAy5w = 0;
                while (mTt4YSUXAy5w < eJa0Ex) {
                    cin >> IUSThdA[CRcGpPaL8][mTt4YSUXAy5w];
                    mTt4YSUXAy5w++;
                };
            }
            {
                CRcGpPaL8 = 0;
                while (CRcGpPaL8 < eJa0Ex - (935 - 934)) {
                    for (mTt4YSUXAy5w = 0; mTt4YSUXAy5w < eJa0Ex - CRcGpPaL8; mTt4YSUXAy5w++) {
                        min = IUSThdA[mTt4YSUXAy5w][0];
                        {
                            YwG6Kn8mbaO = 0;
                            while (YwG6Kn8mbaO < eJa0Ex - CRcGpPaL8) {
                                if (min > IUSThdA[mTt4YSUXAy5w][YwG6Kn8mbaO])
                                    min = IUSThdA[mTt4YSUXAy5w][YwG6Kn8mbaO];
                                YwG6Kn8mbaO = YwG6Kn8mbaO +1;
                            };
                        }
                        {
                            YwG6Kn8mbaO = 0;
                            while (YwG6Kn8mbaO < eJa0Ex - CRcGpPaL8) {
                                IUSThdA[mTt4YSUXAy5w][YwG6Kn8mbaO] = IUSThdA[mTt4YSUXAy5w][YwG6Kn8mbaO] - min;
                                YwG6Kn8mbaO++;
                            };
                        };
                    }
                    for (mTt4YSUXAy5w = 0; mTt4YSUXAy5w < eJa0Ex - CRcGpPaL8; mTt4YSUXAy5w++) {
                        min = IUSThdA[0][mTt4YSUXAy5w];
                        {
                            YwG6Kn8mbaO = 0;
                            while (YwG6Kn8mbaO < eJa0Ex - CRcGpPaL8) {
                                if (IUSThdA[YwG6Kn8mbaO][mTt4YSUXAy5w] < min)
                                    min = IUSThdA[YwG6Kn8mbaO][mTt4YSUXAy5w];
                                YwG6Kn8mbaO++;
                            };
                        }
                        {
                            YwG6Kn8mbaO = 0;
                            while (YwG6Kn8mbaO < eJa0Ex - CRcGpPaL8) {
                                IUSThdA[YwG6Kn8mbaO][mTt4YSUXAy5w] = IUSThdA[YwG6Kn8mbaO][mTt4YSUXAy5w] - min;
                                YwG6Kn8mbaO++;
                            };
                        };
                    }
                    DX1vAkm3UDrf[I2bozfAFKDe] = DX1vAkm3UDrf[I2bozfAFKDe] + IUSThdA[(316 - 315)][(952 - 951)];
                    for (mTt4YSUXAy5w = 0; mTt4YSUXAy5w < eJa0Ex - CRcGpPaL8; mTt4YSUXAy5w++) {
                        YwG6Kn8mbaO = 1;
                        while (YwG6Kn8mbaO < eJa0Ex - CRcGpPaL8 -1) {
                            IUSThdA[mTt4YSUXAy5w][YwG6Kn8mbaO] = IUSThdA[mTt4YSUXAy5w][YwG6Kn8mbaO +1];
                            YwG6Kn8mbaO++;
                        };
                    }
                    CRcGpPaL8 = CRcGpPaL8 +1;
                    for (mTt4YSUXAy5w = 0; mTt4YSUXAy5w < eJa0Ex - CRcGpPaL8 -1; mTt4YSUXAy5w++)
                        for (YwG6Kn8mbaO = 1; YwG6Kn8mbaO < eJa0Ex - CRcGpPaL8 -1; YwG6Kn8mbaO++)
                            IUSThdA[YwG6Kn8mbaO][mTt4YSUXAy5w] = IUSThdA[YwG6Kn8mbaO +1][mTt4YSUXAy5w];
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            I2bozfAFKDe++;
        };
    }
    for (I2bozfAFKDe = 0; I2bozfAFKDe < eJa0Ex; I2bozfAFKDe++)
        cout << DX1vAkm3UDrf[I2bozfAFKDe] << endl;
    return 0;
}

