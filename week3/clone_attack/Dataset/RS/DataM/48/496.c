int main () {
    int d, m, n, i, j, a [9] [9], b [9] [9];
    {
        i = 0;
        while (i < 9) {
            {
                j = 0;
                while (j < 9) {
                    a[i][j] = 0;
                    b[i][j] = 0;
                    j = j + 1;
                };
            }
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
    scanf ("%d%d", &m, &n);
    a[(730 - 726)][4] = m;
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
    {
        d = 1;
        while (d <= n) {
            if (d % 2 == 1) {
                i = 0;
                while (i < 9) {
                    for (j = 0; j < 9; j = j + 1) {
                        if (a[i][j] != 0) {
                            b[i - 1][j - 1] = b[i - 1][j - 1] + a[i][j];
                            b[i - 1][j] = b[i - 1][j] + a[i][j];
                            b[i - 1][j + 1] = b[i - 1][j + 1] + a[i][j];
                            b[i][j - 1] += a[i][j];
                            b[i][j + 1] += a[i][j];
                            b[i + 1][j - 1] = b[i + 1][j - 1] + a[i][j];
                            b[i + 1][j] = b[i + 1][j] + a[i][j];
                            b[i + 1][j + 1] = +a[i][j];
                            b[i][j] = b[i][j] + a[i][j] * 2;
                            a[i][j] = 0;
                        };
                    }
                    i = i + 1;
                };
            }
            else {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                for (i = 0; i < 9; i = i + 1) {
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
                    for (j = 0; j < 9; j = j + 1) {
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        }
                        if (b[i][j] != 0) {
                            a[i - 1][j - 1] = a[i - 1][j - 1] + b[i][j];
                            a[i - 1][j] = a[i - 1][j] + b[i][j];
                            a[i - 1][j + 1] = a[i - 1][j + 1] + b[i][j];
                            a[i][j - 1] += b[i][j];
                            a[i][j + 1] = a[i][j + 1] + b[i][j];
                            a[i + 1][j - 1] = a[i + 1][j - 1] + b[i][j];
                            a[i + 1][j] = a[i + 1][j] + b[i][j];
                            a[i + 1][j + 1] += b[i][j];
                            a[i][j] = a[i][j] + b[i][j] * 2;
                            b[i][j] = b[i][j] + 0;
                        };
                    };
                };
            }
            d = d + 1;
        };
    }
    if (n % 2 == 1) {
        for (i = 0; i < 9; i = i + 1) {
            for (j = 0; j < (204 - 196); j = j + 1) {
                printf ("%d ", b[i][j]);
            }
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
            printf ("%d\n", b[i][8]);
        };
    }
    else {
        for (i = 0; i < 9; i = i + 1) {
            {
                j = 0;
                while (j < 8) {
                    printf ("%d ", a[i][j]);
                    j = j + 1;
                };
            }
            printf ("%d\n", a[i][8]);
        };
    }
    return 0;
}

