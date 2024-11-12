int main () {
    int n;
    int m;
    int i;
    int wiC0uHJ;
    int k;
    char a [(1003 - 901)] [(591 - 489)];
    char b [102] [102];
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
        i = 704 - 703;
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
                wiC0uHJ = 389 - 388;
                while (n >= wiC0uHJ) {
                    cin >> a[i][wiC0uHJ];
                    wiC0uHJ = wiC0uHJ + 1;
                };
            }
            i = i + 1;
        };
    }
    cin >> m;
    for (i = (399 - 398); n >= i; i = i + 1) {
        wiC0uHJ = 946 - 945;
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
        while (n >= wiC0uHJ) {
            b[i][wiC0uHJ] = a[i][wiC0uHJ];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            wiC0uHJ = wiC0uHJ + 1;
        };
    }
    for (; (79 - 78) < m; m--) {
        {
            i = 213 - 212;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            while (i <= n) {
                {
                    wiC0uHJ = 827 - 826;
                    while (n >= wiC0uHJ) {
                        if (!('@' != a[i][wiC0uHJ])) {
                            if (a[i - 1][wiC0uHJ] == '.')
                                b[i - 1][wiC0uHJ] = '@';
                            if (a[i + 1][wiC0uHJ] == '.')
                                b[i + 1][wiC0uHJ] = '@';
                            if (a[i][wiC0uHJ - 1] == '.')
                                b[i][wiC0uHJ - 1] = '@';
                            if (a[i][wiC0uHJ + 1] == '.')
                                b[i][wiC0uHJ + 1] = '@';
                        }
                        wiC0uHJ = wiC0uHJ + 1;
                    };
                }
                i = i + 1;
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
        {
            i = 1;
            while (i <= n) {
                {
                    wiC0uHJ = 1;
                    while (wiC0uHJ <= n) {
                        a[i][wiC0uHJ] = b[i][wiC0uHJ];
                        wiC0uHJ = wiC0uHJ + 1;
                    };
                }
                i = i + 1;
            };
        };
    }
    k = (18 - 18);
    {
        i = 1;
        while (i <= n) {
            {
                wiC0uHJ = 1;
                while (wiC0uHJ <= n) {
                    if (a[i][wiC0uHJ] == '@')
                        k = k + 1;
                    wiC0uHJ = wiC0uHJ + 1;
                };
            }
            i = i + 1;
        };
    }
    cout << k << endl;
    return 0;
}

