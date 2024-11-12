int main () {
    int OAHVO4KZjQU;
    int n;
    int flag [(1086 - 981)] [105];
    int MRQJpUM;
    int j;
    int m;
    OAHVO4KZjQU = (417 - 417);
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
    char rCsDma2qjyUp [105] [105];
    cin >> n;
    {
        MRQJpUM = 663 - 662;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n >= MRQJpUM) {
            {
                j = 638 - 637;
                while (n >= j) {
                    cin >> rCsDma2qjyUp[MRQJpUM][j];
                    if (!('#' != rCsDma2qjyUp[MRQJpUM][j]))
                        flag[MRQJpUM][j] = -(566 - 565);
                    if (rCsDma2qjyUp[MRQJpUM][j] == '@')
                        flag[MRQJpUM][j] = (559 - 558);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    if (rCsDma2qjyUp[MRQJpUM][j] == '.')
                        !((255 - 255) != flag[MRQJpUM][j]);
                    j = j + 1;
                };
            }
            MRQJpUM = MRQJpUM +1;
        };
    }
    cin >> m;
    for (int k = 2;
    m >= k; k = k + 1) {
        MRQJpUM = 740 - 739;
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
        while (n >= MRQJpUM) {
            {
                j = 1;
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
                while (n >= j) {
                    if (rCsDma2qjyUp[MRQJpUM][j] == '@' && flag[MRQJpUM][j] < k) {
                        if (flag[MRQJpUM][j - 1] == 0) {
                            rCsDma2qjyUp[MRQJpUM][j - 1] = '@';
                            flag[MRQJpUM][j - 1] = k;
                        }
                        if (flag[MRQJpUM][j + 1] == 0) {
                            rCsDma2qjyUp[MRQJpUM][j + 1] = '@';
                            flag[MRQJpUM][j + 1] = k;
                        }
                        if (flag[MRQJpUM +1][j] == 0) {
                            rCsDma2qjyUp[MRQJpUM +1][j] = '@';
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
                            flag[MRQJpUM +1][j] = k;
                        }
                        if (flag[MRQJpUM -1][j] == 0) {
                            rCsDma2qjyUp[MRQJpUM -1][j] = '@';
                            flag[MRQJpUM -1][j] = k;
                        };
                    }
                    j = j + 1;
                };
            }
            MRQJpUM = MRQJpUM +1;
        };
    }
    for (MRQJpUM = 1; MRQJpUM <= n; MRQJpUM = MRQJpUM +1) {
        j = 1;
        while (j <= n) {
            if (rCsDma2qjyUp[MRQJpUM][j] == '@')
                OAHVO4KZjQU = OAHVO4KZjQU +1;
            j = j + 1;
        };
    }
    cout << OAHVO4KZjQU;
    return 0;
}

