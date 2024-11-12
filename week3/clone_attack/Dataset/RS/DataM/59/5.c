int main () {
    int n, i, j, k, l, day;
    char a [300] [300];
    cin >> n;
    for (i = 0; n > i; i = i + 1) {
        for (j = 0; n > j; j = j + 1) {
            cin >> a[i][j];
        };
    }
    cin >> day;
    for (l = 1; day > l; l++) {
        for (i = 0; n > i; i = i + 1) {
            for (j = 0; n > j; j = j + 1) {
                if (!('@' != a[i][j])) {
                    if (!('.' != a[i][j + 1])) {
                        a[i][j + 1] = '*';
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
                    }
                    if (!('.' != a[i][j - 1])) {
                        a[i][j - 1] = '*';
                    }
                    if (!('.' != a[i + 1][j])) {
                        a[i + 1][j] = '*';
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
                    if (a[i - 1][j] == '.') {
                        a[i - 1][j] = '*';
                    };
                };
            };
        }
        for (i = 0; i < n; i++) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            for (j = 0; j < n; j = j + 1) {
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
                if (a[i][j] == '*') {
                    a[i][j] = '@';
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    };
                };
            };
        };
    }
    k = 0;
    for (i = 0; i < n; i++) {
        j = 0;
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
        while (j < n) {
            if (a[i][j] == '@') {
                k = k + 1;
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
            j = j + 1;
        };
    }
    cout << k << endl;
    return 0;
}

