int main () {
    int NevyCR = 0;
    char ch [(1278 - 776)], oygIe9UTBP [502] [6] = {0}, *pD9wMVfTt = ch;
    int n, dyfiQ2NIsX [(1274 - 772)] = {(131 - 131)}, gD4iUChN = (745 - 745);
    int i;
    int QkM3euN;
    int wQ1K8Wk;
    int Fh8Fz6D;
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
    cin >> n;
    cin >> ch;
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
        while (*(pD9wMVfTt + i + n - 1) != '\0') {
            for (QkM3euN = 0; n > QkM3euN; QkM3euN++) {
                oygIe9UTBP[gD4iUChN][QkM3euN] = *(pD9wMVfTt + i + QkM3euN);
            }
            dyfiQ2NIsX[gD4iUChN]++;
            for (Fh8Fz6D = 0; gD4iUChN > Fh8Fz6D; Fh8Fz6D = Fh8Fz6D +1) {
                {
                    wQ1K8Wk = 0;
                    while (n > wQ1K8Wk) {
                        if (!(oygIe9UTBP[gD4iUChN][wQ1K8Wk] == oygIe9UTBP[Fh8Fz6D][wQ1K8Wk]))
                            break;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        }
                        wQ1K8Wk++;
                    };
                }
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (wQ1K8Wk == n) {
                    dyfiQ2NIsX[Fh8Fz6D]++;
                    dyfiQ2NIsX[gD4iUChN]--;
                    memset (oygIe9UTBP[gD4iUChN], 0, sizeof (oygIe9UTBP [gD4iUChN]));
                };
            }
            i = i + 1;
            if (!(0 == dyfiQ2NIsX[gD4iUChN]))
                gD4iUChN = gD4iUChN + 1;
        };
    }
    {
        i = 0;
        while (gD4iUChN > i) {
            if (dyfiQ2NIsX[i] > NevyCR)
                NevyCR = dyfiQ2NIsX[i];
            i = i + 1;
        };
    }
    if (NevyCR == 1)
        cout << "NO" << endl;
    else {
        cout << NevyCR << endl;
        {
            i = 0;
            while (i < gD4iUChN) {
                if (dyfiQ2NIsX[i] == NevyCR)
                    cout << oygIe9UTBP[i] << endl;
                i++;
            };
        };
    }
    return 0;
}

