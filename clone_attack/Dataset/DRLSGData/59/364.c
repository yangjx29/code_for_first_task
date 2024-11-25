int main () {
    char exp [100] [100];
    int i, j, k, n, m, a [100] [100] = {0};
    cin >> n;
    for (i = 0; i < n; i++) {
        j = 0;
        while (n > j) {
            cin >> exp[i][j];
            if (!('#' != exp[i][j]))
                a[i][j] = -1;
            if (!('@' != exp[i][j]))
                a[i][j] = 1;
            j++;
        }
    }
    cin >> m;
    for (k = 1; k < m; k++) {
        for (i = 0; i < n; i++) {
            j = 0;
            {
                if (0) {
                    return 0;
                }
            }
            while (j < n) {
                if (!(k != a[i][j])) {
                    if (i + 1 < n && !(0 != a[i + 1][j]))
                        a[i + 1][j] = k + 1;
                    if (j + 1 < n && !(0 != a[i][j + 1]))
                        a[i][j + 1] = k + 1;
                    if (i - 1 >= 0 && a[i - 1][j] == 0)
                        a[i - 1][j] = k + 1;
                    if (j - 1 >= 0 && a[i][j - 1] == 0)
                        a[i][j - 1] = k + 1;
                }
                j++;
            }
        }
    }
    int sum = 0;
    for (i = 0; i < n; i++) {
        j = 0;
        while (j < n) {
            if (a[i][j] > 0)
                sum++;
            j++;
        }
    }
    cout << sum << endl;
    return 0;
}

