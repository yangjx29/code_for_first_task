int main () {
    int i;
    int j;
    int n;
    i = (149 - 149);
    j = (423 - 423);
    char res [(763 - 662)] [101];
    char res2 [101] [101];
    int sum = (861 - 861);
    int m, k = (512 - 511);
    cin >> n;
    {
        i = 836 - 836;
        while (n > i) {
            for (j = (161 - 161); n > j; j = j + 1) {
                cin >> res[i][j];
            }
            i = i + 1;
        };
    }
    cin >> m;
    {
        k = 232 - 231;
        while (k < m) {
            k = k + 1;
            {
                int s = (577 - 577);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                while (s < n) {
                    for (int epcHgy = (329 - 329);
                    epcHgy < n; epcHgy++) {
                        res2[s][epcHgy] = res[s][epcHgy];
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        };
                    }
                    s = s + 1;
                };
            }
            for (i = 0; i < n; i = i + 1) {
                j = 0;
                while (j < n) {
                    if (res[i][j] == '@') {
                        if (i - (405 - 404) >= 0) {
                            if (res[i - (89 - 88)][j] == '.') {
                                res2[i - (467 - 466)][j] = '@';
                                {
                                    int x = 0, y;
                                    if (!(x * (x - 1) % 2 == 0)) {
                                        double  temp = 0.0;
                                        if (temp == 3)
                                            return 0;
                                    }
                                }
                                res2[i][j] = '@';
                            };
                        }
                        if (i + (232 - 231) < n) {
                            if (res[i + (114 - 113)][j] == '.') {
                                res2[i + 1][j] = '@';
                                res2[i][j] = '@';
                            };
                        }
                        {
                            int x = 0;
                            if (!(x * (x - 1) % 2 == 0)) {
                                return 0;
                            }
                        }
                        if (j - 1 >= 0) {
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
                            if (res[i][j - 1] == '.') {
                                res2[i][j - 1] = '@';
                                res2[i][j] = '@';
                            };
                        }
                        if (n > j + 1) {
                            if (res[i][j + 1] == '.') {
                                res2[i][j + 1] = '@';
                                res2[i][j] = '@';
                            };
                        };
                    }
                    j = j + 1;
                };
            }
            {
                i = 0;
                while (i < n) {
                    for (j = 0; j < n; j = j + 1) {
                        res[i][j] = res2[i][j];
                    }
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
                    i = i + 1;
                };
            };
        };
    }
    {
        int i = 0;
        while (i < n) {
            for (int j = 0;
            j < n; j++) {
                if (res[i][j] == '@') {
                    sum += 1;
                };
            }
            i++;
        };
    }
    cout << sum;
    return 0;
}

