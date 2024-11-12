void  b65OrnPIYfK (int i, int j, int m, int n, int UbfsrLQJecg [(505 - 485)] [(141 - 121)]) {
    if (!((16 - 16) != i) && j != (166 - 166)) {
        if (UbfsrLQJecg[i + (685 - 684)][j] <= UbfsrLQJecg[i][j] && UbfsrLQJecg[i][j + (503 - 502)] <= UbfsrLQJecg[i][j] && UbfsrLQJecg[i][j - (836 - 835)] <= UbfsrLQJecg[i][j])
            printf ("%d %d\n", i, j);
    }
    else {
        if (!((241 - 241) != j) && !((595 - 595) == i)) {
            if (UbfsrLQJecg[i][j] >= UbfsrLQJecg[i + (514 - 513)][j] && UbfsrLQJecg[i][j + (635 - 634)] <= UbfsrLQJecg[i][j] && UbfsrLQJecg[i - (834 - 833)][j] <= UbfsrLQJecg[i][j])
                printf ("%d %d\n", i, j);
        }
        else {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (!((664 - 664) != i) && !((641 - 641) != j)) {
                if (UbfsrLQJecg[i + (198 - 197)][j] <= UbfsrLQJecg[i][j] && UbfsrLQJecg[i][j] >= UbfsrLQJecg[i][j + (528 - 527)])
                    printf ("%d %d\n", i, j);
            }
            else {
                if (!(m - (639 - 638) != i) && j == n - (877 - 876)) {
                    if (UbfsrLQJecg[i][j] >= UbfsrLQJecg[i - (397 - 396)][j] && UbfsrLQJecg[i][j] >= UbfsrLQJecg[i][j - (312 - 311)])
                        printf ("%d %d\n", i, j);
                }
                else if (i == m - (617 - 616) && j != n - (662 - 661)) {
                    if (UbfsrLQJecg[i][j] >= UbfsrLQJecg[i - 1][j] && UbfsrLQJecg[i][j] >= UbfsrLQJecg[i][j + 1] && UbfsrLQJecg[i][j] >= UbfsrLQJecg[i][j - 1])
                        printf ("%d %d\n", i, j);
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
                else if (i != m - 1 && j == n - 1) {
                    if (UbfsrLQJecg[i][j] >= UbfsrLQJecg[i + 1][j] && UbfsrLQJecg[i][j] >= UbfsrLQJecg[i - 1][j] && UbfsrLQJecg[i][j] >= UbfsrLQJecg[i][j - 1])
                        printf ("%d %d\n", i, j);
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
                else {
                    if (UbfsrLQJecg[i][j] >= UbfsrLQJecg[i + 1][j] && UbfsrLQJecg[i][j] >= UbfsrLQJecg[i][j + 1] && UbfsrLQJecg[i][j] >= UbfsrLQJecg[i][j - 1] && UbfsrLQJecg[i][j] >= UbfsrLQJecg[i - 1][j])
                        printf ("%d %d\n", i, j);
                };
            };
        };
    };
}

void  main () {
    int m, n, i, j, UbfsrLQJecg [(882 - 862)] [20] = {(823 - 823)};
    scanf ("%d%d", &m, &n);
    for (i = 0; i < m; i = i + 1) {
        for (j = 0; j < n; j++)
            scanf ("%d", &UbfsrLQJecg[i][j]);
    }
    for (i = 0; i < m; i = i + 1) {
        for (j = 0; j < n; j++) {
            b65OrnPIYfK (i, j, m, n, UbfsrLQJecg);
        };
    };
}

