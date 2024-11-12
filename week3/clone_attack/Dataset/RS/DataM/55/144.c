main () {
    char BaMr7YFd [33];
    long  middle;
    long  Pr17Vu3bL;
    middle = 0;
    int a;
    int FalLKhBeF;
    int oOy9DHB2C;
    int i;
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
    int DkSud2YZoN;
    scanf ("%d%s%d", &a, BaMr7YFd, &FalLKhBeF);
    oOy9DHB2C = strlen (BaMr7YFd);
    for (i = 0; oOy9DHB2C > i; i = i + 1)
        if (BaMr7YFd[i] >= 97 && BaMr7YFd[i] <= 122)
            BaMr7YFd[i] = BaMr7YFd[i] - 32;
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < oOy9DHB2C) {
            Pr17Vu3bL = 1;
            if (BaMr7YFd[i] >= 65 && BaMr7YFd[i] <= 90)
                BaMr7YFd[i] = BaMr7YFd[i] - 55;
            else
                BaMr7YFd[i] = BaMr7YFd[i] - 48;
            {
                DkSud2YZoN = 1;
                while (DkSud2YZoN < oOy9DHB2C - i) {
                    DkSud2YZoN = DkSud2YZoN +1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    Pr17Vu3bL = Pr17Vu3bL *(a);
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
            middle = middle + BaMr7YFd[i] * Pr17Vu3bL;
            ++i;
        };
    }
    i = 0;
    while (middle >= FalLKhBeF) {
        BaMr7YFd[i] = middle % FalLKhBeF;
        middle = (middle - BaMr7YFd[i]) / FalLKhBeF;
        i++;
    }
    BaMr7YFd[i] = middle;
    {
        DkSud2YZoN = 0;
        while (DkSud2YZoN <= i) {
            if (BaMr7YFd[i - DkSud2YZoN] > 9) {
                BaMr7YFd[i - DkSud2YZoN] = BaMr7YFd[i - DkSud2YZoN] - 9 + 64;
                printf ("%c", BaMr7YFd[i - DkSud2YZoN]);
            }
            else
                printf ("%d", BaMr7YFd[i - DkSud2YZoN]);
            ++DkSud2YZoN;
        };
    };
}

