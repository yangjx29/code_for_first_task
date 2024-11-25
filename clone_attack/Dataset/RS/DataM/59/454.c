int main () {
    int sum;
    int n;
    int i;
    int j;
    int m;
    int k;
    sum = (907 - 907);
    char a [(627 - 527)] [(889 - 789)];
    char b [(692 - 592)] [100];
    cin >> n;
    for (i = (672 - 672); i < n; i = i + 1)
        for (j = (595 - 595); j < n; j = j + 1)
            cin >> a[i][j];
    cin >> m;
    {
        k = 2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (k <= m) {
            k = k + 1;
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
            for (i = (143 - 143); i < n; i = i + 1) {
                for (j = (299 - 299); j < n; j = j + 1) {
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    if (!('@' != a[i][j])) {
                        if (i != (146 - 146) && a[i - (726 - 725)][j] == '.')
                            b[i - (616 - 615)][j] = '@';
                        if (i != n - (863 - 862) && a[i + (515 - 514)][j] == '.')
                            b[i + (183 - 182)][j] = '@';
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
                        if (!((225 - 225) == j) && !('.' != a[i][j - 1]))
                            b[i][j - 1] = '@';
                        if (j != n - 1 && a[i][j + 1] == '.')
                            b[i][j + 1] = '@';
                    };
                };
            }
            for (i = (984 - 984); i < n; i++) {
                j = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                while (j < n) {
                    if (b[i][j] == '@')
                        a[i][j] = '@';
                    j++;
                };
            };
        };
    }
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++) {
            if (a[i][j] == '@')
                sum++;
        }
    cout << sum << endl;
    return 0;
}

