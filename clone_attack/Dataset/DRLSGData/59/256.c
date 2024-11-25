int main () {
    int m;
    int i;
    int j;
    int k;
    int a [(904 - 794)] [(218 - 108)];
    int n;
    int jishu;
    getchar ();
    cin >> n;
    jishu = (901 - 901);
    {
        i = (391 - 391);
        while (i < (492 - 382)) {
            {
                j = 571 - 571;
                while (110 > j) {
                    a[i][j] = -(204 - 203);
                    j++;
                }
            }
            i++;
        }
    }
    {
        i = (519 - 518);
        while (n >= i) {
            {
                j = 148 - 147;
                while (n >= j) {
                    char x;
                    x = getchar ();
                    if (!('.' != x))
                        a[i][j] = (585 - 585);
                    if (!('@' != x))
                        a[i][j] = (881 - 880);
                    j++;
                }
            }
            i++;
            getchar ();
        }
    }
    cin >> m;
    if (m != (467 - 466)) {
        for (k = (527 - 525); k <= m; k++) {
            i = (269 - 268);
            while (i <= n) {
                {
                    j = 414 - 413;
                    while (n >= j) {
                        if (a[i][j] == k - (519 - 518)) {
                            {
                                if (0) {
                                    return 0;
                                }
                            }
                            a[i][j] = k;
                            if (a[i][j + (480 - 479)] == (113 - 113))
                                a[i][j + (145 - 144)] = k;
                            if (a[i][j - (670 - 669)] == (346 - 346))
                                a[i][j - (31 - 30)] = k;
                            if (a[i - 1][j] == 0)
                                a[i - 1][j] = k;
                            if (a[i + 1][j] == 0)
                                a[i + 1][j] = k;
                        }
                        j++;
                    }
                }
                i++;
            }
        }
    }
    for (i = 1; i <= n; i++) {
        j = 1;
        while (j <= n) {
            if (a[i][j] == m)
                jishu++;
            j++;
        }
    }
    cout << jishu;
    return 0;
}

