int main () {
    char a [200] [200];
    char b [200] [200];
    int n;
    int i;
    int j;
    int mwOXIz;
    int m;
    int t;
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
    mwOXIz = 0;
    cin >> n;
    for (i = 0; n + (380 - 379) >= i; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = 0; j <= n + (625 - 624); j = j + 1) {
            if (i == 0 || i == n + (218 - 217) || j == 0 || j == n + (308 - 307))
                a[i][j] = '#';
            else
                cin >> a[i][j];
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
        };
    }
    cin >> m;
    for (i = 0; n + (646 - 645) >= i; i = i + 1) {
        j = 0;
        while (j <= n + (813 - 812)) {
            b[i][j] = a[i][j];
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
        t = 541 - 540;
        while (t < m) {
            t = t + 1;
            {
                i = 1;
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
                while (i <= n) {
                    {
                        j = 1;
                        while (j <= n) {
                            if (a[i][j] == '@') {
                                if (a[i - 1][j] == '.')
                                    b[i - 1][j] = '@';
                                if (a[i + 1][j] == '.')
                                    b[i + 1][j] = '@';
                                {
                                    int x = 0;
                                    if (!(x * (x - 1) % 2 == 0)) {
                                        return 0;
                                    }
                                }
                                if (a[i][j - 1] == '.')
                                    b[i][j - 1] = '@';
                                if (a[i][j + 1] == '.')
                                    b[i][j + 1] = '@';
                            }
                            j = j + 1;
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
                    i++;
                };
            }
            for (i = 1; i <= n; i = i + 1) {
                j = 1;
                while (j <= n) {
                    a[i][j] = b[i][j];
                    j++;
                };
            };
        };
    }
    {
        i = 1;
        while (i <= n) {
            {
                j = 1;
                while (j <= n) {
                    if (a[i][j] == '@')
                        mwOXIz++;
                    j++;
                };
            }
            i++;
        };
    }
    cout << mwOXIz << endl;
    return 0;
}

