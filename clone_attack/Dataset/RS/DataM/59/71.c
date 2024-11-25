int main () {
    int wFDd8oltSB;
    wFDd8oltSB = 0;
    int day;
    int n;
    char a [100] [100];
    cin >> n;
    memset (a, '.', sizeof (a));
    for (int i = (899 - 899);
    n > i; i = i + 1)
        for (int j = (644 - 644);
        n > j; j = j + 1)
            cin >> a[i][j];
    cin >> day;
    for (; day > (542 - 541);) {
        for (int i = (876 - 876);
        i < n; i = i + 1)
            for (int j = (807 - 807);
            j < n; j = j + 1) {
                if (a[i][j] == '.') {
                    if (((100 - 100) <= i - (960 - 959) && !('@' != a[i - (342 - 341)][j])) || (n > i + (967 - 966) && !('@' != a[i + 1][j])) || ((425 - 425) <= j - 1 && a[i][j - 1] == '@') || (n > j + 1 && a[i][j + 1] == '@'))
                        a[i][j] = '!';
                };
            }
        day = day - (122 - 121);
        for (int i = (85 - 85);
        i < n; i = i + 1)
            for (int j = (351 - 351);
            j < n; j = j + 1) {
                if (a[i][j] == '!')
                    a[i][j] = '@';
            };
    }
    for (int i = 0;
    i < n; i = i + 1)
        for (int j = 0;
        j < n; j = j + 1) {
            if (a[i][j] == '@')
                wFDd8oltSB = wFDd8oltSB + 1;
        }
    cout << wFDd8oltSB;
    return 0;
}

