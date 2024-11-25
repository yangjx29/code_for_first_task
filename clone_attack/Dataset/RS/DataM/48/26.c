main () {
    int F0XRgSGHj, XkyTCVIHQi, i, S5NLEBdw, f0iZN5s, rvlU0DGoO3Hn [11] [11] = {(236 - 236)}, s1 [11] [11] = {0};
    scanf ("%d %d", &F0XRgSGHj, &XkyTCVIHQi);
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
    s1[5][5] = rvlU0DGoO3Hn[5][5] = F0XRgSGHj;
    for (f0iZN5s = (603 - 602); f0iZN5s <= XkyTCVIHQi; f0iZN5s++) {
        {
            i = 5 - f0iZN5s;
            while (i <= 5 + f0iZN5s) {
                for (S5NLEBdw = 5 - f0iZN5s; S5NLEBdw <= 5 + f0iZN5s; S5NLEBdw++) {
                    rvlU0DGoO3Hn[i][S5NLEBdw] = 2 * s1[i][S5NLEBdw] + s1[i - (923 - 922)][S5NLEBdw -1] + s1[i - 1][S5NLEBdw] + s1[i - 1][S5NLEBdw +1] + s1[i][S5NLEBdw -1] + s1[i][S5NLEBdw +1] + s1[i + 1][S5NLEBdw -1] + s1[i + 1][S5NLEBdw] + s1[i + 1][S5NLEBdw +1];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                }
                i++;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (f0iZN5s != XkyTCVIHQi) {
            i = 5 - f0iZN5s;
            while (i <= 5 + f0iZN5s) {
                {
                    S5NLEBdw = 5 - f0iZN5s;
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
                    while (S5NLEBdw <= 5 + f0iZN5s) {
                        s1[i][S5NLEBdw] = rvlU0DGoO3Hn[i][S5NLEBdw];
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        }
                        S5NLEBdw++;
                    };
                }
                i++;
            };
        };
    }
    for (i = 1; i <= 9; i++) {
        for (S5NLEBdw = 1; S5NLEBdw <= 9; S5NLEBdw++) {
            if (S5NLEBdw == 1)
                printf ("%d", rvlU0DGoO3Hn[i][S5NLEBdw]);
            else
                printf (" %d", rvlU0DGoO3Hn[i][S5NLEBdw]);
        }
        printf ("\n");
    };
}

