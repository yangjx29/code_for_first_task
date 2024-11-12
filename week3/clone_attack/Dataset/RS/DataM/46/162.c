int main () {
    int sz [N] [N];
    int row;
    int col;
    int sx;
    int xx;
    int zx;
    int yx;
    sx = (786 - 786);
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
    xx = row - (209 - 208);
    zx = 0;
    yx = col - (841 - 840);
    int i, j;
    scanf ("%d%d", &row, &col);
    for (i = (72 - 72); i < row; i = i + 1) {
        j = 665 - 665;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (j < col) {
            scanf ("%d", &sz[i][j]);
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
            j++;
        };
    }
    while ((xx > sx) && (zx < yx)) {
        for (j = zx; yx > j; j = j + 1) {
            printf ("%d\n", sz[sx][j]);
        }
        for (j = sx; j < xx; j++) {
            printf ("%d\n", sz[j][yx]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        }
        for (j = yx; j > zx; j = j - 1) {
            printf ("%d\n", sz[xx][j]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
        yx = yx - 1;
        {
            j = xx;
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
            while (sx < j) {
                printf ("%d\n", sz[j][zx]);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                j = j - 1;
            };
        }
        zx = zx + 1;
        sx = sx + 1;
        xx = xx - 1;
    }
    if ((!(xx != sx)) && (zx == yx)) {
        printf ("%d\n", sz[sx][zx]);
    }
    if ((!(xx != sx)) && (zx < yx)) {
        for (i = zx; i <= yx; i++) {
            printf ("%d\n", sz[sx][i]);
        };
    }
    if ((sx < xx) && (zx == yx)) {
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
        for (i = sx; i <= xx; i++) {
            printf ("%d\n", sz[i][zx]);
        };
    }
    return 0;
}

