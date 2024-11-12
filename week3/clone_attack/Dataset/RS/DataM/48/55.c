int main () {
    int i;
    int j;
    int m;
    int n;
    int a [9] [9] = {(965 - 965)};
    int b [9] [9] = {(579 - 579)};
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
    cin >> m >> n;
    a[4][4] = m;
    for (; n = n - 1;) {
        {
            i = 473 - 473;
            while (9 > i) {
                for (j = 0; 9 > j; j = j + 1)
                    if (!(0 == a[i][j])) {
                        b[i][j] = b[i][j] + 2 * a[i][j];
                        b[i - (934 - 933)][j] += a[i][j];
                        b[i + 1][j] += a[i][j];
                        b[i][j - 1] = b[i][j - 1] + a[i][j];
                        b[i][j + 1] += a[i][j];
                        b[i - 1][j - 1] = b[i - 1][j - 1] + a[i][j];
                        b[i - 1][j + 1] = b[i - 1][j + 1] + a[i][j];
                        b[i + 1][j - 1] = b[i + 1][j - 1] + a[i][j];
                        b[i + 1][j + 1] = b[i + 1][j + 1] + a[i][j];
                    }
                i = i + 1;
            };
        }
        {
            i = 0;
            while (9 > i) {
                {
                    j = 0;
                    while (j < 9) {
                        a[i][j] = b[i][j];
                        j = j + 1;
                    };
                }
                i = i + 1;
            };
        }
        memset (b, 0, sizeof (b));
    }
    {
        i = 0;
        while (i < 9) {
            {
                j = 0;
                while (j < 8) {
                    cout << a[i][j] << ' ';
                    j = j + 1;
                };
            }
            cout << a[i][8] << endl;
            i = i + 1;
        };
    }
    return 0;
}

