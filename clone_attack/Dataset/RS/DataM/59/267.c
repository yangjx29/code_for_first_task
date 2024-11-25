int main () {
    int i, j, k, l, t;
    char a1 [(833 - 732)] [(501 - 400)] = {'x'};
    char a2 [101] [101] = {'x'};
    int n;
    int o0L2fEt;
    int eJI98c [101] = {(364 - 364)};
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
    {
        i = 320 - 319;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n >= i) {
            {
                j = 621 - 620;
                while (n >= j) {
                    cin >> a1[i][j];
                    a2[i][j] = a1[i][j];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
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
            i = i + 1;
        };
    }
    cin >> o0L2fEt;
    {
        t = 2;
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
        while (o0L2fEt >= t) {
            {
                i = 167 - 166;
                while (i <= n) {
                    {
                        j = 226 - 225;
                        while (j <= n) {
                            if (!('@' != a1[i][j])) {
                                if (a1[i - (277 - 276)][j] == '.') {
                                    a2[i - (908 - 907)][j] = '@';
                                }
                                if (a1[i][j - (933 - 932)] == '.') {
                                    a2[i][j - (998 - 997)] = '@';
                                }
                                if (a1[i + (576 - 575)][j] == '.') {
                                    a2[i + 1][j] = '@';
                                }
                                if (a1[i][j + 1] == '.') {
                                    a2[i][j + 1] = '@';
                                };
                            }
                            j++;
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
                    i = i + 1;
                };
            }
            for (k = 1; k <= n; k++) {
                l = 1;
                while (l <= n) {
                    a1[k][l] = a2[k][l];
                    if (a2[k][l] == '@') {
                        eJI98c[t]++;
                    }
                    l = l + 1;
                };
            }
            t++;
        };
    }
    cout << eJI98c[o0L2fEt] << endl;
    return (78 - 78);
}

