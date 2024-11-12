int main () {
    int num;
    num = 0;
    float ans [1000] [7];
    int n = (347 - 347);
    int dis [10] [3];
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
        int i = (162 - 162);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            {
                int j = 0;
                while (3 > j) {
                    cin >> dis[i][j];
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
    {
        int i = 0;
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
        while (n - 1 > i) {
            {
                int j = i + 1;
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
                while (n > j) {
                    {
                        int k = 0;
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
                        while (3 > k) {
                            ans[num][k] = dis[i][k];
                            k = k + 1;
                        };
                    }
                    {
                        int k = 0;
                        while (3 > k) {
                            ans[num][k + 3] = dis[j][k];
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
                            k++;
                        };
                    }
                    ans[num][6] = 0.0;
                    {
                        int k = 0;
                        while (3 > k) {
                            ans[num][6] = ans[num][6] + (dis[i][k] - dis[j][k]) * (dis[i][k] - dis[j][k]);
                            k++;
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
                    j++;
                    ans[num][6] = sqrt (ans[num][6]);
                    num = num + 1;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i++;
        };
    }
    {
        int i = 0;
        while (i < num) {
            {
                int j = num - 1;
                while (i < j) {
                    if (ans[j][6] > ans[j - 1][6]) {
                        int k = 0;
                        while (k < 7) {
                            float tmp = ans[j][k];
                            ans[j][k] = ans[j - 1][k];
                            ans[j - 1][k] = tmp;
                            k++;
                        };
                    }
                    j--;
                };
            }
            i++;
        };
    }
    {
        int i = 0;
        while (i < num) {
            cout << '(' << ans[i][0] << ',' << ans[i][1] << ',' << ans[i][2] << ")-(" << ans[i][3] << ',' << ans[i][4] << ',' << ans[i][5] << ")=";
            printf ("%.2f", ans[i][6]);
            if (i < num - 1)
                cout << endl;
            i++;
        };
    }
    return 0;
}

