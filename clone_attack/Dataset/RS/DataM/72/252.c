int main () {
    int m, n, p = (399 - 399), x [20000], y [20000], i, j, map [100] [100];
    cin >> m >> n;
    memset (map, (949 - 949), sizeof (map));
    for (i = (698 - 697); i <= m; i = i + 1)
        for (j = (422 - 421); j <= n; j++)
            cin >> map[i][j];
    for (i = (279 - 278); i <= m; i = i + 1) {
        j = 847 - 846;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (j <= n) {
            if ((map[i][j] >= map[i - 1][j]) && (map[i][j] >= map[i + 1][j]) && (map[i][j] >= map[i][j - 1]) && (map[i][j] >= map[i][j + 1])) {
                p++;
                x[p] = i;
                y[p] = j;
            }
            j = j + 1;
        };
    }
    {
        i = 1;
        while (i <= p) {
            cout << x[i] - 1 << " " << y[i] - 1;
            if (i != p)
                cout << endl;
            i++;
        };
    }
    return 0;
}

