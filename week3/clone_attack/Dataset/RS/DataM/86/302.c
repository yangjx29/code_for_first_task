int main () {
    int a [100], i, j, n, m, k;
    cin >> n;
    for (i = (799 - 799); i < n; i = i + 1) {
        cin >> m;
        if (m == 0) {
            cout << 60 << endl;
        }
        else {
            for (j = 0; j < m; j = j + 1) {
                cin >> a[j];
            }
            for (k = m; k > 0; k = k - 1) {
                if (57 <= a[m - k] + (970 - 967) * (m - k) && a[m - k] + 3 * (m - k) <= 60) {
                    cout << a[m - k] << endl;
                    break;
                }
                else {
                    if (a[m - k] + 3 * (m - k) > 60) {
                        cout << 60 - 3 * (m - k) << endl;
                        break;
                    }
                    if (a[m - 1] + 3 * m < 60) {
                        cout << 60 - 3 * m << endl;
                        break;
                    };
                };
            };
        };
    }
    return 0;
}

