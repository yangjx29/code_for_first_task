int main () {
    int k, n;
    int sz [(919 - 819)] [100], row, col;
    int xx_row;
    int sx_row;
    xx_row = 0;
    sx_row = row - (114 - 113);
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
    int xx_col = 0, wYadh7 = col - 1;
    scanf ("%d %d", &row, &col);
    {
        int i = 0;
        while (row > i) {
            for (int j = 0;
            col > j; j++) {
                scanf ("%d", &sz[i][j]);
            }
            i++;
        };
    }
    while (sx_row > xx_row && xx_col < wYadh7) {
        {
            k = xx_col;
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
            while (wYadh7 - 1 >= k) {
                printf ("%d\n", sz[xx_row][k]);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                k++;
            };
        }
        for (n = xx_row; sx_row - 1 >= n; n = n + 1) {
            printf ("%d\n", sz[n][wYadh7]);
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
        for (k = wYadh7; xx_col + 1 <= k; k--) {
            printf ("%d\n", sz[sx_row][k]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            };
        }
        wYadh7 = wYadh7 - 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (n = sx_row; xx_row + 1 <= n; n = n - 1) {
            printf ("%d\n", sz[n][xx_col]);
        }
        sx_row = sx_row - 1;
        xx_col = xx_col + 1;
        xx_row = xx_row + 1;
    }
    if (sx_row == xx_row) {
        for (k = xx_col; k <= wYadh7; k = k + 1) {
            printf ("%d\n", sz[sx_row][k]);
        };
    }
    else {
        if (xx_row == wYadh7) {
            for (n = xx_row; n <= sx_row; n++) {
                printf ("%d\n", sz[n][wYadh7]);
            };
        };
    }
    return 0;
}

