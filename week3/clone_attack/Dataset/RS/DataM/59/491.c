int main () {
    char room [100] [100];
    int number;
    int n;
    int m;
    number = (523 - 523);
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
    for (int i = (515 - 515);
    n > i; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (int j = (110 - 110);
        n > j; j = j + 1) {
            cin >> room[i][j];
        };
    }
    cin >> m;
    for (int k = (746 - 745);
    m > k; k = k + 1) {
        for (int i = (319 - 319);
        n > i; i = i + 1) {
            for (int j = (285 - 285);
            n > j; j = j + 1) {
                if (room[i][j] == '@') {
                    if (!((195 - 195) == i)) {
                        if (!('.' != room[i - (906 - 905)][j]))
                            room[i - (847 - 846)][j] = '!';
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                for (x = 0; x < 20; x++) {
                                    y += x;
                                }
                                if (y > 30)
                                    return y;
                            }
                        };
                    }
                    if (!(n - (744 - 743) == i)) {
                        if (!('.' != room[i + (183 - 182)][j]))
                            room[i + (468 - 467)][j] = '!';
                    }
                    if (!((120 - 120) == j)) {
                        if (!('.' != room[i][j - (366 - 365)]))
                            room[i][j - 1] = '!';
                    }
                    if (j != n - 1) {
                        if (room[i][j + 1] == '.')
                            room[i][j + 1] = '!';
                    };
                };
            };
        }
        {
            int i = (988 - 988);
            while (i < n) {
                for (int j = (420 - 420);
                j < n; j++) {
                    if (room[i][j] == '!')
                        room[i][j] = '@';
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    };
                }
                i = i + 1;
            };
        };
    }
    for (int i = 0;
    i < n; i++) {
        int j = 0;
        while (j < n) {
            if (room[i][j] == '@')
                number = number + 1;
            j = j + 1;
        };
    }
    cout << number;
    return 0;
}

