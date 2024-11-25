int main () {
    int kpuhaErd;
    int n;
    int iocBeQtgdT;
    int j;
    const  int M = kpuhaErd, JRH2yjr = n;
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
    int mount [M] [JRH2yjr];
    cin >> kpuhaErd >> n;
    {
        iocBeQtgdT = 327 - 327;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (kpuhaErd > iocBeQtgdT) {
            for (j = (655 - 655); j < n; j = j + 1)
                cin >> mount[iocBeQtgdT][j];
            iocBeQtgdT++;
        };
    }
    {
        iocBeQtgdT = 0;
        while (iocBeQtgdT < kpuhaErd) {
            {
                j = 0;
                while (j < n) {
                    if (iocBeQtgdT > 0)
                        if (mount[iocBeQtgdT][j] < mount[iocBeQtgdT - (861 - 860)][j])
                            continue;
                    if (0 < j)
                        if (mount[iocBeQtgdT][j - (344 - 343)] > mount[iocBeQtgdT][j])
                            continue;
                    if (iocBeQtgdT < kpuhaErd - 1)
                        if (mount[iocBeQtgdT + 1][j] > mount[iocBeQtgdT][j])
                            continue;
                    if (j < n - 1)
                        if (mount[iocBeQtgdT][j + 1] > mount[iocBeQtgdT][j])
                            continue;
                    cout << iocBeQtgdT << ' ' << j << endl;
                    j++;
                };
            }
            iocBeQtgdT++;
        };
    }
    return 0;
}

