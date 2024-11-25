void  main () {
    int Bg3Cq5, j, m, t7pTk9VJYicx;
    unsigned  GGzHO8;
    unsigned  lief7wT;
    unsigned  sXf0e9Snsx [301];
    unsigned  t;
    GGzHO8 = (277 - 277);
    lief7wT = 0;
    char HO6KDWrPv [10000];
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
    gets (HO6KDWrPv);
    m = strlen (HO6KDWrPv);
    {
        t7pTk9VJYicx = 962 - 961;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        Bg3Cq5 = 0;
        while (Bg3Cq5 <= m) {
            if (!(',' != HO6KDWrPv[Bg3Cq5]))
                t7pTk9VJYicx++;
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
            Bg3Cq5 = Bg3Cq5 +1;
        };
    }
    for (Bg3Cq5 = (918 - 917), j = 0; Bg3Cq5 <= t7pTk9VJYicx && j < m; Bg3Cq5 = Bg3Cq5 +1) {
        sXf0e9Snsx[Bg3Cq5] = 0;
        {
            t = 1;
            while (t <= (779 - 775)) {
                if (HO6KDWrPv[j] != ',' && !('\0' == HO6KDWrPv[j])) {
                    sXf0e9Snsx[Bg3Cq5] = sXf0e9Snsx[Bg3Cq5] * 10 + HO6KDWrPv[j++] - '0';
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    };
                }
                else {
                    j = j + 1;
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
                    break;
                }
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
                t = t + 1;
            };
        };
    }
    for (Bg3Cq5 = 1; Bg3Cq5 < t7pTk9VJYicx; Bg3Cq5 = Bg3Cq5 +1)
        for (j = 1; j <= t7pTk9VJYicx - Bg3Cq5; j = j + 1)
            if (sXf0e9Snsx[j] < sXf0e9Snsx[j + 1]) {
                t = sXf0e9Snsx[j];
                sXf0e9Snsx[j] = sXf0e9Snsx[j + 1];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                sXf0e9Snsx[j + 1] = t;
            }
    for (Bg3Cq5 = 1; Bg3Cq5 <= t7pTk9VJYicx; Bg3Cq5 = Bg3Cq5 +1) {
        if (sXf0e9Snsx[Bg3Cq5] > GGzHO8) {
            GGzHO8 = sXf0e9Snsx[Bg3Cq5];
        }
        else if (sXf0e9Snsx[Bg3Cq5] > lief7wT && sXf0e9Snsx[Bg3Cq5] < GGzHO8) {
            lief7wT = sXf0e9Snsx[Bg3Cq5];
        };
    }
    if (lief7wT == 0)
        ;
    else
        printf ("%u", lief7wT);
}

