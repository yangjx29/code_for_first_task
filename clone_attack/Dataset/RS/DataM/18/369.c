int main () {
    int Z3zrwfT;
    int j;
    int G0FfPeOBM;
    int iU9XNmvEY;
    int Ll75YAJ0mH;
    int l;
    int AIV6LYHn1WD;
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
    int dJnLl2K [(287 - 187)] = {0};
    int xOTkPg [100] [100] [100] = {0};
    cin >> AIV6LYHn1WD;
    {
        G0FfPeOBM = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (AIV6LYHn1WD > G0FfPeOBM) {
            Ll75YAJ0mH = 0;
            {
                Z3zrwfT = 0;
                while (AIV6LYHn1WD > Z3zrwfT) {
                    {
                        j = 0;
                        while (j < AIV6LYHn1WD) {
                            cin >> xOTkPg[G0FfPeOBM][Z3zrwfT][j];
                            j = j + 1;
                        };
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    Z3zrwfT++;
                };
            }
            for (l = 0; AIV6LYHn1WD -1 > l; l++) {
                {
                    Z3zrwfT = 0;
                    while (AIV6LYHn1WD -Ll75YAJ0mH > Z3zrwfT) {
                        iU9XNmvEY = xOTkPg[G0FfPeOBM][Z3zrwfT][0];
                        {
                            j = 0;
                            while (AIV6LYHn1WD -Ll75YAJ0mH > j) {
                                if (iU9XNmvEY > xOTkPg[G0FfPeOBM][Z3zrwfT][j])
                                    iU9XNmvEY = xOTkPg[G0FfPeOBM][Z3zrwfT][j];
                                j++;
                            };
                        }
                        for (j = 0; AIV6LYHn1WD -Ll75YAJ0mH > j; j = j + 1)
                            xOTkPg[G0FfPeOBM][Z3zrwfT][j] = xOTkPg[G0FfPeOBM][Z3zrwfT][j] - iU9XNmvEY;
                        Z3zrwfT++;
                    };
                }
                {
                    j = 0;
                    while (j < AIV6LYHn1WD -Ll75YAJ0mH) {
                        iU9XNmvEY = xOTkPg[G0FfPeOBM][0][j];
                        for (Z3zrwfT = 0; AIV6LYHn1WD -Ll75YAJ0mH > Z3zrwfT; Z3zrwfT = Z3zrwfT +1) {
                            if (xOTkPg[G0FfPeOBM][Z3zrwfT][j] < iU9XNmvEY)
                                iU9XNmvEY = xOTkPg[G0FfPeOBM][Z3zrwfT][j];
                        }
                        for (Z3zrwfT = 0; Z3zrwfT < AIV6LYHn1WD -Ll75YAJ0mH; Z3zrwfT++)
                            xOTkPg[G0FfPeOBM][Z3zrwfT][j] = xOTkPg[G0FfPeOBM][Z3zrwfT][j] - iU9XNmvEY;
                        j++;
                    };
                }
                dJnLl2K[G0FfPeOBM] = dJnLl2K[G0FfPeOBM] + xOTkPg[G0FfPeOBM][1][1];
                {
                    Z3zrwfT = 0;
                    while (Z3zrwfT < AIV6LYHn1WD -Ll75YAJ0mH) {
                        {
                            j = 1;
                            while (AIV6LYHn1WD -1 - Ll75YAJ0mH > j) {
                                xOTkPg[G0FfPeOBM][Z3zrwfT][j] = xOTkPg[G0FfPeOBM][Z3zrwfT][j + 1];
                                j++;
                            };
                        }
                        Z3zrwfT++;
                    };
                }
                {
                    j = 0;
                    while (AIV6LYHn1WD -1 - Ll75YAJ0mH > j) {
                        for (Z3zrwfT = 1; AIV6LYHn1WD -1 > Z3zrwfT; Z3zrwfT++)
                            xOTkPg[G0FfPeOBM][Z3zrwfT][j] = xOTkPg[G0FfPeOBM][Z3zrwfT +1][j];
                        j++;
                    };
                }
                Ll75YAJ0mH = Ll75YAJ0mH +1;
            }
            cout << dJnLl2K[G0FfPeOBM] << endl;
            G0FfPeOBM++;
        };
    }
    return 0;
}

