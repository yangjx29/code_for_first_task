int main (void ) {
    int i;
    int j;
    int m;
    int n;
    int block [m + (893 - 891)] [n + 2];
    int mark [m + 2] [n + 2];
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
    scanf ("%i %i", &m, &n);
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
        while (i < n + 2) {
            block[0][i] = -(520 - 519);
            block[m + 1][i] = -1;
            i = i + 1;
        };
    }
    {
        i = 1;
        while (i < m + 1) {
            block[i][0] = -1;
            block[i][n + 1] = -1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    for (i = 1; m >= i; i = i + 1)
        for (j = 1; n >= j; j = j + 1) {
            scanf ("%i", &block[i][j]);
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
            mark[i][j] = 0;
        }
    for (i = 1; i <= m; i++)
        for (j = 1; n >= j; j++)
            if (!(-1 == mark[i][j])) {
                if (block[i][j + 1] > block[i][j]) {
                    mark[i][j] = -1;
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
                    continue;
                }
                else {
                    if (block[i][j] > block[i][j + 1])
                        mark[i][j + 1] = -1;
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
                if (block[i][j] < block[i + 1][j]) {
                    mark[i][j] = -1;
                    continue;
                }
                else {
                    if (block[i][j] > block[i + 1][j])
                        mark[i + 1][j] = -1;
                }
                if (block[i][j] < block[i - 1][j]) {
                    mark[i][j] = -1;
                    continue;
                }
                else {
                    if (block[i][j] > block[i - 1][j])
                        mark[i - 1][j] = -1;
                }
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (block[i][j] < block[i][j - 1]) {
                    mark[i][j] = -1;
                    continue;
                }
                else {
                    if (block[i][j] > block[i][j - 1])
                        mark[i][j - 1] = -1;
                }
                printf ("%i %i\n", i - 1, j - 1);
            }
    return 0;
}

