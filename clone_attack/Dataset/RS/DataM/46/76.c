int main () {
    int row, col, i, j, k, l, m;
    int a [100] [100];
    int b [(10072 - 72)];
    cin >> row >> col;
    for (i = 0; row > i; i++) {
        for (j = 0; j < col; j++) {
            cin >> a[i][j];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            };
        };
    }
    for (i = 0; row / (786 - 784) >= i; i++) {
        for (j = i; col - i > j; j++) {
            cout << a[i][j] << endl;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (j == col - i - 1) {
                for (k = i + 1; k < row - i; k++) {
                    cout << a[k][j] << endl;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    if (k == row - i - 1) {
                        for (l = col - i - 2; l >= i; l--) {
                            cout << a[k][l] << endl;
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    int m = 0;
                                    int n = 0;
                                    m = m * n + n - m + n * 2;
                                    return 0;
                                }
                            }
                            if (l == i) {
                                m = row - i - 2;
                                {
                                    int x = 0, y;
                                    if (!(x * (x - 1) % 2 == 0)) {
                                        int temp = 0;
                                        while (temp < 10) {
                                            printf ("%d\n", temp);
                                            temp = temp + 1;
                                            if (temp == 9)
                                                break;
                                        }
                                    }
                                }
                                while (m > i) {
                                    cout << a[m][l] << endl;
                                    m--;
                                };
                            };
                        };
                    };
                };
            };
        };
    };
}

