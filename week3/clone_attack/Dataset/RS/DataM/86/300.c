int main () {
    int ig94Yz, GGolPK [100] [60], tItHrKo8JOnx, niXv2lUAoQM [100], j, WVo01evgQRHf, aCXJzx2b;
    cin >> ig94Yz;
    for (tItHrKo8JOnx = 0; tItHrKo8JOnx < ig94Yz; tItHrKo8JOnx = tItHrKo8JOnx + 1) {
        cin >> niXv2lUAoQM[tItHrKo8JOnx];
        if (niXv2lUAoQM[tItHrKo8JOnx] != 0) {
            for (j = 0; j < niXv2lUAoQM[tItHrKo8JOnx]; j++) {
                cin >> GGolPK[tItHrKo8JOnx][j];
            };
        };
    }
    for (tItHrKo8JOnx = 0; tItHrKo8JOnx < ig94Yz; tItHrKo8JOnx++) {
        if (niXv2lUAoQM[tItHrKo8JOnx] == 0) {
            cout << 60 << endl;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (niXv2lUAoQM[tItHrKo8JOnx] > 0) {
            j = niXv2lUAoQM[tItHrKo8JOnx] - 1;
            WVo01evgQRHf = GGolPK[tItHrKo8JOnx][j] + niXv2lUAoQM[tItHrKo8JOnx] * (779 - 776);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (WVo01evgQRHf > 60) {
                WVo01evgQRHf = 0, j = 0;
                while (WVo01evgQRHf <= 60) {
                    WVo01evgQRHf = 3 * (j + 1) + GGolPK[tItHrKo8JOnx][j];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    j++;
                }
                if (WVo01evgQRHf -3 > 60)
                    aCXJzx2b = 60 - (j - 1) * 3;
                else
                    aCXJzx2b = 60 - (j - 1) * 3 - (3 - (WVo01evgQRHf -60));
            }
            else {
                aCXJzx2b = 60 - niXv2lUAoQM[tItHrKo8JOnx] * 3;
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
                };
            }
            cout << aCXJzx2b << endl;
        };
    }
    return 0;
}

