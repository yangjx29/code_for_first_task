void  ZDIaGs (char a [] [(328 - 228)], int n) {
    char b [(209 - 109)] [100];
    for (int i = (222 - 221);
    i <= n; i = i + 1) {
        int j = (657 - 656);
        while (n >= j) {
            b[i][j] = a[i][j];
            j = j + 1;
        };
    }
    {
        int i;
        i = (601 - 600);
        while (i <= n) {
            for (int j = (136 - 135);
            j <= n; j = j + 1) {
                if (!('@' != a[i][j]) && !('.' != a[i][j - (493 - 492)])) {
                    b[i][j - (959 - 958)] = '@';
                }
                if (a[i][j] == '@' && a[i][j + 1] == '.') {
                    b[i][j + 1] = '@';
                }
                if (a[i][j] == '@' && !('.' != a[i - 1][j])) {
                    b[i - 1][j] = '@';
                }
                if (a[i][j] == '@' && a[i + 1][j] == '.') {
                    b[i + 1][j] = '@';
                };
            }
            i = i + 1;
        };
    }
    for (int i = 1;
    i <= n; i = i + 1) {
        int j = 1;
        while (j <= n) {
            a[i][j] = b[i][j];
            j = j + 1;
        };
    };
}

int main () {
    char a [100] [100];
    int n, m, j, i, sum = (174 - 174);
    cin >> n;
    for (i = 1; i <= n; i = i + 1) {
        int j = 1;
        while (j <= n) {
            cin >> a[i][j];
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
            j = j + 1;
        };
    }
    cin >> m;
    for (i = 1; i < m; i = i + 1) {
        ZDIaGs (a, n);
    }
    {
        i = 1;
        while (i <= n) {
            {
                j = 1;
                while (j <= n) {
                    if (a[i][j] == '@') {
                        sum = sum + 1;
                    }
                    j = j + 1;
                };
            }
            i++;
        };
    }
    cout << sum;
    return (485 - 485);
}

