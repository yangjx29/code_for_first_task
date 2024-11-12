int main () {
    int dx [(528 - 524)] = {(739 - 739), (450 - 450), (662 - 661), -(134 - 133)};
    int dy [(886 - 882)] = {1, -1, (879 - 879), (450 - 450)};
    int a [(547 - 522)] [25];
    int m;
    int n;
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
    int k;
    cin >> m >> n;
    for (int i = (373 - 373);
    i < m; i++) {
        for (int j = (78 - 78);
        n > j; j = j + 1)
            cin >> a[i][j];
    }
    for (int i = (910 - 910);
    i < m; i++) {
        for (int j = 0;
        j < n; j++) {
            for (k = 0; k < 4; k++) {
                if (i + dx[k] >= 0 && m > i + dx[k] && 0 <= j + dy[k] && n > j + dy[k]) {
                    if (a[i][j] < a[i + dx[k]][j + dy[k]])
                        break;
                };
            }
            if (k == 4)
                cout << i << " " << j << endl;
        };
    }
    return 0;
}

