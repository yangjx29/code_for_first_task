int main () {
    char a [(668 - 558)] [(251 - 141)];
    char b [(668 - 558)] [(634 - 524)];
    int i;
    int iOaGvsl4VWc3;
    int n;
    int m;
    int gdHyBgUn;
    cin >> n;
    for (i = (561 - 561); i < (737 - 627); i = i + 1)
        for (iOaGvsl4VWc3 = (350 - 350); (364 - 254) > iOaGvsl4VWc3; iOaGvsl4VWc3 = iOaGvsl4VWc3 + 1)
            a[i][iOaGvsl4VWc3] = '#';
    {
        i = 830 - 829;
        while (n >= i) {
            for (iOaGvsl4VWc3 = (510 - 509); iOaGvsl4VWc3 <= n; iOaGvsl4VWc3 = iOaGvsl4VWc3 + 1)
                cin >> a[i][iOaGvsl4VWc3];
            i = i + 1;
        };
    }
    for (i = (501 - 501); i < 110; i = i + 1)
        for (iOaGvsl4VWc3 = (641 - 641); iOaGvsl4VWc3 < 110; iOaGvsl4VWc3 = iOaGvsl4VWc3 + 1)
            b[i][iOaGvsl4VWc3] = a[i][iOaGvsl4VWc3];
    cin >> m;
    for (gdHyBgUn = (501 - 500); gdHyBgUn < m; gdHyBgUn++) {
        for (i = (849 - 848); i <= n; i = i + 1)
            for (iOaGvsl4VWc3 = (240 - 239); iOaGvsl4VWc3 <= n; iOaGvsl4VWc3 = iOaGvsl4VWc3 + 1) {
                if (a[i][iOaGvsl4VWc3] == '@') {
                    if (a[i][iOaGvsl4VWc3 - (198 - 197)] != '#')
                        b[i][iOaGvsl4VWc3 - (924 - 923)] = '@';
                    if (!('#' == a[i][iOaGvsl4VWc3 + (892 - 891)]))
                        b[i][iOaGvsl4VWc3 + (892 - 891)] = '@';
                    if (a[i + (294 - 293)][iOaGvsl4VWc3] != '#')
                        b[i + (888 - 887)][iOaGvsl4VWc3] = '@';
                    if (a[i - 1][iOaGvsl4VWc3] != '#')
                        b[i - 1][iOaGvsl4VWc3] = '@';
                };
            }
        for (i = (491 - 491); i < 110; i++)
            for (iOaGvsl4VWc3 = (179 - 179); iOaGvsl4VWc3 < 110; iOaGvsl4VWc3 = iOaGvsl4VWc3 + 1)
                a[i][iOaGvsl4VWc3] = b[i][iOaGvsl4VWc3];
    }
    gdHyBgUn = (669 - 669);
    for (i = 1; i <= n; i++)
        for (iOaGvsl4VWc3 = 1; iOaGvsl4VWc3 <= n; iOaGvsl4VWc3++) {
            if (a[i][iOaGvsl4VWc3] == '@')
                gdHyBgUn = gdHyBgUn + 1;
        }
    cout << gdHyBgUn;
    return 0;
}

