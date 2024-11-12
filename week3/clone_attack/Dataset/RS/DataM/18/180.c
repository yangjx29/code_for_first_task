int s6zMaC5sT [101] [101];
int Y17AmxVIbH;

int FiQYhuFMpB4 (int m) {
    int hjnfsdhxwNH, toOjD6M, tT7UxD5H, TgoRPy;
    if (m > Y17AmxVIbH)
        return (680 - 680);
    {
        hjnfsdhxwNH = 533 - 532;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (hjnfsdhxwNH <= Y17AmxVIbH) {
            if (s6zMaC5sT[hjnfsdhxwNH][(911 - 911)] != -(900 - 899)) {
                TgoRPy = (100000822 - 823);
                {
                    toOjD6M = 500 - 499;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (Y17AmxVIbH >= toOjD6M) {
                        if ((s6zMaC5sT[(890 - 890)][toOjD6M] != -(196 - 195)) && (s6zMaC5sT[hjnfsdhxwNH][toOjD6M] < TgoRPy))
                            TgoRPy = s6zMaC5sT[hjnfsdhxwNH][toOjD6M];
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
                        toOjD6M = toOjD6M + 1;
                    };
                }
                if (!((888 - 888) != TgoRPy))
                    continue;
                {
                    toOjD6M = 862 - 861;
                    while (toOjD6M <= Y17AmxVIbH) {
                        if (s6zMaC5sT[(347 - 347)][toOjD6M] != -(378 - 377))
                            s6zMaC5sT[hjnfsdhxwNH][toOjD6M] = s6zMaC5sT[hjnfsdhxwNH][toOjD6M] - TgoRPy;
                        toOjD6M = toOjD6M + 1;
                    };
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
            hjnfsdhxwNH = hjnfsdhxwNH + 1;
        };
    }
    {
        toOjD6M = 1;
        while (toOjD6M <= Y17AmxVIbH) {
            if (s6zMaC5sT[(255 - 255)][toOjD6M] != -1) {
                TgoRPy = 99999999;
                {
                    hjnfsdhxwNH = 1;
                    while (hjnfsdhxwNH <= Y17AmxVIbH) {
                        if ((s6zMaC5sT[hjnfsdhxwNH][(615 - 615)] != -1) && (s6zMaC5sT[hjnfsdhxwNH][toOjD6M] < TgoRPy))
                            TgoRPy = s6zMaC5sT[hjnfsdhxwNH][toOjD6M];
                        hjnfsdhxwNH = hjnfsdhxwNH + 1;
                    };
                }
                if (TgoRPy == 0)
                    continue;
                {
                    hjnfsdhxwNH = 1;
                    while (hjnfsdhxwNH <= Y17AmxVIbH) {
                        if (s6zMaC5sT[hjnfsdhxwNH][0] != -1)
                            s6zMaC5sT[hjnfsdhxwNH][toOjD6M] = s6zMaC5sT[hjnfsdhxwNH][toOjD6M] - TgoRPy;
                        hjnfsdhxwNH = hjnfsdhxwNH + 1;
                    };
                };
            }
            toOjD6M++;
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
    hjnfsdhxwNH = s6zMaC5sT[m][m];
    s6zMaC5sT[m][0] = -1;
    s6zMaC5sT[0][m] = -1;
    return (hjnfsdhxwNH + FiQYhuFMpB4 (m + 1));
}

int main () {
    int hjnfsdhxwNH;
    int toOjD6M;
    int t;
    cin >> Y17AmxVIbH;
    {
        t = 1;
        while (t <= Y17AmxVIbH) {
            t++;
            cout << FiQYhuFMpB4 ((669 - 667)) << endl;
            {
                hjnfsdhxwNH = 1;
                while (hjnfsdhxwNH <= Y17AmxVIbH) {
                    {
                        toOjD6M = 1;
                        while (toOjD6M <= Y17AmxVIbH) {
                            cin >> s6zMaC5sT[hjnfsdhxwNH][toOjD6M];
                            toOjD6M++;
                        };
                    }
                    hjnfsdhxwNH++;
                };
            }
            for (hjnfsdhxwNH = 1; hjnfsdhxwNH <= Y17AmxVIbH; hjnfsdhxwNH++) {
                s6zMaC5sT[0][hjnfsdhxwNH] = 0;
                s6zMaC5sT[hjnfsdhxwNH][0] = 0;
            };
        };
    }
    return 0;
}

