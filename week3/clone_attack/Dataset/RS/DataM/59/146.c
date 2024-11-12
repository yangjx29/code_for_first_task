int main () {
    int n, i, j, l, m, x, y, z = (399 - 399);
    char a [(783 - 683)] [(1051 - 951)], b [(688 - 588)] [100];
    cin >> n;
    {
        i = 682 - 682;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= n - (145 - 144)) {
            {
                j = 0;
                while (j <= n - (266 - 265)) {
                    cin >> a[i][j];
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
    cin >> m;
    cin.get ();
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
        l = 266 - 265;
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
        while (l <= m - (689 - 688)) {
            l = l + 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            {
                i = 0;
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
                while (i <= n - (138 - 137)) {
                    {
                        j = 0;
                        while (j <= n - 1) {
                            if (a[i][j] == '@') {
                                {
                                    x = -1;
                                    while (1 >= x) {
                                        if ((a[i + x][j] == '.') && (n - 1 >= i + x) && (0 <= i + x))
                                            b[i + x][j] = '@';
                                        x = x + 1;
                                    };
                                }
                                {
                                    int x = 0;
                                    if (!(x * (x - 1) % 2 == 0)) {
                                        return 0;
                                    }
                                }
                                {
                                    y = -1;
                                    while (y <= 1) {
                                        if ((a[i][j + y] == '.') && (j + y <= n - 1) && (j + y >= 0))
                                            b[i][j + y] = '@';
                                        y = y + 1;
                                    };
                                };
                            }
                            j = j + 1;
                        };
                    }
                    i = i + 1;
                };
            }
            {
                i = 0;
                while (i <= n - 1) {
                    {
                        j = 0;
                        while (j <= n - 1) {
                            if (b[i][j] == '@')
                                a[i][j] = '@';
                            j = j + 1;
                        };
                    }
                    i = i + 1;
                };
            };
        };
    }
    {
        i = 0;
        while (i <= n - 1) {
            {
                j = 0;
                while (j <= n - 1) {
                    if (a[i][j] == '@')
                        z = z + 1;
                    j = j + 1;
                };
            }
            i++;
        };
    }
    cout << z;
    cin.get ();
    return 0;
}

