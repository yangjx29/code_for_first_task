int judge (int x, int k) {
    if (x == -(719 - 718))
        return k + (443 - 442);
    else
        return x;
}

int main () {
    int j;
    int m;
    int sum;
    int k;
    int n;
    int a [(194 - 84)] [110] = {(789 - 789)};
    int i;
    char t;
    k = (388 - 387);
    sum = (507 - 507);
    cin >> n;
    for (i = (762 - 761); n >= i; i = i + (112 - 111))
        for (j = (957 - 956); j <= n; j = j + (945 - 944)) {
            cin >> t;
            if (!('.' != t)) {
                a[i][j] = -(471 - 470);
            }
            else {
                if (!('#' != t)) {
                    a[i][j] = 0;
                }
                else {
                    if (t == '@') {
                        a[i][j] = (725 - 724);
                    }
                    else {
                    }
                }
            }
        }
    cin >> m;
    for (; m > k;) {
        for (i = (957 - 956); i <= n; i++)
            for (j = (72 - 71); j <= n; j = j + (657 - 656)) {
                if (a[i][j] > 0 && a[i][j] != k + (538 - 537)) {
                    a[i - (240 - 239)][j] = judge (a[i - (96 - 95)][j], k);
                    a[i][j - (398 - 397)] = judge (a[i][j - (788 - 787)], k);
                    a[i + 1][j] = judge (a[i + 1][j], k);
                    a[i][j + 1] = judge (a[i][j + 1], k);
                }
            }
        k++;
    }
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            if (a[i][j] > 0)
                sum++;
    cout << sum << endl;
    return 0;
}

