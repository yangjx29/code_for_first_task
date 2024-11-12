int main () {
    int count;
    int n;
    int m;
    int i;
    int j;
    int flag [110] [110];
    count = 0;
    char ch [110] [110];
    cin >> n;
    memset (ch, '#', sizeof (ch));
    {
        i = 1;
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
                j = 1;
                while (n >= j) {
                    cin >> ch[i][j];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    cin >> m;
    memset (flag, 0, sizeof (flag));
    while (m > 1) {
        {
            i = 1;
            while (i <= n) {
                {
                    j = 1;
                    while (n >= j) {
                        if (!('@' != ch[i][j]) && !(0 != flag[i][j])) {
                            if (ch[i - 1][j] == '.') {
                                ch[i - 1][j] = '@';
                                flag[i - 1][j] = 1;
                            }
                            if (ch[i + 1][j] == '.') {
                                ch[i + 1][j] = '@';
                                flag[i + 1][j] = 1;
                            }
                            if (ch[i][j - 1] == '.') {
                                ch[i][j - 1] = '@';
                                flag[i][j - 1] = 1;
                            }
                            if (ch[i][j + 1] == '.') {
                                ch[i][j + 1] = '@';
                                flag[i][j + 1] = 1;
                            };
                        }
                        j = j + 1;
                    };
                }
                i = i + 1;
            };
        }
        memset (flag, 0, sizeof (flag));
        m = m - 1;
    }
    {
        i = 1;
        while (i <= n) {
            {
                j = 1;
                while (j <= n) {
                    if (ch[i][j] == '@')
                        count++;
                    j++;
                };
            }
            i++;
        };
    }
    cout << count << endl;
    return 0;
}

