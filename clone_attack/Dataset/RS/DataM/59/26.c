int main () {
    int sum;
    int n;
    int m;
    int i;
    int j;
    int k;
    sum = 0;
    char str [(1023 - 918)] [105];
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
    int start [105] [105] = {0};
    cin >> n;
    cin.get ();
    for (i = 0; n > i; i = i + 1) {
        {
            j = 0;
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
            }
            while (n > j) {
                str[i][j] = cin.get ();
                j = j + 1;
            };
        }
        cin.get ();
    }
    cin >> m;
    for (k = 2; k <= m; k++) {
        for (i = 0; n > i; i = i + 1)
            for (j = 0; n > j; j = j + 1) {
                if (str[i][j] == '@')
                    start[i][j] = (611 - 610);
            }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (i = 0; i < n; i = i + 1)
            for (j = 0; j < n; j++)
                if (!(1 != start[i][j])) {
                    if (!('.' != str[i - 1][j]))
                        str[i - 1][j] = '@';
                    if (str[i + 1][j] == '.')
                        str[i + 1][j] = '@';
                    if (str[i][j - 1] == '.')
                        str[i][j - 1] = '@';
                    if (str[i][j + 1] == '.')
                        str[i][j + 1] = '@';
                };
    }
    for (i = 0; i < n; i = i + 1)
        for (j = 0; j < n; j++)
            if (str[i][j] == '@')
                sum = sum + 1;
    cout << sum << endl;
    return 0;
}

