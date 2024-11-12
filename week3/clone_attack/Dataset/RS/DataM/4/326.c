int main () {
    int a [(691 - 591)] [100] = {0};
    int Ypfgm71;
    int col;
    int i;
    int j;
    cin >> Ypfgm71 >> col;
    for (i = 0; i < Ypfgm71; i = i + 1) {
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
        while (col > j) {
            cin >> a[i][j];
            j++;
        };
    }
    for (i = 0; i < Ypfgm71 +col - 1; i = i + 1) {
        for (j = 0; Ypfgm71 > j; j++) {
            if (col <= i - j || i - j < 0)
                continue;
            cout << *(*(a + j) + i - j) << endl;
        };
    }
    return 0;
}

