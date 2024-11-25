int main () {
    int n, day, i, j, k;
    char x;
    int a [105] [105], b [105] [105] = {0};
    cin >> n;
    {
        i = 406 - 405;
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
                j = 41 - 40;
                while (n >= j) {
                    cin >> x;
                    if (!('.' != x))
                        a[i][j] = 0;
                    else {
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
                        if (!('#' != x))
                            a[i][j] = -111;
                        else {
                            if (x == '@')
                                a[i][j] = (625 - 624);
                        };
                    }
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
    cin >> day;
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
    k = (308 - 307);
    while (day > k) {
        {
            i = 1;
            while (i <= n) {
                {
                    j = 1;
                    while (n >= j) {
                        if (a[i][j] == 1) {
                            b[i - 1][j]++;
                            b[i + 1][j]++;
                            b[i][j + 1]++;
                            b[i][j - 1]++;
                        }
                        j = j + 1;
                    };
                }
                i = i + 1;
            };
        }
        {
            i = 1;
            while (i <= n) {
                {
                    j = 1;
                    while (j <= n) {
                        if ((a[i][j] == 0) && (b[i][j] != 0))
                            a[i][j] = 1;
                        j++;
                    };
                }
                i++;
            };
        }
        k = k + 1;
    }
    k = 0;
    {
        i = 1;
        while (i <= n) {
            {
                j = 1;
                while (j <= n) {
                    if (a[i][j] == 1) {
                        k++;
                    }
                    j++;
                };
            }
            i++;
        };
    }
    cout << k;
}

