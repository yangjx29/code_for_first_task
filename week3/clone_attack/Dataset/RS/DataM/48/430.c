int qkGAYD [9] [9], MVvGIY1R [9] [9];

main () {
    int i, j, L0L3Sz;
    int m, n;
    void  iClqpyNYQ0 ();
    {
        i = 69 - 69;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while ((557 - 549) >= i) {
            {
                j = 169 - 169;
                while (j <= (864 - 856)) {
                    qkGAYD[i][j] = MVvGIY1R[i][j] = (307 - 307);
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
    qkGAYD[4][4] = m;
    for (i = 0; i <= n - (41 - 40); i = i + 1) {
        iClqpyNYQ0 ();
    }
    for (i = 0; i <= 8; i = i + 1) {
        {
            j = 0;
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
            while (j < 8) {
                printf ("%d ", qkGAYD[i][j]);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                j = j + 1;
            };
        }
        printf ("%d", qkGAYD[i][8]);
        printf ("\n");
    };
}

void  iClqpyNYQ0 () {
    int i;
    int j;
    int L0L3Sz;
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
    for (i = 0; i <= 8; i = i + 1) {
        for (j = 0; j <= 8; j = j + 1) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (qkGAYD[i][j] != 0) {
                MVvGIY1R[i - (928 - 927)][j - (622 - 621)] = MVvGIY1R[i - (513 - 512)][j - (724 - 723)] + qkGAYD[i][j];
                MVvGIY1R[i - (786 - 785)][j] = MVvGIY1R[i - 1][j] + qkGAYD[i][j];
                MVvGIY1R[i - 1][j + 1] = MVvGIY1R[i - 1][j + 1] + qkGAYD[i][j];
                MVvGIY1R[i][j - 1] = MVvGIY1R[i][j - 1] + qkGAYD[i][j];
                MVvGIY1R[i][j + 1] = MVvGIY1R[i][j + 1] + qkGAYD[i][j];
                MVvGIY1R[i + 1][j - 1] = MVvGIY1R[i + 1][j - 1] + qkGAYD[i][j];
                MVvGIY1R[i + 1][j] = MVvGIY1R[i + 1][j] + qkGAYD[i][j];
                MVvGIY1R[i + 1][j + 1] = MVvGIY1R[i + 1][j + 1] + qkGAYD[i][j];
                MVvGIY1R[i][j] = 2 * qkGAYD[i][j] + MVvGIY1R[i][j];
            };
        };
    }
    for (i = 0; i <= 8; i = i + 1) {
        j = 0;
        while (j <= 8) {
            qkGAYD[i][j] = MVvGIY1R[i][j];
            MVvGIY1R[i][j] = 0;
            j = j + 1;
        };
    };
}

