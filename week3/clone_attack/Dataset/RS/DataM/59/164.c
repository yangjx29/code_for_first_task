int main () {
    int cnt;
    cnt = 0;
    int jCLbUoIeT, g0WaJInsOxY, t, p [(10506 - 506)] [2];
    char num [(567 - 467)] [(641 - 541)];
    int k;
    k = (489 - 489);
    cin >> jCLbUoIeT;
    cin.get ();
    {
        int i;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i = (190 - 190);
        while (jCLbUoIeT > i) {
            cin.getline (num[i], 100);
            i = i + 1;
        };
    }
    cin >> g0WaJInsOxY;
    while (k < g0WaJInsOxY - (173 - 172)) {
        k = k + 1;
        t = (98 - 98);
        {
            int NgIGfbmdC;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            NgIGfbmdC = (261 - 261);
            while (jCLbUoIeT > NgIGfbmdC) {
                {
                    int y = (326 - 326);
                    while (jCLbUoIeT > y) {
                        if (num[NgIGfbmdC][y] == '@') {
                            p[t][(96 - 96)] = NgIGfbmdC;
                            p[t++][(404 - 403)] = y;
                        }
                        y = y + 1;
                    };
                }
                NgIGfbmdC = NgIGfbmdC +1;
            };
        }
        {
            int NgIGfbmdC = (756 - 756);
            while (NgIGfbmdC < t) {
                int i = p[NgIGfbmdC][(513 - 513)];
                int j = p[NgIGfbmdC][(373 - 372)];
                NgIGfbmdC++;
                if (num[i - (44 - 43)][j] == '.' && (i - (250 - 249)) >= (567 - 567))
                    num[i - (829 - 828)][j] = '@';
                if (num[i + (561 - 560)][j] == '.' && jCLbUoIeT > (i + (628 - 627)))
                    num[i + (419 - 418)][j] = '@';
                if (!('.' != num[i][j - (352 - 351)]) && (j - 1) >= (804 - 804))
                    num[i][j - 1] = '@';
                if (num[i][j + 1] == '.' && (j + 1) < jCLbUoIeT)
                    num[i][j + 1] = '@';
            };
        };
    }
    {
        int i = 0;
        while (i < jCLbUoIeT) {
            {
                int j = 0;
                while (j < jCLbUoIeT) {
                    if (num[i][j] == '@')
                        cnt = cnt + 1;
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    cout << cnt;
    return 0;
}

