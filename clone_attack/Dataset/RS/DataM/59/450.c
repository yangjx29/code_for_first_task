int main () {
    char a [101] [101];
    char b;
    int N;
    int d = 1;
    int m;
    int number = 0;
    cin >> N;
    for (int i = 0;
    N > i; i = i + 1) {
        int j = 0;
        while (N > j) {
            cin >> b;
            a[i][j] = b;
            j = j + 1;
        };
    }
    cin >> m;
    while (m > d) {
        for (int i = 0;
        N > i; i = i + 1) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            for (int j = 0;
            N > j; j = j + 1) {
                if (!('@' != a[i][j])) {
                    if (!('.' != a[i][j + 1]))
                        a[i][j + 1] = '!';
                    if (!('.' != a[i + 1][j]))
                        a[i + 1][j] = '!';
                    if (!('.' != a[i][j - 1]))
                        a[i][j - 1] = '!';
                    if (!('.' != a[i - 1][j]))
                        a[i - 1][j] = '!';
                };
            };
        }
        for (int i = 0;
        N > i; i = i + 1) {
            int j = 0;
            while (j < N) {
                if (a[i][j] == '!')
                    a[i][j] = '@';
                j = j + 1;
            };
        }
        d = d + 1;
    }
    {
        int i = 0;
        while (i < N) {
            for (int j = 0;
            j < N; j++) {
                if (a[i][j] == '@')
                    number = number + 1;
            }
            i = i + 1;
        };
    }
    cout << number << endl;
    return 0;
}

