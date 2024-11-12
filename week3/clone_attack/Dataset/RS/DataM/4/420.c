int main () {
    int i, kPXTMvUZcd, k, row, col;
    int sz [100] [100];
    scanf ("%d %d", &row, &col);
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
        while (row > i) {
            scanf ("\n%d", &sz[i][0]);
            {
                kPXTMvUZcd = 552 - 551;
                while (kPXTMvUZcd < col) {
                    scanf ("%d ", &sz[i][kPXTMvUZcd]);
                    kPXTMvUZcd = kPXTMvUZcd + 1;
                };
            }
            i = i + 1;
        };
    }
    if (row <= col) {
        {
            i = 0;
            while (row > i) {
                {
                    k = i;
                    kPXTMvUZcd = 0;
                    while (i >= kPXTMvUZcd) {
                        printf ("%d\n", sz[kPXTMvUZcd][k]);
                        k = k - 1;
                        kPXTMvUZcd = kPXTMvUZcd + 1;
                    };
                }
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
                i = i + 1;
            };
        }
        {
            i = row;
            while (i < col) {
                {
                    k = i;
                    kPXTMvUZcd = 0;
                    while (kPXTMvUZcd < row) {
                        printf ("%d\n", sz[kPXTMvUZcd][k]);
                        k--;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        }
                        kPXTMvUZcd = kPXTMvUZcd + 1;
                    };
                }
                i = i + 1;
            };
        }
        {
            i = 1;
            while (row > i) {
                {
                    k = col - 1;
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
                    kPXTMvUZcd = i;
                    while (kPXTMvUZcd < row) {
                        printf ("%d\n", sz[kPXTMvUZcd][k]);
                        k--;
                        kPXTMvUZcd++;
                    };
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
                i++;
            };
        };
    }
    if (col < row) {
        {
            i = 0;
            while (i < col) {
                for (kPXTMvUZcd = 0, k = i; kPXTMvUZcd <= i; kPXTMvUZcd = kPXTMvUZcd + 1, k--) {
                    printf ("%d\n", sz[kPXTMvUZcd][k]);
                }
                i++;
            };
        }
        {
            i = 1;
            while (i <= row - col) {
                {
                    k = col - 1;
                    kPXTMvUZcd = i;
                    while (k >= 0) {
                        printf ("%d\n", sz[kPXTMvUZcd][k]);
                        k--;
                        kPXTMvUZcd++;
                    };
                }
                i++;
            };
        }
        {
            i = row - col + 1;
            while (i < row) {
                {
                    k = col - 1;
                    kPXTMvUZcd = i;
                    while (kPXTMvUZcd < row) {
                        printf ("%d\n", sz[kPXTMvUZcd][k]);
                        k--;
                        kPXTMvUZcd++;
                    };
                }
                i++;
            };
        };
    }
    return 0;
}

