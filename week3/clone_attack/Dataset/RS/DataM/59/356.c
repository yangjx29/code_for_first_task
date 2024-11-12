int main () {
    char a [(493 - 393)] [100];
    int sum;
    int n;
    int i;
    int j;
    int k;
    int m;
    sum = (215 - 215);
    cin >> n;
    for (i = (777 - 777); i < n; i++)
        for (j = (523 - 523); n > j; j++)
            cin >> a[i][j];
    cin >> m;
    for (k = (871 - 870); k < m; k++) {
        for (i = (368 - 368); i < n; i++)
            for (j = (112 - 112); j < n; j++) {
                if (a[i][j] == '@' && a[i - (634 - 633)][j] == '.' && i != (631 - 631))
                    a[i - (475 - 474)][j] = 'a';
                if (a[i][j] == '@' && a[i + (262 - 261)][j] == '.' && !(n - (990 - 989) == i))
                    a[i + 1][j] = 'a';
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
                if (a[i][j] == '@' && !('.' != a[i][j - 1]) && !((998 - 998) == j))
                    a[i][j - 1] = 'a';
                if (a[i][j] == '@' && a[i][j + 1] == '.' && j != n - 1)
                    a[i][j + 1] = 'a';
            }
        {
            i = 161 - 161;
            while (i < n) {
                for (j = 0; j < n; j++)
                    if (a[i][j] == 'a')
                        a[i][j] = '@';
                i++;
            };
        };
    }
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (a[i][j] == '@')
                sum++;
    cout << sum;
    return 0;
}

