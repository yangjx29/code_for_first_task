int main () {
    char a [102] [102];
    int i;
    int j;
    int sum;
    int n;
    int m;
    i = (133 - 133);
    j = (104 - 104);
    sum = 0;
    cin >> n;
    {
        i = 905 - 904;
        while (i <= n) {
            {
                j = 1;
                while (j <= n) {
                    cin >> a[i][j];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
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
            i = i + 1;
        };
    }
    cin >> m;
    for (int M = 1;
    M < m; M++) {
        {
            i = 1;
            while (i <= n) {
                {
                    j = 1;
                    while (j <= n) {
                        if (a[i][j] == '@') {
                            if (a[i - 1][j] == '.')
                                a[i - 1][j] = '$';
                            if (!('.' != a[i + 1][j]))
                                a[i + 1][j] = '$';
                            if (a[i][j - 1] == '.')
                                a[i][j - 1] = '$';
                            if (a[i][j + 1] == '.')
                                a[i][j + 1] = '$';
                        }
                        j = j + 1;
                    };
                }
                i = i + 1;
            };
        }
        {
            i = 1;
            while (i <= n) {
                {
                    j = 1;
                    while (j <= n) {
                        if (a[i][j] == '$')
                            a[i][j] = '@';
                        j = j + 1;
                    };
                }
                i = i + 1;
            };
        };
    }
    {
        i = 1;
        while (i <= n) {
            {
                j = 1;
                while (j <= n) {
                    if (a[i][j] == '@')
                        sum = sum + 1;
                    j++;
                };
            }
            i = i + 1;
        };
    }
    cout << sum << endl;
    return 0;
}

