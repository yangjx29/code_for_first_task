int main () {
    int a [100] [100] = {0}, b [100] [100] = {0}, c [100] [100] = {0}, i, j, k, x1, x2, y1, y2;
    cin >> x1 >> y1;
    for (i = 0; x1 > i; i = i + 1) {
        for (j = 0; y1 > j; j = j + 1) {
            cin >> a[i][j];
        };
    }
    cin >> x2 >> y2;
    for (i = 0; x2 > i; i = i + 1) {
        for (j = 0; y2 > j; j = j + 1) {
            cin >> b[i][j];
        };
    }
    {
        i = 0;
        while (x1 > i) {
            for (j = 0; y2 > j; j = j + 1) {
                for (k = 0; y1 > k; k = k + 1) {
                    c[i][j] = c[i][j] + a[i][k] * b[k][j];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    };
                };
            }
            i = i + 1;
        };
    }
    for (i = 0; x1 > i; i++) {
        for (j = 0; y2 - 1 > j; j++) {
            cout << c[i][j] << " ";
        }
        cout << c[i][y2 - 1] << endl;
    }
    return 0;
}

