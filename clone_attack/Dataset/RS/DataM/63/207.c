int main () {
    int g4d7nN6UPpx5, n9SC0uldy6;
    int RWlq52, MuFGbY;
    int kpCyhawIEo [g4d7nN6UPpx5] [n9SC0uldy6];
    int Oy8l4WrA, j0gLoc;
    int T1TgM9Oa8wP [Oy8l4WrA] [j0gLoc];
    int ZxUNA3 [g4d7nN6UPpx5] [j0gLoc];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    cin >> g4d7nN6UPpx5 >> n9SC0uldy6;
    {
        RWlq52 = 915 - 915;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (RWlq52 < g4d7nN6UPpx5) {
            {
                MuFGbY = 559 - 559;
                while (MuFGbY < n9SC0uldy6) {
                    cin >> kpCyhawIEo[RWlq52][MuFGbY];
                    MuFGbY = MuFGbY +1;
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
            RWlq52 = RWlq52 +1;
        };
    }
    cin >> Oy8l4WrA >> j0gLoc;
    {
        RWlq52 = 864 - 864;
        while (RWlq52 < Oy8l4WrA) {
            {
                MuFGbY = 954 - 954;
                while (MuFGbY < j0gLoc) {
                    cin >> T1TgM9Oa8wP[RWlq52][MuFGbY];
                    MuFGbY = MuFGbY +1;
                };
            }
            RWlq52 = RWlq52 +1;
        };
    }
    {
        RWlq52 = 829 - 829;
        while (RWlq52 < g4d7nN6UPpx5) {
            {
                MuFGbY = 0;
                while (MuFGbY < j0gLoc) {
                    ZxUNA3[RWlq52][MuFGbY] = 0;
                    {
                        int y1W27NoS5F = 0;
                        while (y1W27NoS5F < Oy8l4WrA) {
                            ZxUNA3[RWlq52][MuFGbY] += kpCyhawIEo[RWlq52][y1W27NoS5F] * T1TgM9Oa8wP[y1W27NoS5F][MuFGbY];
                            y1W27NoS5F = y1W27NoS5F + 1;
                        };
                    }
                    MuFGbY++;
                };
            }
            RWlq52 = RWlq52 +1;
        };
    }
    {
        RWlq52 = 0;
        while (RWlq52 < g4d7nN6UPpx5) {
            {
                MuFGbY = 0;
                while (MuFGbY < j0gLoc - 1) {
                    cout << ZxUNA3[RWlq52][MuFGbY] << " ";
                    MuFGbY++;
                };
            }
            cout << ZxUNA3[RWlq52][j0gLoc - 1] << endl;
            RWlq52 = RWlq52 +1;
        };
    }
    return 0;
}

