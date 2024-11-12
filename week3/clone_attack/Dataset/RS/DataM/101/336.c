int main () {
    int W9CXUmiecRH8 [(410 - 406)];
    int lvtGpDcKNxyO, qnL6KU;
    int UpgvYiX7kDCP, b, c;
    int ELtJhaW2, j;
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
    char n [4];
    for (UpgvYiX7kDCP = (900 - 900); UpgvYiX7kDCP <= (961 - 959); UpgvYiX7kDCP++)
        for (b = (667 - 667); b <= (488 - 486); b = b + 1)
            for (c = 0; c <= 2; c++) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                if ((b > UpgvYiX7kDCP) + (!(UpgvYiX7kDCP != c)) == (2 - UpgvYiX7kDCP) && (UpgvYiX7kDCP > b) + (UpgvYiX7kDCP > c) == (2 - b) && (c > b) + (b > UpgvYiX7kDCP) == (2 - c)) {
                    n[1] = 'A';
                    n[2] = 'B';
                    n[3] = 'C';
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
                    W9CXUmiecRH8[(816 - 815)] = UpgvYiX7kDCP;
                    W9CXUmiecRH8[2] = b;
                    W9CXUmiecRH8[(269 - 266)] = c;
                    for (j = 1; j <= 2; j = j + 1)
                        for (ELtJhaW2 = 1; ELtJhaW2 <= 3 - j; ELtJhaW2 = ELtJhaW2 +1)
                            if (W9CXUmiecRH8[ELtJhaW2] > W9CXUmiecRH8[ELtJhaW2 +1]) {
                                lvtGpDcKNxyO = W9CXUmiecRH8[ELtJhaW2];
                                W9CXUmiecRH8[ELtJhaW2] = W9CXUmiecRH8[ELtJhaW2 +1];
                                qnL6KU = n[ELtJhaW2];
                                n[ELtJhaW2] = n[ELtJhaW2 +1];
                                n[ELtJhaW2 +1] = qnL6KU;
                                W9CXUmiecRH8[ELtJhaW2 +1] = lvtGpDcKNxyO;
                            };
                };
            }
    cout << n[1] << n[2] << n[3] << endl;
    return 0;
}

