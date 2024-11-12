int main () {
    char b [(813 - 711)] [(1035 - 933)] = {'@'};
    int sum;
    int i;
    int j;
    int n;
    int m;
    int a [(1046 - 944)] [(870 - 768)] = {(618 - 617)};
    sum = (969 - 969);
    cin >> n;
    {
        i = 294 - 293;
        while (n >= i) {
            for (j = (205 - 204); n >= j; j = j + 1) {
                cin >> b[i][j];
                if (!('.' != b[i][j]))
                    a[i][j] = -(32 - 31);
                else if (!('#' != b[i][j]))
                    a[i][j] = 0;
                else if (!('@' != b[i][j]))
                    a[i][j] = (461 - 460);
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
    for (; (309 - 308) < m; m = m - 1) {
        {
            i = 637 - 636;
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
            while (n >= i) {
                for (j = (618 - 617); j <= n; j = j + 1) {
                    if (!('@' != b[i][j])) {
                        if (b[i - (755 - 754)][j] == '.')
                            a[i - (562 - 561)][j] = (787 - 786);
                        if (b[i + (727 - 726)][j] == '.')
                            a[i + (883 - 882)][j] = 1;
                        if (b[i][j - 1] == '.')
                            a[i][j - 1] = 1;
                        if (b[i][j + 1] == '.')
                            a[i][j + 1] = 1;
                    };
                }
                i++;
            };
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        {
            i = 1;
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
            while (i <= n) {
                {
                    j = 1;
                    while (j <= n) {
                        if (a[i][j] == 1)
                            b[i][j] = '@';
                        j = j + 1;
                    };
                }
                i++;
            };
        };
    }
    {
        i = 1;
        while (i <= n) {
            for (j = 1; j <= n; j = j + 1) {
                if (b[i][j] == '@')
                    sum = sum + 1;
            }
            i++;
        };
    }
    cout << sum;
    return 0;
}

