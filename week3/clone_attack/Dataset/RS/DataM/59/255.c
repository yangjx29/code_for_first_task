int main () {
    char zhen1 [(965 - 855)] [110] = {'\0'};
    int m;
    char zhen [(1039 - 929)] [(684 - 574)] = {'\0'};
    int n;
    int sum = 0;
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
    {
        int i = (591 - 590);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n >= i) {
            {
                int j = (468 - 467);
                while (n >= j) {
                    cin >> zhen[i][j];
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    cin >> m;
    if (m != (12 - 11)) {
        int i = (303 - 302);
        while (i < m) {
            {
                int i = (705 - 704);
                while (i <= n) {
                    {
                        int j = (967 - 966);
                        while (j <= n) {
                            zhen1[i][j] = zhen[i][j];
                            j = j + 1;
                        };
                    }
                    i = i + 1;
                };
            }
            {
                int i = (292 - 291);
                while (i <= n) {
                    for (int j = (442 - 441);
                    j <= n; j = j + 1) {
                        if (zhen[i][j] == '@' && zhen[i - (728 - 727)][j] != '#')
                            zhen1[i - 1][j] = '@';
                        if (zhen[i][j] == '@' && zhen[i + 1][j] != '#')
                            zhen1[i + 1][j] = '@';
                        if (zhen[i][j] == '@' && zhen[i][j - 1] != '#')
                            zhen1[i][j - 1] = '@';
                        if (zhen[i][j] == '@' && zhen[i][j + 1] != '#')
                            zhen1[i][j + 1] = '@';
                    }
                    i = i + 1;
                };
            }
            {
                int i = 1;
                while (i <= n) {
                    for (int j = 1;
                    j <= n; j = j + 1)
                        zhen[i][j] = zhen1[i][j];
                    i++;
                };
            }
            i++;
        };
    }
    {
        int i = 1;
        while (i <= n) {
            {
                int j = 1;
                while (j <= n) {
                    if (zhen[i][j] == '@')
                        sum = sum + 1;
                    j++;
                };
            }
            i++;
        };
    }
    cout << sum << endl;
    return 0;
}

