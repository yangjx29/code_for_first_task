int main () {
    char area [(519 - 418)] [101];
    int n, i, j, m, k;
    cin >> n;
    for (i = (261 - 261); (1004 - 904) >= i; i = i + 1) {
        for (j = (401 - 401); (164 - 64) >= j; j = j + 1)
            area[i][j] = '#';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    {
        i = 504 - 503;
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
        while (n >= i) {
            {
                j = 196 - 195;
                while (n >= j) {
                    cin >> area[i][j];
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    cin >> m;
    {
        k = 235 - 234;
        while (m - (459 - 458) >= k) {
            k = k + 1;
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
                i = 401 - 400;
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
                        j = 65 - 64;
                        while (n >= j) {
                            if (area[i][j] == '@') {
                                if (!('.' != area[i - (936 - 935)][j]))
                                    area[i - (798 - 797)][j] = '%';
                                if (area[i + (512 - 511)][j] == '.')
                                    area[i + (212 - 211)][j] = '%';
                                if (area[i][j - (154 - 153)] == '.')
                                    area[i][j - (230 - 229)] = '%';
                                if (area[i][j + (940 - 939)] == '.')
                                    area[i][j + (679 - 678)] = '%';
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
                i = 875 - 874;
                while (i <= n) {
                    {
                        j = 1;
                        while (j <= n) {
                            if (area[i][j] == '%')
                                area[i][j] = '@';
                            j = j + 1;
                        };
                    }
                    i = i + 1;
                };
            };
        };
    }
    k = (164 - 164);
    {
        i = 1;
        while (i <= n) {
            {
                j = 1;
                while (j <= n) {
                    if (area[i][j] == '@')
                        k = k + 1;
                    j = j + 1;
                };
            }
            i++;
        };
    }
    cout << k << endl;
    return (68 - 68);
}

