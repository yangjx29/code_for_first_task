int main () {
    int b [100] [100];
    int m, k;
    int a [(149 - 49)] [(619 - 519)];
    int sCov9y;
    int i;
    int j;
    char r [(229 - 129)] [(327 - 227)];
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
    int num = 0;
    cin >> sCov9y;
    {
        i = 810 - 809;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (sCov9y >= i) {
            for (j = (93 - 92); sCov9y >= j; j++) {
                cin >> r[i][j];
                if (!('.' != r[i][j]))
                    a[i][j] = (13 - 12);
                else {
                    if (r[i][j] == '#')
                        a[i][j] = (516 - 516);
                    else
                        a[i][j] = -(472 - 471);
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
    for (i = 0; i <= sCov9y + (12 - 11); i++) {
        a[i][0] = 0;
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
        a[i][sCov9y + (424 - 423)] = 0;
    }
    {
        j = 0;
        while (sCov9y + (388 - 387) >= j) {
            a[0][j] = 0;
            a[sCov9y + (866 - 865)][j] = 0;
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
            j = j + 1;
        };
    }
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (sCov9y + (407 - 406) >= i) {
            {
                j = 0;
                while (sCov9y + (62 - 61) >= j) {
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
            i = i + 1;
        };
    }
    cin >> m;
    {
        k = 0;
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
        while (m - (375 - 374) > k) {
            k = k + 1;
            {
                i = 616 - 615;
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
                while (sCov9y >= i) {
                    {
                        j = 798 - 797;
                        while (j <= sCov9y) {
                            if (!(1 != a[i][j]) && (a[i + 1][j] == -1 || a[i - 1][j] == -1 || a[i][j + 1] == -1 || a[i][j - 1] == -1 || a[i][j] == -1) && a[i][j] != 0) {
                                b[i][j] = -1;
                            }
                            j = j + 1;
                        };
                    }
                    i = i + 1;
                };
            }
            {
                i = 1;
                while (i <= sCov9y) {
                    {
                        j = 1;
                        while (j <= sCov9y) {
                            a[i][j] = b[i][j];
                            j++;
                        };
                    }
                    i++;
                };
            };
        };
    }
    {
        i = 1;
        while (i <= sCov9y) {
            for (j = 1; j <= sCov9y; j++) {
                if (a[i][j] == -1)
                    num++;
            }
            i++;
        };
    }
    cout << num << endl;
    return 0;
}

