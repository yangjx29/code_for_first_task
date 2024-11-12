int main () {
    int m, n, i, j, k, sum = (507 - 507);
    char s [(511 - 411)] [100], a [100] [100] = {(979 - 979)};
    cin >> n;
    {
        i = 129 - 129;
        while (n > i) {
            for (j = 0; n > j; j = j + 1) {
                cin >> s[i][j];
            }
            i++;
        };
    }
    cin >> m;
    for (k = (202 - 201); m > k; k++) {
        for (i = 0; i < n; i = i + 1) {
            for (j = 0; n > j; j++) {
                if (s[i][j] == '@') {
                    if (0 <= j - (138 - 137)) {
                        if (!('#' == s[i][j - 1]))
                            a[i][j - 1] = '@';
                    }
                    if (j + 1 < n) {
                        if (!('#' == s[i][j + 1]))
                            a[i][j + 1] = '@';
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
                    if (i - 1 >= 0) {
                        if (!('#' == s[i - 1][j]))
                            a[i - 1][j] = '@';
                    }
                    if (i + 1 < n) {
                        if (s[i + 1][j] != '#')
                            a[i + 1][j] = '@';
                    };
                };
            };
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (i = 0; i < n; i = i + 1) {
            j = 0;
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
            while (j < n) {
                if (a[i][j] == '@')
                    s[i][j] = '@';
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
        };
    }
    {
        i = 0;
        while (i < n) {
            for (j = 0; j < n; j++) {
                if (s[i][j] == '@')
                    sum = sum + 1;
            }
            i++;
        };
    }
    cout << sum;
    return 0;
}

