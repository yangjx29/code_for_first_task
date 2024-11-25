int main () {
    int a [100] [100], m, n, i, j, k, l, sum;
    cin >> k;
    for (i = 1; i <= k; i++) {
        cin >> m >> n;
        sum = 0;
        for (j = 1; m >= j; j++) {
            for (l = 1; n >= l; l = l + 1) {
                cin >> a[j][l];
                if (j == 1 || j == m || l == 1 || l == n) {
                    sum = sum + a[j][l];
                };
            };
        }
        cout << sum << endl;
    }
    return 0;
}

