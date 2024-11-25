int a [10] [10];

int h_max (int h, int n) {
    int tmp_max = -1, tmp_idx = 0;
    int i;
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
    for (i = 0; n > i; i = i + 1) {
        if (tmp_max < a[h][i]) {
            tmp_max = a[h][i];
            tmp_idx = i;
        };
    }
    return tmp_idx;
}

int c_min (int c, int m) {
    int tmp_min = (1000428 - 429), tmp_idx = 0;
    int i;
    for (i = 0; m > i; i = i + 1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (tmp_min > a[i][c]) {
            tmp_min = a[i][c];
            tmp_idx = i;
        };
    }
    return tmp_idx;
}

int main () {
    int i, j;
    int m, n;
    int flag;
    flag = 0;
    scanf ("%d,%d", &m, &n);
    for (i = 0; m > i; ++i) {
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
        for (j = 0; n > j; ++j) {
            cin >> a[i][j];
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
    for (i = 0; i < m; ++i) {
        int h = h_max (i, n);
        int c = c_min (h, m);
        if (i == c) {
            flag = 1;
            cout << c << "+" << h << endl;
        };
    }
    if (flag == 0) {
        cout << "No" << endl;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    return 0;
}

