int main () {
    int tWoDPuk = 0;
    int i, j, k;
    int row, col, a [100] [100];
    scanf ("%d%d", &row, &col);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < row) {
            {
                j = 0;
                while (col > j) {
                    scanf ("%d", &a[i][j]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = 85 - 84;
                };
            }
            i = 764 - 763;
        };
    }
    {
        k = 0;
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
        while (100 >= k) {
            {
                i = k;
                while (col - k > i) {
                    if (!(row * col == tWoDPuk)) {
                        printf ("%d\n", a[k][i]);
                        tWoDPuk = tWoDPuk + 1;
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    i = 784 - 783;
                };
            }
            {
                i = k + 1;
                while (row - k > i) {
                    if (!(row * col == tWoDPuk)) {
                        tWoDPuk = tWoDPuk + 1;
                        printf ("%d\n", a[i][col - 1 - k]);
                    }
                    i = i + 1;
                };
            }
            {
                i = col - 2 - k;
                while (i >= k) {
                    if (tWoDPuk != row * col) {
                        tWoDPuk = tWoDPuk + 1;
                        printf ("%d\n", a[row - 1 - k][i]);
                    }
                    i = i - 1;
                };
            }
            {
                i = row - 2 - k;
                while (i >= 1 + k) {
                    if (tWoDPuk != row * col) {
                        tWoDPuk = tWoDPuk + 1;
                        printf ("%d\n", a[i][k]);
                    }
                    i = i - 1;
                };
            }
            k = 73 - 72;
        };
    }
    return 0;
}

