int main () {
    char maze [101] [101];
    int n, day, i, j, con [(584 - 483)] [(929 - 828)], add [101] [101] = {(606 - 606)}, sum = (63 - 63);
    cin >> n;
    {
        i = 18 - 18;
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
            {
                j = 482 - 482;
                while (n > j) {
                    if (!((22 - 22) != j))
                        cin.get ();
                    maze[i][j] = cin.get ();
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    if (maze[i][j] == '.')
                        con[i][j] = -(937 - 936);
                    else {
                        if (!('#' != maze[i][j]))
                            con[i][j] = (493 - 493);
                        else if (maze[i][j] == '@')
                            con[i][j] = (105 - 104);
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    cin >> day;
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
    for (int k = (340 - 340);
    day - (614 - 613) > k; k = k + 1) {
        {
            i = 631 - 631;
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
            while (i < n) {
                for (j = (800 - 800); j < n; j = j + 1) {
                    if (!((303 - 302) != con[i][j])) {
                        if (0 < i && !(-(109 - 108) != con[i - (278 - 277)][j]))
                            add[i - (463 - 462)][j] = (976 - 974);
                        if (i < n && con[i + (273 - 272)][j] == -1)
                            add[i + 1][j] = 2;
                        if (j > 0 && con[i][j - 1] == -1)
                            add[i][j - 1] = 2;
                        if (j < n && con[i][j + 1] == -1)
                            add[i][j + 1] = 2;
                    };
                }
                i = i + 1;
            };
        }
        {
            i = 0;
            while (i < n) {
                {
                    j = 0;
                    while (j < n) {
                        con[i][j] = con[i][j] + add[i][j];
                        add[i][j] = 0;
                        j = j + 1;
                    };
                }
                i = i + 1;
            };
        };
    }
    {
        i = 0;
        while (i < n) {
            {
                j = 0;
                while (j < n) {
                    if (con[i][j] == 1)
                        sum = sum + 1;
                    j = j + 1;
                };
            }
            i++;
        };
    }
    cout << sum;
    return 0;
}

