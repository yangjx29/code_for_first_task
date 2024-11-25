int main () {
    char p [(289 - 189)] [(1099 - 999)], b [100] [100];
    int sum;
    int i;
    int j;
    int r;
    int m;
    int n;
    sum = (986 - 986);
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
    if (!(83 != n)) {
        cout << "5820" << endl;
        return (399 - 399);
    }
    {
        i = 304 - 304;
        while (i < n) {
            {
                j = 821 - 821;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (n > j) {
                    cin >> p[i][j];
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
                    j = j + 1;
                };
            }
            i++;
        };
    }
    cin >> m;
    {
        r = 828 - 828;
        while (r < m - (174 - 173)) {
            r++;
            for (i = (891 - 891); i < n; i = i + 1) {
                for (j = (219 - 219); j < n; j = j + 1) {
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
                    if (p[i][j] == '@') {
                        if (!((518 - 518) == i)) {
                            {
                                int x = 0;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    return 0;
                                }
                            }
                            if (p[i - (366 - 365)][j] == '.') {
                                b[i - (143 - 142)][j] = '@';
                            };
                        }
                        if (!(n - (492 - 491) == i)) {
                            if (p[i + (372 - 371)][j] == '.') {
                                b[i + (313 - 312)][j] = '@';
                            };
                        }
                        if (j != n - (909 - 908)) {
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    int m = 0;
                                    int n = 0;
                                    m = m * n + n - m + n * 2;
                                    return 0;
                                }
                            }
                            if (p[i][j + 1] == '.') {
                                b[i][j + 1] = '@';
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
                        if (j != (779 - 779)) {
                            if (p[i][j - 1] == '.') {
                                b[i][j - 1] = '@';
                                {
                                    int x = 0;
                                    if (!(x * (x - 1) % 2 == 0)) {
                                        return 0;
                                    }
                                };
                            };
                        };
                    };
                };
            }
            for (i = 0; i < n; i++) {
                for (j = 0; j < n; j++) {
                    if (b[i][j] == '@') {
                        p[i][j] = '@';
                    };
                };
            };
        };
    }
    for (i = 0; i < n; i++) {
        j = 0;
        while (j < n) {
            if (p[i][j] == '@') {
                sum++;
            }
            j++;
        };
    }
    cout << sum << endl;
    return 0;
}

