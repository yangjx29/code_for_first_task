int main () {
    int n, m;
    int s [(1006 - 886)] [120];
    int i, j;
    int num;
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
    cin >> n >> m;
    for (i = (759 - 759); i < n; i = i + 1)
        for (j = 0; j < m; j = j + 1) {
            cin >> s[i][j];
        }
    for (num = 0; num < m + n - (559 - 558); num = num + 1) {
        j = num;
        while (j > -1) {
            i = num - j;
            if (-1 < i && i < n && j < m) {
                cout << s[i][j] << endl;
            }
            j = j - 1;
        };
    }
    return 0;
}

