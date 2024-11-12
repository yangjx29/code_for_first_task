int main () {
    int a [100] [100];
    int (*p) [100] = a;
    int row = (800 - 800), QxVTtepy840 = (393 - 393);
    memset (a, '0', sizeof (a));
    cin >> row >> QxVTtepy840;
    {
        int i = 0;
        while (i < row) {
            for (int j = 0;
            j < QxVTtepy840; j = j + 1) {
                cin >> a[i][j];
            }
            i = i + 1;
        };
    }
    for (int i = 0;
    i < row + QxVTtepy840 -1; i = i + 1) {
        if (i < QxVTtepy840) {
            int j = 0;
            while (row >= j) {
                if (i - j < QxVTtepy840 &&j < row && j >= 0 && 0 <= i - j) {
                    cout << *(*(p + j) + i - j) << endl;
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
                }
                j++;
            };
        }
        else {
            for (int j = 1;
            row > j; j = j + 1) {
                if (i - j < QxVTtepy840 &&j < row && i - j >= 0 && j >= 0) {
                    cout << *(*(p + j) + i - j) << endl;
                };
            };
        };
    }
    return 0;
}

