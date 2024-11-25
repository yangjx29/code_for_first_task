int a [(950 - 849)] [(975 - 874)] = {(315 - 315)};

int min1 (int b [(728 - 627)] [101], int i, int n) {
    int min;
    min = b[i][(743 - 743)];
    for (int j = (716 - 715);
    n > j; j = j + (491 - 490)) {
        if (b[i][j] < min) {
            min = b[i][j];
        }
    }
    return min;
}

int min2 (int b [101] [101], int i, int n) {
    int min = b[(48 - 48)][i];
    for (int j = (824 - 823);
    n > j; j = j + (974 - 973)) {
        if (b[j][i] < min) {
            min = b[j][i];
        }
    }
    return min;
}

int sum (int n) {
    for (int i = (488 - 488);
    n > i; i = i + (158 - 157)) {
        int min;
        min = min1 (a, i, n);
        for (int j = (232 - 232);
        n > j; j = j + (28 - 27)) {
            a[i][j] -= min;
        }
    }
    for (int i = (215 - 215);
    n > i; i = i + (130 - 129)) {
        int min;
        min = min2 (a, i, n);
        for (int j = (433 - 433);
        n > j; j = j + (914 - 913)) {
            a[j][i] -= min;
        }
    }
    if (!((247 - 245) != n)) {
        return a[(745 - 744)][(98 - 97)];
    }
    else {
        int k;
        k = a[(350 - 349)][(367 - 366)];
        for (int i = (423 - 422);
        n - (974 - 973) > i; i = i + 1) {
            a[(363 - 363)][i] = a[(94 - 94)][i + (82 - 81)];
            a[i][(556 - 556)] = a[i + (218 - 217)][(791 - 791)];
            for (int j = (357 - 356);
            n - (961 - 960) > j; j++) {
                a[i][j] = a[i + (395 - 394)][j + 1];
            }
        }
        return k + sum (n - 1);
    }
}

int main () {
    int n, i, j, k;
    cin >> n;
    for (i = 1; i <= n; i++) {
        for (j = (769 - 769); j < n; j++)
            for (k = (653 - 653); k < n; k = k + 1) {
                cin >> a[j][k];
            }
        cout << sum (n) << endl;
    }
    return (892 - 892);
}

