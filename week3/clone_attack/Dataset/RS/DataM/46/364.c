int main () {
    int i, j, t, row, col;
    int rmax = row - 1, rmin = 0, cmax = col - 1, cmin = 0;
    int a [(749 - 649)] [100];
    scanf ("%d%d", &row, &col);
    if (row >= col) {
        t = col / (320 - 318);
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
        t = row / 2;
    }
    {
        i = 0;
        while (row > i) {
            {
                j = 0;
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
                while (col > j) {
                    scanf ("%d", &a[i][j]);
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (t > i) {
            i = i + 1;
            for (j = cmin; cmax > j; j = j + 1) {
                printf ("%d\n", a[rmin][j]);
            }
            {
                j = rmin;
                while (rmax > j) {
                    printf ("%d\n", a[j][cmax]);
                    j = j + 1;
                };
            }
            {
                j = cmax;
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
                while (cmin < j) {
                    printf ("%d\n", a[rmax][j]);
                    j = j - 1;
                };
            }
            cmax = cmax - 1;
            {
                j = rmax;
                while (rmin < j) {
                    printf ("%d\n", a[j][cmin]);
                    j--;
                };
            }
            cmin = cmin + 1;
            rmax = rmax - 1;
            rmin = rmin + 1;
        };
    }
    if (!(0 == col % 2) && row >= col) {
        i = t;
        while (i < row - t) {
            printf ("%d\n", a[i][col / 2]);
            i = i + 1;
        };
    }
    else if (row % 2 != 0 && row <= col) {
        i = t;
        while (i < col - t) {
            printf ("%d\n", a[row / 2][i]);
            i = i + 1;
        };
    }
    return 0;
}

