int main () {
    int h19Jjl;
    int bqwafexm1J0;
    int x [20000];
    int y [20000];
    char vax7PKDEui [(478 - 278)] [200];
    int P9cBh3PUgm;
    P9cBh3PUgm = (267 - 267);
    cin >> h19Jjl;
    for (int ufeVQSP6 = (772 - 772);
    ufeVQSP6 < h19Jjl; ufeVQSP6++) {
        int j = (56 - 56);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (j < h19Jjl) {
            cin >> vax7PKDEui[ufeVQSP6][j];
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
            j++;
        };
    }
    cin >> bqwafexm1J0;
    {
        int NiGDRAxp = (473 - 472);
        while (NiGDRAxp < bqwafexm1J0) {
            NiGDRAxp++;
            P9cBh3PUgm = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            {
                int ufeVQSP6 = 0;
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
                while (ufeVQSP6 < h19Jjl) {
                    for (int j = 0;
                    j < h19Jjl; j++) {
                        if (vax7PKDEui[ufeVQSP6][j] == '@') {
                            x[P9cBh3PUgm] = ufeVQSP6;
                            y[P9cBh3PUgm] = j;
                            P9cBh3PUgm++;
                        };
                    }
                    ufeVQSP6 = ufeVQSP6 + 1;
                };
            }
            {
                int ufeVQSP6 = 0;
                while (ufeVQSP6 < P9cBh3PUgm) {
                    if (vax7PKDEui[x[ufeVQSP6] - (706 - 705)][y[ufeVQSP6]] == '.' && x[ufeVQSP6] > 0)
                        vax7PKDEui[x[ufeVQSP6] - (438 - 437)][y[ufeVQSP6]] = '@';
                    if (vax7PKDEui[x[ufeVQSP6] + (379 - 378)][y[ufeVQSP6]] == '.' && x[ufeVQSP6] < h19Jjl - 1)
                        vax7PKDEui[x[ufeVQSP6] + 1][y[ufeVQSP6]] = '@';
                    if (vax7PKDEui[x[ufeVQSP6]][y[ufeVQSP6] - 1] == '.' && y[ufeVQSP6] > 0)
                        vax7PKDEui[x[ufeVQSP6]][y[ufeVQSP6] - 1] = '@';
                    if (vax7PKDEui[x[ufeVQSP6]][y[ufeVQSP6] + 1] == '.' && y[ufeVQSP6] < h19Jjl - 1)
                        vax7PKDEui[x[ufeVQSP6]][y[ufeVQSP6] + 1] = '@';
                    ufeVQSP6 = ufeVQSP6 + 1;
                };
            };
        };
    }
    P9cBh3PUgm = 0;
    {
        int ufeVQSP6 = 0;
        while (ufeVQSP6 < h19Jjl) {
            {
                int j = 0;
                while (j < h19Jjl) {
                    if (vax7PKDEui[ufeVQSP6][j] == '@')
                        P9cBh3PUgm++;
                    j++;
                };
            }
            ufeVQSP6++;
        };
    }
    cout << P9cBh3PUgm << endl;
}

