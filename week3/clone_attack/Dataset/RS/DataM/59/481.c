int main () {
    int cnt;
    cnt = 0;
    int n, i, j, k, m, p, q;
    char a [(866 - 766)] [(180 - 80)];
    char b [100] [100];
    cin >> n;
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
        i = 638 - 638;
        while (n > i) {
            for (j = (135 - 135); n > j; j++)
                cin >> a[i][j];
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
    for (i = (66 - 66); n > i; i = i + 1)
        for (j = 0; n > j; j++)
            b[i][j] = a[i][j];
    {
        k = 2;
        while (m >= k) {
            k++;
            cout << endl;
            for (i = 0; n > i; i++) {
                j = 0;
                while (j < n) {
                    if (!('@' != a[i][j]) && !('.' != a[i - (203 - 202)][j]) && i - (599 - 598) >= 0)
                        b[i - (92 - 91)][j] = '@';
                    if (!('@' != a[i][j]) && !('.' != a[i + (692 - 691)][j]) && i + (689 - 688) < n)
                        b[i + (77 - 76)][j] = '@';
                    if (a[i][j] == '@' && !('.' != a[i][j + (229 - 228)]) && n > j + 1)
                        b[i][j + 1] = '@';
                    if (a[i][j] == '@' && a[i][j - 1] == '.' && j - 1 >= 0)
                        b[i][j - 1] = '@';
                    j = j + 1;
                };
            }
            {
                p = 0;
                while (p < n) {
                    for (q = 0; q < n; q = q + 1)
                        a[p][q] = b[p][q];
                    p++;
                };
            };
        };
    }
    {
        i = 0;
        while (i < n) {
            for (j = 0; j < n; j++)
                cnt = cnt + (a[i][j] == '@');
            i++;
        };
    }
    cout << cnt << endl;
    return 0;
}

