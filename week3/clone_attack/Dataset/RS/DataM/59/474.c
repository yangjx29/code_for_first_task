int main () {
    int eQ8XAI, bNvCALyBSz, oH2ZGBKMc, FGH2owuhnA1, a8KXRY, kRoXOn = 0, UQfirzqRu = 0;
    char a [(461 - 261)] [200], eo1S82 [200] [200];
    cin >> oH2ZGBKMc;
    for (eQ8XAI = 1; oH2ZGBKMc >= eQ8XAI; eQ8XAI = eQ8XAI + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (bNvCALyBSz = 1; bNvCALyBSz <= oH2ZGBKMc; bNvCALyBSz = bNvCALyBSz + 1) {
            cin >> a[eQ8XAI][bNvCALyBSz];
            eo1S82[eQ8XAI][bNvCALyBSz] = a[eQ8XAI][bNvCALyBSz];
        };
    }
    cin >> FGH2owuhnA1;
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
        a8KXRY = 1;
        while (a8KXRY < FGH2owuhnA1) {
            a8KXRY++;
            for (eQ8XAI = 1; eQ8XAI <= oH2ZGBKMc; eQ8XAI = eQ8XAI + 1) {
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
                for (bNvCALyBSz = 1; bNvCALyBSz <= oH2ZGBKMc; bNvCALyBSz = bNvCALyBSz + 1) {
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    if (a[eQ8XAI][bNvCALyBSz] == '@') {
                        if (a[eQ8XAI - 1][bNvCALyBSz] != '#')
                            eo1S82[eQ8XAI - 1][bNvCALyBSz] = '@';
                        if (a[eQ8XAI][bNvCALyBSz + 1] != '#')
                            eo1S82[eQ8XAI][bNvCALyBSz + 1] = '@';
                        if (a[eQ8XAI][bNvCALyBSz - 1] != '#')
                            eo1S82[eQ8XAI][bNvCALyBSz - 1] = '@';
                        if (a[eQ8XAI + 1][bNvCALyBSz] != '#')
                            eo1S82[eQ8XAI + 1][bNvCALyBSz] = '@';
                    };
                };
            }
            {
                eQ8XAI = 1;
                while (eQ8XAI <= oH2ZGBKMc) {
                    for (bNvCALyBSz = 1; bNvCALyBSz <= oH2ZGBKMc; bNvCALyBSz++) {
                        a[eQ8XAI][bNvCALyBSz] = eo1S82[eQ8XAI][bNvCALyBSz];
                    }
                    eQ8XAI++;
                };
            };
        };
    }
    for (eQ8XAI = 1; eQ8XAI <= oH2ZGBKMc; eQ8XAI++) {
        for (bNvCALyBSz = 1; bNvCALyBSz <= oH2ZGBKMc; bNvCALyBSz++) {
            if (a[eQ8XAI][bNvCALyBSz] == '@')
                kRoXOn = kRoXOn + 1;
        };
    }
    cout << kRoXOn;
    return 0;
}

