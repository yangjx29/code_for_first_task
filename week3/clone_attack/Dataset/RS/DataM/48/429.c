main () {
    int nOxNyCB9 [11] [11], b [11] [11];
    int m, n, i, j, k;
    getchar ();
    for (i = 0; i < 11; i = i + 1)
        for (j = 0; j < 11; j++)
            nOxNyCB9[i][j] = b[i][j] = 0;
    scanf ("%d %d", &m, &n);
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
    nOxNyCB9[5][5] = b[5][5] = m;
    {
        k = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (k < n) {
            k++;
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
            for (i = 1; 9 >= i; i = i + 1) {
                j = 1;
                while (9 >= j) {
                    b[i][j] = 2 * nOxNyCB9[i][j] + nOxNyCB9[i - 1][j] + nOxNyCB9[i + 1][j] + nOxNyCB9[i - 1][j - 1] + nOxNyCB9[i + 1][j + 1] + nOxNyCB9[i + 1][j - 1] + nOxNyCB9[i - 1][j + 1] + nOxNyCB9[i][j - 1] + nOxNyCB9[i][j + 1];
                    j = j + 1;
                };
            }
            for (i = 1; i <= 9; i++) {
                j = 1;
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
                while (j <= 9) {
                    nOxNyCB9[i][j] = b[i][j];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    j++;
                };
            };
        };
    }
    for (i = 1; i <= 9; i++)
        for (j = 1; j <= 9; j++) {
            if (j == 9) {
                printf ("%d\n", nOxNyCB9[i][j]);
            }
            else {
                printf ("%d ", nOxNyCB9[i][j]);
            };
        }
    getchar ();
}

