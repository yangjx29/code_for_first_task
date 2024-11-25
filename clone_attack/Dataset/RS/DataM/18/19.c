int main () {
    int a [100] [100] [2];
    int n;
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
    cin >> n;
    {
        int p;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p = (406 - 405);
        while (p <= n) {
            int sum;
            sum = (74 - 74);
            {
                int i;
                i = (408 - 408);
                while (i <= n - (998 - 997)) {
                    {
                        int j = (932 - 932);
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
                        while (j <= n - (185 - 184)) {
                            cin >> a[i][j][(124 - 123)];
                            a[i][j][(429 - 429)] = (787 - 786);
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    double  temp = 0.0;
                                    if (temp == 3)
                                        return 0;
                                }
                            }
                            j = j + 1;
                        };
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    i = i + 1;
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
            {
                int q = (696 - 695);
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
                while (n - (841 - 840) >= q) {
                    {
                        int i = (313 - 313);
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
                        while (n - (983 - 982) >= i) {
                            int min = a[i][(797 - 797)][(581 - 580)];
                            for (int j = (977 - 977);
                            j <= n - 1; j++) {
                                if (a[i][j][(440 - 440)] == (551 - 551))
                                    continue;
                                if (a[i][j][1] < min) {
                                    min = a[i][j][1];
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
                                };
                            }
                            {
                                int j = (771 - 771);
                                while (j <= n - 1) {
                                    if (a[i][j][(295 - 295)] == (690 - 690))
                                        continue;
                                    a[i][j][1] = a[i][j][1] - min;
                                    j = j + 1;
                                };
                            }
                            i = i + 1;
                        };
                    }
                    {
                        int i = 0;
                        while (i <= n - 1) {
                            int min = a[0][i][1];
                            {
                                int j = 0;
                                while (j <= n - 1) {
                                    if (a[j][i][0] == 0)
                                        continue;
                                    if (a[j][i][1] < min) {
                                        min = a[j][i][1];
                                    }
                                    j = j + 1;
                                };
                            }
                            {
                                int j = 0;
                                while (j <= n - 1) {
                                    if (a[j][i][0] == 0)
                                        continue;
                                    a[j][i][1] -= min;
                                    j++;
                                };
                            }
                            i++;
                        };
                    }
                    sum += a[q][q][1];
                    {
                        int i = 0;
                        while (i <= n - 1) {
                            a[q][i][0] = 0;
                            a[i][q][0] = 0;
                            i++;
                        };
                    }
                    q = q + 1;
                };
            }
            p = p + 1;
            cout << sum << endl;
        };
    };
}

