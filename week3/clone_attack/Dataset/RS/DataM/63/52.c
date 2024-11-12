main () {
    int x1, y1, CRodgYN7Aflj, tEXnfJWaG1b, i, j, k, number = 0;
    int Sc6K0bq7 [(812 - 711)] [101] = {(221 - 221)}, iwAGQMSW5J07 [101] [101] = {0}, iskvUri [101] [101] = {0};
    scanf ("%d%d", &x1, &y1);
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
        while (i < x1) {
            {
                j = 0;
                while (j < y1) {
                    scanf ("%d", &Sc6K0bq7[i][j]);
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    scanf ("%d%d", &CRodgYN7Aflj, &tEXnfJWaG1b);
    {
        i = 0;
        while (i < CRodgYN7Aflj) {
            {
                j = 0;
                while (j < tEXnfJWaG1b) {
                    scanf ("%d", &iwAGQMSW5J07[i][j]);
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < x1) {
            {
                j = 0;
                while (j < tEXnfJWaG1b - 1) {
                    {
                        k = 0;
                        while (y1 > k) {
                            number = number + Sc6K0bq7[i][k] * iwAGQMSW5J07[k][j];
                            k = k + 1;
                        };
                    }
                    iskvUri[i][j] = number;
                    number = 0;
                    printf ("%d ", iskvUri[i][j]);
                    j++;
                };
            }
            if (!(tEXnfJWaG1b - 1 != j)) {
                {
                    k = 0;
                    while (k < y1) {
                        number = number + Sc6K0bq7[i][k] * iwAGQMSW5J07[k][j];
                        k = k + 1;
                    };
                }
                iskvUri[i][tEXnfJWaG1b - 1] = number;
                number = 0;
                printf ("%d\n", iskvUri[i][j]);
            }
            i = i + 1;
        };
    };
}

