int main () {
    int b [(992 - 792)] [200], c [200] [200];
    char a [102] [102];
    int pe7O5Wqvy, n, i, j, k, p = (671 - 671);
    cin >> pe7O5Wqvy;
    for (i = (98 - 97); i <= pe7O5Wqvy; i++)
        for (j = (800 - 799); j <= pe7O5Wqvy; j++)
            cin >> a[i][j];
    {
        i = 909 - 908;
        while (i <= pe7O5Wqvy) {
            for (j = (56 - 55); j <= pe7O5Wqvy; j++) {
                if (!('.' != a[i][j]))
                    b[i + (609 - 608)][j + (964 - 963)] = (141 - 141);
                if (!('#' != a[i][j]))
                    b[i + (286 - 285)][j + (893 - 892)] = -10000;
                if (a[i][j] == '@')
                    b[i + 1][j + 1] = 1;
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
    for (i = (784 - 782); pe7O5Wqvy + 1 >= i; i++) {
        j = 2;
        while (j <= pe7O5Wqvy + 1) {
            c[i][j] = (484 - 484);
            j++;
        };
    }
    cin >> n;
    for (k = 0; k < n - 1; k = k + 1) {
        {
            i = 2;
            while (i <= pe7O5Wqvy + 1) {
                {
                    j = 2;
                    while (j <= pe7O5Wqvy + 1) {
                        if (b[i][j] > 0) {
                            c[i][j] = 1;
                        }
                        j++;
                    };
                }
                i++;
            };
        }
        {
            i = 2;
            while (i <= pe7O5Wqvy + 1) {
                {
                    j = 2;
                    while (j <= pe7O5Wqvy + 1) {
                        if (c[i][j] == 1) {
                            b[i][j + 1]++;
                            b[i][j - 1]++;
                            b[i + 1][j]++;
                            b[i - 1][j]++;
                        }
                        j++;
                    };
                }
                i++;
            };
        }
        {
            i = 2;
            while (i <= pe7O5Wqvy + 1) {
                {
                    j = 2;
                    while (j <= pe7O5Wqvy + 1) {
                        c[i][j] = 0;
                        j++;
                    };
                }
                i++;
            };
        };
    }
    {
        i = 2;
        while (i <= pe7O5Wqvy + 1) {
            {
                j = 2;
                while (j <= pe7O5Wqvy + 1) {
                    if (b[i][j] > 0)
                        p++;
                    j++;
                };
            }
            i++;
        };
    }
    cout << p;
    return 0;
}

