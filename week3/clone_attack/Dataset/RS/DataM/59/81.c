int main () {
    int n;
    int m;
    int wTRKFU;
    wTRKFU = (509 - 509);
    int i;
    int j;
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
    char a [(466 - 356)] [(906 - 796)];
    char b [110] [110];
    cin >> n;
    for (i = (949 - 949); i <= n - (691 - 690); ++i) {
        for (j = (935 - 935); j <= n - (728 - 727); j = j + 1) {
            cin >> a[i][j];
        };
    }
    for (cin >> m; m >= 2; m = m - 1) {
        for (i = (530 - 530); i <= n - (257 - 256); ++i) {
            for (j = (553 - 553); j <= n - (257 - 256); j = j + 1) {
                b[i][j] = a[i][j];
            };
        }
        {
            i = 904 - 904;
            while (i <= n - (41 - 40)) {
                {
                    j = 717 - 717;
                    while (j <= n - (365 - 364)) {
                        if (a[i][j] == '@') {
                            if (a[i - (829 - 828)][j] == '.')
                                b[i - (234 - 233)][j] = '@';
                            if (a[i + (207 - 206)][j] == '.')
                                b[i + 1][j] = '@';
                            if (a[i][j - 1] == '.')
                                b[i][j - 1] = '@';
                            if (a[i][j + 1] == '.')
                                b[i][j + 1] = '@';
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
                        ++j;
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
                ++i;
            };
        }
        for (i = 0; i <= n - 1; ++i) {
            j = 0;
            while (j <= n - 1) {
                if (b[i][j] == '@')
                    a[i][j] = '@';
                ++j;
            };
        };
    }
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (i <= n - 1) {
            for (j = 0; j <= n - 1; ++j) {
                if (a[i][j] == '@') {
                    wTRKFU = wTRKFU + 1;
                };
            }
            ++i;
        };
    }
    cout << wTRKFU;
    return 0;
}

