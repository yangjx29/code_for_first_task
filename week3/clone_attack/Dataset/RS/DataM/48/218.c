int main () {
    int i, j, m, n, a [9] [9], b [9] [9], x, y, d;
    cin >> m >> n;
    {
        i = 0;
        while (9 > i) {
            for (j = 0; 9 > j; j = j + 1)
                a[i][j] = 0;
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
            i = i + 1;
        };
    }
    a[4][4] = m;
    for (d = (494 - 493); n >= d; d++) {
        {
            x = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (x < 9) {
                for (y = 0; 9 > y; y = y + 1)
                    b[x][y] = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                x++;
            };
        }
        for (i = 1; 8 > i; i++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            for (j = 1; 8 > j; j = j + 1) {
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
                if (!(0 == a[i][j])) {
                    b[i - 1][j] = b[i - 1][j] + a[i][j];
                    b[i - 1][j - 1] = b[i - 1][j - 1] + a[i][j];
                    b[i - 1][j + 1] = b[i - 1][j + 1] + a[i][j];
                    b[i][j + 1] = b[i][j + 1] + a[i][j];
                    b[i][j - 1] = b[i][j - 1] + a[i][j];
                    b[i + 1][j] = b[i + 1][j] + a[i][j];
                    b[i + 1][j - 1] = b[i + 1][j - 1] + a[i][j];
                    b[i + 1][j + 1] = b[i + 1][j + 1] + a[i][j];
                    b[i][j] = b[i][j] + 2 * a[i][j];
                };
            };
        }
        {
            i = 0;
            while (9 > i) {
                for (j = 0; 9 > j; j = j + 1) {
                    a[i][j] = b[i][j];
                }
                i++;
            };
        };
    }
    {
        i = 0;
        while (9 > i) {
            for (j = 0; j < 9; j++) {
                if (j == 0) {
                    cout << a[i][j];
                }
                else {
                    cout << " " << a[i][j];
                };
            }
            i++;
            cout << endl;
        };
    }
    return 0;
}

