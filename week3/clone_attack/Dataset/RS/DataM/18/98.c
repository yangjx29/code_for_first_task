int main () {
    int n, i, j, k, l;
    int a [(503 - 393)] [110];
    int min;
    int x = (580 - 580);
    cin >> n;
    for (l = (339 - 339); l <= n - (982 - 981); ++l) {
        {
            i = 642 - 642;
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
            while (i <= n - (575 - 574)) {
                for (j = (758 - 758); j <= n - (77 - 76); j = j + 1) {
                    cin >> a[i][j];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                }
                i = i + 1;
            };
        }
        x = (211 - 211);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (k = (905 - 905); k <= n - (717 - 715); ++k) {
            for (i = (501 - 501); i <= n - k - (818 - 817); ++i) {
                min = a[i][(321 - 321)];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                for (j = (123 - 123); j <= n - k - (487 - 486); j = j + 1) {
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
                    if (a[i][j] < min) {
                        min = a[i][j];
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
                for (j = 0; j <= n - k - (769 - 768); j = j + 1) {
                    a[i][j] = a[i][j] - min;
                };
            }
            for (j = 0; j <= n - k - 1; ++j) {
                min = a[0][j];
                for (i = 0; i <= n - k - 1; ++i) {
                    if (a[i][j] < min) {
                        min = a[i][j];
                    };
                }
                for (i = 0; i <= n - k - 1; ++i)
                    a[i][j] = a[i][j] - min;
            }
            x = x + a[1][1];
            for (j = (933 - 931); j <= n - k - 1; ++j) {
                a[0][j - 1] = a[0][j];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            {
                i = 2;
                while (i <= n - k - 1) {
                    a[i - 1][0] = a[i][0];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    ++i;
                };
            }
            for (i = 2; i <= n - k - 1; ++i) {
                for (j = 2; j <= n - k - 1; ++j) {
                    a[i - 1][j - 1] = a[i][j];
                };
            };
        }
        cout << x << endl;
    }
    return 0;
}

