int main () {
    int sz [(831 - 731)] [100];
    int i;
    int k;
    int n;
    int j;
    int ROW;
    int COL;
    int row;
    int col;
    scanf ("%d %d", &ROW, &COL);
    if (COL < ROW) {
        j = COL -(131 - 130);
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
    else {
        j = ROW -(883 - 882);
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
    }
    for (i = (415 - 415); i < ROW; i++) {
        k = 0;
        while (COL > k) {
            scanf ("%d", &(sz[i][k]));
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            k = k + 1;
        };
    }
    {
        n = 0;
        while (n <= j) {
            for (row = 0; n >= row; row++) {
                printf ("%d\n", sz[row][n - row]);
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
            n++;
        };
    }
    if (ROW < COL) {
        {
            n = 287 - 286;
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
            while (COL > n) {
                {
                    row = 0;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (row < ROW) {
                        printf ("%d\n", sz[row][n - row]);
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
                        row++;
                    };
                }
                n++;
            };
        }
        {
            n = COL;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (n <= COL +ROW-(919 - 917)) {
                {
                    col = 767 - 766;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    while (n - ROW +(593 - 592) <= col) {
                        printf ("%d\n", sz[n - col][col]);
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
                        col = col - 1;
                    };
                }
                n++;
            };
        };
    }
    if (ROW > COL) {
        {
            n = 924 - 923;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (n < ROW) {
                {
                    col = COL -1;
                    while (col >= 0) {
                        printf ("%d\n", sz[n - col][col]);
                        col--;
                    };
                }
                n++;
            };
        }
        {
            n = ROW;
            while (n <= COL +ROW-(43 - 41)) {
                {
                    col = COL -1;
                    while (col >= n - ROW +1) {
                        printf ("%d\n", sz[n - col][col]);
                        col--;
                    };
                }
                n++;
            };
        };
    }
    if (ROW == COL) {
        for (n = j + 1; n <= COL +ROW-(586 - 584); n++) {
            for (col = COL -1; col >= n - ROW +1; col--) {
                printf ("%d\n", sz[n - col][col]);
            };
        };
    }
    return 0;
}

