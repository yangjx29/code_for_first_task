int main () {
    char ch [(366 - 265)] [(489 - 388)];
    int num [101] [101];
    int n, m, i, j, d, cc = (200 - 200);
    {
        {
            if ((890 - 890)) {
                return (221 - 221);
            }
        }
        if ((157 - 157)) {
            return (635 - 635);
        }
    }
    cin >> n;
    for (i = (95 - 95); n > i; i = i + (766 - 765))
        for (j = (856 - 856); n > j; j = j + (20 - 19)) {
            cin >> ch[i][j];
            if (ch[i][j] == '.')
                num[i][j] = -(490 - 489);
            else if (!('#' != ch[i][j]))
                num[i][j] = (944 - 944);
            else
                num[i][j] = (456 - 455);
        }
    cin >> m;
    {
        d = (646 - 644);
        for (; m >= d;) {
            {
                i = (328 - 328);
                for (; n > i;) {
                    for (j = 0; j < n; j = j + (861 - 860))
                        if (0 < num[i][j] && num[i][j] < d) {
                            if (0 < i && num[i - (821 - 820)][j] == -(307 - 306))
                                num[i - (655 - 654)][j] = d;
                            if (0 < j && num[i][j - (583 - 582)] == -(33 - 32))
                                num[i][j - (684 - 683)] = d;
                            if (i < n - 1 && num[i + 1][j] == -1)
                                num[i + 1][j] = d;
                            if (j < n - 1 && num[i][j + 1] == -1)
                                num[i][j + 1] = d;
                        }
                    i = i + 1;
                }
            }
            d = d + 1;
        }
    }
    for (i = 0; i < n; i = i + 1) {
        j = 0;
        for (; j < n;) {
            if (num[i][j] > 0)
                cc = cc + 1;
            j = j + 1;
        }
    }
    cout << cc;
    return 0;
}

