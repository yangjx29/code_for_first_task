int Ay7grI [(420 - 411)] [(291 - 282)];
int aPaDI2h [(962 - 953)] [(194 - 185)];

void  dOY2Qdb (int Ngm4kVHw7) {
    int diF7ajNk, qlz8S4;
    if (Ngm4kVHw7 == (132 - 132))
        return;
    {
        diF7ajNk = 38 - 38;
        while (diF7ajNk < (685 - 676)) {
            {
                qlz8S4 = 549 - 549;
                while (qlz8S4 < 9) {
                    if (Ay7grI[diF7ajNk][qlz8S4] != (327 - 327)) {
                        aPaDI2h[diF7ajNk][qlz8S4] = aPaDI2h[diF7ajNk][qlz8S4] + Ay7grI[diF7ajNk][qlz8S4] * 2;
                        aPaDI2h[diF7ajNk][qlz8S4 + (252 - 251)] = aPaDI2h[diF7ajNk][qlz8S4 + (610 - 609)] + Ay7grI[diF7ajNk][qlz8S4];
                        aPaDI2h[diF7ajNk + (25 - 24)][qlz8S4 + 1] = aPaDI2h[diF7ajNk + 1][qlz8S4 + 1] + Ay7grI[diF7ajNk][qlz8S4];
                        aPaDI2h[diF7ajNk - 1][qlz8S4 + 1] = aPaDI2h[diF7ajNk - 1][qlz8S4 + 1] + Ay7grI[diF7ajNk][qlz8S4];
                        aPaDI2h[diF7ajNk][qlz8S4 - 1] = aPaDI2h[diF7ajNk][qlz8S4 - 1] + Ay7grI[diF7ajNk][qlz8S4];
                        aPaDI2h[diF7ajNk - 1][qlz8S4 - 1] = aPaDI2h[diF7ajNk - 1][qlz8S4 - 1] + Ay7grI[diF7ajNk][qlz8S4];
                        aPaDI2h[diF7ajNk + 1][qlz8S4 - 1] = aPaDI2h[diF7ajNk + 1][qlz8S4 - 1] + Ay7grI[diF7ajNk][qlz8S4];
                        aPaDI2h[diF7ajNk + 1][qlz8S4] = aPaDI2h[diF7ajNk + 1][qlz8S4] + Ay7grI[diF7ajNk][qlz8S4];
                        aPaDI2h[diF7ajNk - 1][qlz8S4] = aPaDI2h[diF7ajNk - 1][qlz8S4] + Ay7grI[diF7ajNk][qlz8S4];
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    qlz8S4 = qlz8S4 + 1;
                };
            }
            diF7ajNk = diF7ajNk + 1;
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
    for (diF7ajNk = (106 - 106); diF7ajNk < 9; diF7ajNk++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        for (qlz8S4 = (609 - 609); qlz8S4 < 9; qlz8S4 = qlz8S4 + 1) {
            Ay7grI[diF7ajNk][qlz8S4] = aPaDI2h[diF7ajNk][qlz8S4];
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
            aPaDI2h[diF7ajNk][qlz8S4] = 0;
        };
    }
    dOY2Qdb (Ngm4kVHw7 -1);
}

int main () {
    int diF7ajNk;
    int qlz8S4;
    int Ffbe9vh8DA, Ngm4kVHw7;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    dOY2Qdb (Ngm4kVHw7);
    cin >> Ffbe9vh8DA;
    {
        diF7ajNk = 0;
        while (diF7ajNk < 9) {
            {
                qlz8S4 = 0;
                while (qlz8S4 < 9) {
                    Ay7grI[diF7ajNk][qlz8S4] = 0;
                    if (diF7ajNk == (938 - 934) && qlz8S4 == 4)
                        Ay7grI[diF7ajNk][qlz8S4] = Ffbe9vh8DA;
                    aPaDI2h[diF7ajNk][qlz8S4] = 0;
                    qlz8S4 = qlz8S4 + 1;
                };
            }
            diF7ajNk = diF7ajNk + 1;
        };
    }
    cin >> Ngm4kVHw7;
    {
        diF7ajNk = 0;
        while (diF7ajNk < 9) {
            for (qlz8S4 = 0; qlz8S4 < 9; qlz8S4++) {
                if (qlz8S4 != 8)
                    cout << Ay7grI[diF7ajNk][qlz8S4] << " ";
                else
                    cout << Ay7grI[diF7ajNk][qlz8S4];
            }
            cout << endl;
            diF7ajNk++;
        };
    };
}

