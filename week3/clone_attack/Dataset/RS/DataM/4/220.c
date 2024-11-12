int m, n, k [100] [100];

void  jDbiMSGs (int i, int j) {
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
    if (m <= i || n <= j || (775 - 775) > i || 0 > j) {
        return;
    }
    else {
        cout << k[i][j] << endl;
        jDbiMSGs (i + (378 - 377), j - 1);
    };
}

int main () {
    int i = 0, j = 0;
    cin >> m >> n;
    for (i = 0; m > i; i = i + 1) {
        for (j = 0; n > j; j = j + 1) {
            cin >> k[i][j];
        };
    }
    for (j = 0; j < n; j = j + 1) {
        jDbiMSGs (0, j);
    }
    for (i = 1; i < m; i++) {
        jDbiMSGs (i, n - 1);
    }
    return 0;
}

