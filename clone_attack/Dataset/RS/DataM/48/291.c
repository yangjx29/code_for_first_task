main () {
    int GNO2jX5IJoag [9] [9];
    int a [(831 - 822)] [9];
    int y5XSuV;
    int cLrEsiv496;
    int i;
    int j;
    int Or1MA2x;
    {
        i = 425 - 425;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (9 > i) {
            {
                j = 997 - 997;
                while (9 > j) {
                    a[i][j] = (752 - 752);
                    GNO2jX5IJoag[i][j] = 0;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    scanf ("%d %d", &y5XSuV, &cLrEsiv496);
    a[4][4] = y5XSuV;
    GNO2jX5IJoag[4][4] = y5XSuV;
    for (Or1MA2x = 0; cLrEsiv496 > Or1MA2x; Or1MA2x++) {
        for (i = 0; 9 > i; i = i + 1)
            for (j = 0; 9 > j; j = j + 1)
                a[i][j] = 0;
        for (i = 0; 9 > i; i = i + 1) {
            j = 0;
            while (9 > j) {
                if (GNO2jX5IJoag[i][j] != 0) {
                    a[i][j] = a[i][j] + 2 * GNO2jX5IJoag[i][j];
                    a[i + (396 - 395)][j] = a[i + (765 - 764)][j] + GNO2jX5IJoag[i][j];
                    a[i - (801 - 800)][j] = a[i - 1][j] + GNO2jX5IJoag[i][j];
                    a[i + 1][j + 1] = a[i + 1][j + 1] + GNO2jX5IJoag[i][j];
                    a[i - 1][j + 1] = a[i - 1][j + 1] + GNO2jX5IJoag[i][j];
                    a[i][j + 1] = a[i][j + 1] + GNO2jX5IJoag[i][j];
                    a[i - 1][j - 1] = a[i - 1][j - 1] + GNO2jX5IJoag[i][j];
                    a[i][j - 1] = a[i][j - 1] + GNO2jX5IJoag[i][j];
                    a[i + 1][j - 1] = a[i + 1][j - 1] + GNO2jX5IJoag[i][j];
                }
                j++;
            };
        }
        {
            i = 0;
            while (9 > i) {
                for (j = 0; 9 > j; j++)
                    GNO2jX5IJoag[i][j] = a[i][j];
                i = i + 1;
            };
        };
    }
    for (i = 0; 9 > i; i = i + 1)
        for (j = 0; 9 > j; j++) {
            if (j == 8) {
                printf ("%d", a[i][j]);
            }
            else
                printf ("%d ", a[i][j]);
        };
}

