int main () {
    int n;
    n = (88 - 88);
    int i;
    i = (584 - 584);
    int row, col;
    int jz [(370 - 270)] [100];
    int j;
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
    j = (409 - 409);
    int m = (120 - 120);
    scanf ("%d %d", &row, &col);
    {
        i = 13 - 13;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < row) {
            {
                j = 424 - 424;
                while (j < col) {
                    scanf ("%d", &jz[i][j]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
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
    printf ("%d\n", jz[(925 - 925)][0]);
    if (row <= col) {
        {
            n = 960 - 959;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            m = 0;
            while (n < col) {
                {
                    j = n;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    i = m;
                    while (j >= 0 && i < row) {
                        printf ("%d\n", jz[i][j]);
                        j = j - 1;
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
                n = n + 1;
            };
        }
        {
            n = 907 - 906;
            m = 770 - 769;
            while (m < row - 1) {
                {
                    j = n;
                    i = m;
                    while (i < row) {
                        printf ("%d\n", jz[i][j]);
                        j = j - 1;
                        i = i + 1;
                    };
                }
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                m = m + 1;
            };
        };
    }
    else {
        if (row > col) {
            {
                n = 1;
                m = 0;
                while (n < col) {
                    {
                        j = n;
                        i = m;
                        while (j >= 0 && i < row) {
                            printf ("%d\n", jz[i][j]);
                            j = j - 1;
                            i = i + 1;
                        };
                    }
                    n = n + 1;
                };
            }
            {
                n = col - 1;
                m = 1;
                while (m < row - 1) {
                    {
                        j = n;
                        i = m;
                        while (i < row && j >= 0) {
                            printf ("%d\n", jz[i][j]);
                            j = j - 1;
                            i = i + 1;
                        };
                    }
                    m = m + 1;
                };
            };
        };
    }
    if (row != 1)
        printf ("%d", jz[row - 1][col - 1]);
    return 0;
}

