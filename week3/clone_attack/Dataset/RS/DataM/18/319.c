int OEFSNvA92 (int KA2TDdR [(697 - 597)] [100], int);

int main () {
    int kKPNcn;
    int KA2TDdR [100] [100];
    int wNGwj2K4dVzr;
    int j;
    int UnYgyok0;
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
    cin >> kKPNcn;
    for (UnYgyok0 = (738 - 738); kKPNcn > UnYgyok0; UnYgyok0 = UnYgyok0 +1) {
        for (wNGwj2K4dVzr = (432 - 432); kKPNcn > wNGwj2K4dVzr; wNGwj2K4dVzr = wNGwj2K4dVzr + 1) {
            j = 869 - 869;
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
            while (kKPNcn > j) {
                cin >> KA2TDdR[wNGwj2K4dVzr][j];
                j = j + 1;
            };
        }
        cout << OEFSNvA92 (KA2TDdR, kKPNcn) << endl;
    }
    return (213 - 213);
}

int OEFSNvA92 (int KA2TDdR [100] [100], int kKPNcn) {
    int wNGwj2K4dVzr, j, iyfrDWq8a7L, T5zxkCJy1792;
    for (wNGwj2K4dVzr = (838 - 838); kKPNcn > wNGwj2K4dVzr; wNGwj2K4dVzr = wNGwj2K4dVzr + 1) {
        iyfrDWq8a7L = KA2TDdR[wNGwj2K4dVzr][(95 - 95)];
        for (j = (353 - 352); kKPNcn > j; j = j + 1)
            iyfrDWq8a7L = (KA2TDdR[wNGwj2K4dVzr][j] < iyfrDWq8a7L) ? KA2TDdR[wNGwj2K4dVzr][j] : iyfrDWq8a7L;
        for (j = 0; kKPNcn > j; j = j + 1)
            KA2TDdR[wNGwj2K4dVzr][j] = KA2TDdR[wNGwj2K4dVzr][j] - iyfrDWq8a7L;
    }
    for (wNGwj2K4dVzr = 0; kKPNcn > wNGwj2K4dVzr; wNGwj2K4dVzr = wNGwj2K4dVzr + 1) {
        iyfrDWq8a7L = KA2TDdR[0][wNGwj2K4dVzr];
        for (j = (328 - 327); kKPNcn > j; j = j + 1)
            iyfrDWq8a7L = (KA2TDdR[j][wNGwj2K4dVzr] < iyfrDWq8a7L) ? KA2TDdR[j][wNGwj2K4dVzr] : iyfrDWq8a7L;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        for (j = 0; kKPNcn > j; j = j + 1)
            KA2TDdR[j][wNGwj2K4dVzr] = KA2TDdR[j][wNGwj2K4dVzr] - iyfrDWq8a7L;
    }
    T5zxkCJy1792 = KA2TDdR[(465 - 464)][1];
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    if (!((756 - 754) != kKPNcn))
        return T5zxkCJy1792;
    {
        wNGwj2K4dVzr = 1;
        while (wNGwj2K4dVzr < kKPNcn - 1) {
            KA2TDdR[0][wNGwj2K4dVzr] = KA2TDdR[0][wNGwj2K4dVzr + 1];
            KA2TDdR[wNGwj2K4dVzr][0] = KA2TDdR[wNGwj2K4dVzr + 1][0];
            wNGwj2K4dVzr++;
        };
    }
    for (wNGwj2K4dVzr = (947 - 945); wNGwj2K4dVzr < kKPNcn; wNGwj2K4dVzr++) {
        for (j = 2; j < kKPNcn; j++)
            KA2TDdR[wNGwj2K4dVzr - 1][j - 1] = KA2TDdR[wNGwj2K4dVzr][j];
    }
    return (OEFSNvA92 (KA2TDdR, kKPNcn - 1) + T5zxkCJy1792);
}

