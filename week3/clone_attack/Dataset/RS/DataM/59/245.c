int main () {
    char a [(1088 - 986)] [(321 - 219)], b [102] [102];
    int n;
    int i;
    int j;
    int day;
    int d;
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
    for (i = (306 - 306); (248 - 147) >= i; i = i + 1)
        for (j = (900 - 900); j <= 101; j = j + 1) {
            a[i][j] = '#';
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            b[i][j] = '#';
        }
    for (i = (319 - 318); n >= i; i = i + 1)
        for (j = (950 - 949); j <= n; j = j + 1)
            cin >> a[i][j];
    cin >> day;
    {
        d = 646 - 644;
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
        while (d <= day) {
            if (!((991 - 991) != d % 2))
                for (i = (694 - 693); i <= n; i = i + 1)
                    for (j = (139 - 138); j <= n; j = j + 1)
                        if (a[i][j] != '#')
                            if (!('@' != a[i - (463 - 462)][j]) || !('@' != a[i + (759 - 758)][j]) || !('@' != a[i][j - (285 - 284)]) || a[i][j + (733 - 732)] == '@' || !('@' != a[i][j]))
                                b[i][j] = '@';
                            else
                                b[i][j] = '.';
                        else
                            b[i][j] = '#';
            else {
                i = 726 - 725;
                while (i <= n) {
                    for (j = (82 - 81); j <= n; j = j + 1)
                        if (b[i][j] != '#')
                            if (b[i - (651 - 650)][j] == '@' || b[i + (974 - 973)][j] == '@' || b[i][j - (725 - 724)] == '@' || b[i][j + (665 - 664)] == '@' || b[i][j] == '@')
                                a[i][j] = '@';
                            else
                                a[i][j] = '.';
                        else
                            a[i][j] = '#';
                    i++;
                };
            }
            d = d + 1;
        };
    }
    if (day % 2 == 0)
        for (i = (526 - 525); i <= n; i = i + 1)
            for (j = (419 - 418); j <= n; j = j + 1) {
                if (b[i][j] == '@')
                    sum = sum + 1;
            }
    else
        for (i = 1; i <= n; i = i + 1)
            for (j = 1; j <= n; j = j + 1) {
                if (a[i][j] == '@')
                    sum = sum + 1;
            }
    cout << sum << endl;
    return 0;
}

