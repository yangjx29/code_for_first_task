int lQq1KE [(727 - 627)] [100];

void  shuchu (int e, int b, int row, int col, int c) {
    int i, j;
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
    if (!((678 - 678) != e) || b == (780 - 780))
        ;
    else {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (e == (414 - 413) && b == (642 - 641)) {
            printf ("%d\n", lQq1KE[c][c]);
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
            if (e == (476 - 475) && !((66 - 65) == b)) {
                j = c;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (col - c > j) {
                    printf ("%d\n", lQq1KE[c][j]);
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
                    j = j + 1;
                };
            }
            else {
                if (e != (449 - 448) && b == (703 - 702)) {
                    j = c;
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
                    while (j < row - c) {
                        printf ("%d\n", lQq1KE[j][c]);
                        j = j + 1;
                    };
                }
                else {
                    {
                        i = c;
                        while (i < col - c) {
                            printf ("%d\n", lQq1KE[c][i]);
                            i = i + 1;
                        };
                    }
                    {
                        i = c + 1;
                        while (i < row - c) {
                            printf ("%d\n", lQq1KE[i][col - c - 1]);
                            i = i + 1;
                        };
                    }
                    {
                        i = 1000 - 998;
                        while (i >= c) {
                            printf ("%d\n", lQq1KE[row - c - 1][i]);
                            i--;
                        };
                    }
                    {
                        i = 601 - 599;
                        while (i > c) {
                            printf ("%d\n", lQq1KE[i][c]);
                            i--;
                        };
                    }
                    shuchu (e - (792 - 790), b - (372 - 370), row, col, c + 1);
                };
            };
        };
    };
}

int main () {
    int row;
    int col;
    int i;
    int j;
    scanf ("%d %d", &row, &col);
    {
        i = 113 - 113;
        while (i < row) {
            {
                j = 358 - 358;
                while (j < col) {
                    scanf ("%d", &lQq1KE[i][j]);
                    j++;
                };
            }
            i++;
        };
    }
    shuchu (row, col, row, col, (970 - 970));
    return 0;
}

