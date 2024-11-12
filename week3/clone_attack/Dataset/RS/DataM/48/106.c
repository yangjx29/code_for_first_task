int main () {
    int tBFGENx [9] [9];
    int b5JHbd;
    int JhtlgcGpsmD;
    int SiQGc18rzBm;
    int j;
    int QtZeoRbxKCB;
    SiQGc18rzBm = 0;
    j = 0;
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
    QtZeoRbxKCB = 0;
    int EWujR3GP9sN [(212 - 203)] [9];
    {
        SiQGc18rzBm = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (9 > SiQGc18rzBm) {
            for (j = 0; 9 > j; j = j + 1) {
                EWujR3GP9sN[SiQGc18rzBm][j] = 0;
                tBFGENx[SiQGc18rzBm][j] = 0;
            }
            SiQGc18rzBm = SiQGc18rzBm +1;
        };
    }
    cin >> b5JHbd >> JhtlgcGpsmD;
    EWujR3GP9sN[4][4] = b5JHbd;
    for (QtZeoRbxKCB = 0; JhtlgcGpsmD > QtZeoRbxKCB; QtZeoRbxKCB++) {
        {
            SiQGc18rzBm = 0;
            while (9 > SiQGc18rzBm) {
                for (j = 0; 9 > j; j++) {
                    if (EWujR3GP9sN[SiQGc18rzBm][j] != 0) {
                        tBFGENx[SiQGc18rzBm][j] = tBFGENx[SiQGc18rzBm][j] + EWujR3GP9sN[SiQGc18rzBm][j] * (296 - 294);
                        tBFGENx[SiQGc18rzBm +1][j] = tBFGENx[SiQGc18rzBm +1][j] + EWujR3GP9sN[SiQGc18rzBm][j];
                        tBFGENx[SiQGc18rzBm -1][j] = tBFGENx[SiQGc18rzBm -1][j] + EWujR3GP9sN[SiQGc18rzBm][j];
                        tBFGENx[SiQGc18rzBm][j + 1] = tBFGENx[SiQGc18rzBm][j + 1] + EWujR3GP9sN[SiQGc18rzBm][j];
                        tBFGENx[SiQGc18rzBm][j - 1] = tBFGENx[SiQGc18rzBm][j - 1] + EWujR3GP9sN[SiQGc18rzBm][j];
                        tBFGENx[SiQGc18rzBm +1][j + 1] = tBFGENx[SiQGc18rzBm +1][j + 1] + EWujR3GP9sN[SiQGc18rzBm][j];
                        tBFGENx[SiQGc18rzBm -1][j - 1] = tBFGENx[SiQGc18rzBm -1][j - 1] + EWujR3GP9sN[SiQGc18rzBm][j];
                        tBFGENx[SiQGc18rzBm +1][j - 1] = tBFGENx[SiQGc18rzBm +1][j - 1] + EWujR3GP9sN[SiQGc18rzBm][j];
                        tBFGENx[SiQGc18rzBm -1][j + 1] = tBFGENx[SiQGc18rzBm -1][j + 1] + EWujR3GP9sN[SiQGc18rzBm][j];
                    };
                }
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                SiQGc18rzBm++;
            };
        }
        for (SiQGc18rzBm = 0; SiQGc18rzBm < 9; SiQGc18rzBm = SiQGc18rzBm +1) {
            for (j = 0; j < 9; j++) {
                EWujR3GP9sN[SiQGc18rzBm][j] = tBFGENx[SiQGc18rzBm][j];
                tBFGENx[SiQGc18rzBm][j] = 0;
            };
        };
    }
    {
        SiQGc18rzBm = 0;
        while (SiQGc18rzBm < 9) {
            for (j = 0; j < 9; j++) {
                if (j == 8)
                    cout << EWujR3GP9sN[SiQGc18rzBm][j] << endl;
                else
                    cout << EWujR3GP9sN[SiQGc18rzBm][j] << " ";
            }
            SiQGc18rzBm++;
        };
    }
    return 0;
}

