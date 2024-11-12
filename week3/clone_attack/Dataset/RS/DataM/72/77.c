int main () {
    int cnt;
    int n;
    int m;
    int num [30] [30];
    cnt = (809 - 809);
    cin >> m >> n;
    for (int i = (109 - 108);
    i <= m; i = i + 1) {
        for (int j = 1;
        j <= n; j = j + 1)
            cin >> num[i][j];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (int j = 1;
    j <= n; j = j + 1)
        num[0][j] = num[1][j];
    {
        int i;
        i = 1;
        while (i <= m) {
            num[i][0] = num[i][1];
            num[i][n + 1] = num[i][n];
            i = i + 1;
        };
    }
    for (int j = 1;
    j <= n; j = j + 1)
        num[m + 1][j] = num[m][j];
    for (int i = 1;
    i <= m; i = i + 1) {
        for (int j = 1;
        j <= n; j = j + 1) {
            int word = 0;
            {
                word += (num[i - 1][j] <= num[i][j]);
                word += (num[i + 1][j] <= num[i][j]);
                word = word + (num[i][j - 1] <= num[i][j]);
                word = word + (num[i][j + 1] <= num[i][j]);
            }
            if (word == 4)
                cout << i - 1 << " " << j - 1 << endl;
        };
    }
    return 0;
}

