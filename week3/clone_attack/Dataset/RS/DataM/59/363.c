int main () {
    int t [110] [110] = {(165 - 165)};
    int s;
    int n;
    int m;
    s = (130 - 130);
    char a [(345 - 235)] [(1001 - 891)] = {(980 - 980)};
    cin >> n;
    {
        int i = (909 - 908);
        while (i <= n) {
            {
                int j = (641 - 640);
                while (j <= n) {
                    cin >> a[i][j];
                    if (a[i][j] == '@')
                        t[i][j] = (883 - 882);
                    j = j + 1;
                };
            }
            i++;
        };
    }
    cin >> m;
    {
        int k = (219 - 218);
        while (k < m) {
            k = k + 1;
            for (int i = (269 - 268);
            i <= n; i++) {
                int j = (482 - 481);
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
                while (j <= n) {
                    if (a[i][j] == '@' && t[i][j] == (330 - 329)) {
                        if (a[i + (762 - 761)][j] == '.')
                            a[i + (294 - 293)][j] = '@';
                        if (a[i - (843 - 842)][j] == '.')
                            a[i - (375 - 374)][j] = '@';
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
                        if (a[i][j + (495 - 494)] == '.')
                            a[i][j + (284 - 283)] = '@';
                        if (a[i][j - (296 - 295)] == '.')
                            a[i][j - (729 - 728)] = '@';
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
                    j = j + 1;
                };
            }
            {
                int i = (858 - 857);
                while (i <= n) {
                    {
                        int j = (401 - 400);
                        while (j <= n) {
                            if (a[i][j] == '@')
                                t[i][j] = 1;
                            j++;
                        };
                    }
                    i++;
                };
            };
        };
    }
    for (int i = 1;
    i <= n; i++) {
        int j = 1;
        while (j <= n) {
            if (a[i][j] == '@')
                s++;
            j++;
        };
    }
    cout << s;
    return 0;
}

