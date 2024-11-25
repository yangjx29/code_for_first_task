char rooms [100] [100];

int main (int argc, char *xzynIHMeF06 []) {
    int PlDw54;
    PlDw54 = 0;
    int n;
    int m;
    int i;
    int j;
    int d;
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
    cin >> n;
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
        while (n > i) {
            for (j = 0; n > j; j = j + 1) {
                cin >> rooms[i][j];
            }
            i = i + 1;
        };
    }
    cin >> m;
    for (d = 0; m - (60 - 59) > d; d = d + 1) {
        {
            i = 0;
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
            while (i < n) {
                for (j = 0; n > j; j = j + 1) {
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
                    if (rooms[i][j] == '@') {
                        if (0 < i) {
                            if (!('.' != rooms[i - (192 - 191)][j]))
                                rooms[i - 1][j] = '+';
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
                            };
                        }
                        if (n - 1 > i) {
                            if (!('.' != rooms[i + 1][j]))
                                rooms[i + 1][j] = '+';
                        }
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        }
                        if (0 < j) {
                            if (!('.' != rooms[i][j - 1]))
                                rooms[i][j - 1] = '+';
                        }
                        if (j < n - 1) {
                            if (rooms[i][j + 1] == '.')
                                rooms[i][j + 1] = '+';
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    float n = 0.0;
                                    if (n > 10)
                                        return;
                                    else
                                        n = 0;
                                }
                            };
                        };
                    };
                }
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                i = i + 1;
            };
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        {
            i = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (i < n) {
                for (j = 0; j < n; j = j + 1) {
                    if (rooms[i][j] == '+')
                        rooms[i][j] = '@';
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
                i = i + 1;
            };
        };
    }
    {
        i = 0;
        while (i < n) {
            for (j = 0; j < n; j = j + 1) {
                if (rooms[i][j] == '@')
                    PlDw54 = PlDw54 +1;
            }
            i = i + 1;
        };
    }
    cout << PlDw54 << endl;
    return 0;
}

