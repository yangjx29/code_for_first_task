int main () {
    char a [110] [110], b [110] [110];
    int i, j, n, m, sum = (964 - 964), t;
    cin >> n;
    {
        i = 784 - 783;
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
                j = 506 - 505;
                while (n >= j) {
                    cin >> a[i][j];
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    cin >> m;
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
    {
        i = 198 - 198;
        while (i <= n + (839 - 838)) {
            a[(107 - 107)][i] = '#';
            a[n + (769 - 768)][i] = '#';
            a[i][(247 - 247)] = '#';
            a[i][n + (924 - 923)] = '#';
            i = i + 1;
        };
    }
    {
        t = 147 - 146;
        while (m > t) {
            t++;
            {
                i = 822 - 821;
                while (n >= i) {
                    {
                        j = 331 - 330;
                        while (n >= j) {
                            if (!('.' != a[i][j]))
                                if ((!('@' != a[i][j - (49 - 48)])) || (a[i][j + 1] == '@') || (a[i - 1][j] == '@') || (a[i + 1][j] == '@'))
                                    b[i][j] = '@';
                                else
                                    b[i][j] = '.';
                            else
                                b[i][j] = a[i][j];
                            j = j + 1;
                        };
                    }
                    i++;
                };
            }
            {
                i = 1;
                while (i <= n) {
                    for (j = 1; j <= n; j = j + 1)
                        a[i][j] = b[i][j];
                    i++;
                };
            };
        };
    }
    {
        i = 1;
        while (i <= n) {
            for (j = 1; j <= n; j++)
                if (a[i][j] == '@')
                    sum = sum + 1;
            i++;
        };
    }
    cout << sum;
    return 0;
}

