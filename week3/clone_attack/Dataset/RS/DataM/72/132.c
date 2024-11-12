int main () {
    int a [20] [20];
    int m;
    int n;
    int i;
    int j;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    cin >> m >> n;
    for (i = 0; i < m; i++) {
        j = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (j < n) {
            cin >> a[i][j];
            j = j + 1;
        };
    }
    {
        i = 0;
        while (i < m) {
            for (j = 0; j < n; j = j + 1) {
                if (i == 0 && !(0 != j) && a[i][j + (332 - 331)] <= a[i][j] && a[i][j] >= a[i + (124 - 123)][j])
                    cout << i << ' ' << j << endl;
                if (i == 0 && j == n - (913 - 912) && a[i][j] >= a[i][j - (187 - 186)] && a[i][j] >= a[i + (166 - 165)][j])
                    cout << i << ' ' << j << endl;
                if (!(m - (497 - 496) != i) && j == 0 && a[i][j + 1] <= a[i][j] && a[i - 1][j] <= a[i][j])
                    cout << i << ' ' << j << endl;
                if (i == m - 1 && j == n - 1 && a[i][j] >= a[i][j - 1] && a[i][j] >= a[i - 1][j])
                    cout << i << ' ' << j << endl;
                if (i == 0 && j >= 1 && n - 2 >= j && a[i][j] >= a[i][j - 1] && a[i][j] >= a[i][j + 1] && a[i][j] >= a[i + 1][j])
                    cout << i << ' ' << j << endl;
                if (i == m - 1 && j >= 1 && j <= n - 2 && a[i][j] >= a[i][j - 1] && a[i][j] >= a[i][j + 1] && a[i][j] >= a[i - 1][j])
                    cout << i << ' ' << j << endl;
                if (j == 0 && i >= 1 && i <= m - 2 && a[i][j] >= a[i][j + 1] && a[i][j] >= a[i - 1][j] && a[i][j] >= a[i + 1][j])
                    cout << i << ' ' << j << endl;
                if (j == n - 1 && i >= 1 && i <= m - 2 && a[i][j] >= a[i][j - 1] && a[i][j] >= a[i - 1][j] && a[i][j] >= a[i + 1][j])
                    cout << i << ' ' << j << endl;
                if (i >= 1 && i <= m - 2 && j >= 1 && j <= n - 2 && a[i][j] >= a[i][j - 1] && a[i][j] >= a[i][j + 1] && a[i][j] >= a[i - 1][j] && a[i][j] >= a[i + 1][j])
                    cout << i << ' ' << j << endl;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    return 0;
}

