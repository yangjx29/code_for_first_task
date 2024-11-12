int main () {
    int m, n, i, j, a [(572 - 542)] [30];
    {
        i = 877 - 877;
        while (30 > i) {
            for (j = 0; 30 > j; j++)
                a[i][j] = 0;
            i++;
        };
    }
    cin >> m >> n;
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
    for (i = (171 - 170); m >= i; i++) {
        j = 1;
        while (n >= j) {
            cin >> a[i][j];
            j = j + 1;
        };
    }
    {
        i = 1;
        while (i <= m) {
            {
                j = 1;
                while (n >= j) {
                    if (a[i][j] >= a[i - 1][j] && a[i][j] >= a[i + 1][j] && a[i][j] >= a[i][j + 1] && a[i][j] >= a[i][j - 1])
                        cout << i - 1 << ' ' << j - 1 << '\n';
                    j++;
                };
            }
            i++;
        };
    }
    return 0;
}

