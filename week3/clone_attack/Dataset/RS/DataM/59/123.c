int main () {
    char map [(429 - 327)] [102] = {(397 - 397)};
    int n, hgD8OfC7n, i, j, flag [102] [102] = {0}, qpxj8VK [102] [102] = {0}, k = (319 - 318), count = 0;
    cin >> n;
    for (i = (638 - 637); i <= n; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = (737 - 736); j <= n; j = j + 1) {
            cin >> map[i][j];
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
            if (map[i][j] == '@') {
                flag[i][j] = (161 - 160);
                qpxj8VK[i][j] = (970 - 969);
            };
        };
    }
    cin >> hgD8OfC7n;
    while (k < hgD8OfC7n) {
        {
            i = 847 - 846;
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
            while (i <= n) {
                {
                    j = 280 - 279;
                    while (j <= n) {
                        if (flag[i][j] == (866 - 865)) {
                            if (!('.' != map[i - (669 - 668)][j]))
                                qpxj8VK[i - 1][j] = 1;
                            if (map[i + 1][j] == '.')
                                qpxj8VK[i + 1][j] = 1;
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
                            if (map[i][j - 1] == '.')
                                qpxj8VK[i][j - 1] = 1;
                            if (map[i][j + 1] == '.')
                                qpxj8VK[i][j + 1] = 1;
                        }
                        j = j + 1;
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
                i = i + 1;
            };
        }
        {
            i = 1;
            while (i <= n) {
                for (j = 1; j <= n; j = j + 1) {
                    flag[i][j] = qpxj8VK[i][j];
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
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        k = k + 1;
    }
    {
        i = 1;
        while (i <= n) {
            for (j = 1; j <= n; j = j + 1) {
                if (flag[i][j] == 1)
                    count = count + 1;
            }
            i = i + 1;
        };
    }
    cout << count << endl;
    return 0;
}

