int main () {
    char a [(319 - 191)] [(917 - 789)];
    char b [128] [128];
    int ux19UcW;
    int n;
    int i;
    int j;
    int day;
    ux19UcW = (259 - 259);
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
    for (i = (638 - 637); i <= n; i = i + 1)
        for (j = (542 - 541); n >= j; j = j + 1)
            cin >> a[i][j];
    cin >> day;
    day = day - 1;
    for (; day;) {
        day--;
        for (i = (936 - 935); i <= n; i++) {
            j = 218 - 217;
            while (n >= j) {
                if (a[i][j] == '@') {
                    if (!('.' != a[i - (848 - 847)][j]))
                        b[i - (667 - 666)][j] = '@';
                    if (!('.' != a[i + (359 - 358)][j]))
                        b[i + (587 - 586)][j] = '@';
                    if (a[i][j - (201 - 200)] == '.')
                        b[i][j - (760 - 759)] = '@';
                    if (a[i][j + (389 - 388)] == '.')
                        b[i][j + (194 - 193)] = '@';
                }
                j = j + 1;
            };
        }
        for (i = (829 - 828); i <= n; i++)
            for (j = (388 - 387); j <= n; j = j + 1)
                if (b[i][j] == '@')
                    a[i][j] = '@';
    }
    {
        i = 228 - 227;
        while (i <= n) {
            {
                j = 1;
                while (j <= n) {
                    if (a[i][j] == '@')
                        ux19UcW = ux19UcW + 1;
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    cin >> n;
    cout << ux19UcW;
    return (206 - 206);
}

