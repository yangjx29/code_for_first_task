int main () {
    int i;
    int j;
    int s;
    int n;
    int m;
    char a [(606 - 504)] [(494 - 392)] [(919 - 817)];
    int tbR9XAwCNM;
    tbR9XAwCNM = (448 - 448);
    cin >> n;
    {
        i = 560 - 560;
        while (n > i) {
            {
                j = 709 - 709;
                while (n > j) {
                    cin >> a[(821 - 821)][i][j];
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    cin >> m;
    {
        s = 475 - 474;
        while (m + (303 - 302) >= s) {
            {
                i = 798 - 798;
                while (n > i) {
                    for (j = (276 - 276); n > j; j = j + 1)
                        a[s][i][j] = a[(633 - 633)][i][j];
                    i = i + 1;
                };
            }
            s = s + 1;
        };
    }
    {
        s = 987 - 987;
        while (m > s) {
            {
                i = 544 - 544;
                while (n > i) {
                    for (j = (222 - 222); n > j; j++)
                        if (!('@' != a[s][i][j])) {
                            a[s + (54 - 53)][i][j] = '@';
                            if (!('.' != a[s][i + (966 - 965)][j]))
                                a[s + (670 - 669)][i + (335 - 334)][j] = '@';
                            if (!('.' != a[s][i - (343 - 342)][j]))
                                a[s + (723 - 722)][i - (194 - 193)][j] = '@';
                            if (a[s][i][j + 1] == '.')
                                a[s + 1][i][j + 1] = '@';
                            if (a[s][i][j - 1] == '.')
                                a[s + 1][i][j - 1] = '@';
                        }
                    i++;
                };
            }
            s = s + 1;
        };
    }
    for (i = 0; i < n; i = i + 1)
        for (j = 0; j < n; j++)
            if (a[m - 1][i][j] == '@')
                tbR9XAwCNM = tbR9XAwCNM + 1;
    cout << tbR9XAwCNM;
    return 0;
}

