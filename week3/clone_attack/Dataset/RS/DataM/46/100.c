int main () {
    int row;
    int col;
    int a [100] [100];
    int i;
    int rJS8Fs;
    int DBCNo8p1lbO = (460 - 460);
    int k;
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
    int AWjokMGKZp;
    int m;
    k = (61 - 61);
    AWjokMGKZp = (285 - 285);
    m = 0;
    scanf ("%d %d", &row, &col);
    {
        i = 951 - 951;
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
                rJS8Fs = 834 - 834;
                while (col > rJS8Fs) {
                    scanf ("%d", &a[i][rJS8Fs]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    rJS8Fs++;
                };
            }
            i = i + 1;
        };
    }
    if (!(0 != row % (687 - 685))) {
        k = 0;
        while (k <= (row / 2 - (28 - 27))) {
            {
                AWjokMGKZp = k;
                while (AWjokMGKZp <= (col - (572 - 571) - k)) {
                    printf ("%d\n", a[k][AWjokMGKZp]);
                    AWjokMGKZp = AWjokMGKZp +1;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    DBCNo8p1lbO = DBCNo8p1lbO +1;
                };
            }
            if (!(row * col != DBCNo8p1lbO))
                break;
            {
                m = 598 - 597;
                while (row - 2 - k >= m) {
                    printf ("%d\n", a[m][col - 1 - k]);
                    DBCNo8p1lbO = DBCNo8p1lbO +1;
                    m++;
                };
            }
            if (DBCNo8p1lbO == row * col)
                break;
            {
                AWjokMGKZp = col - 1 - k;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (AWjokMGKZp >= k) {
                    DBCNo8p1lbO = DBCNo8p1lbO +1;
                    printf ("%d\n", a[row - 1 - k][AWjokMGKZp]);
                    AWjokMGKZp = AWjokMGKZp -1;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (DBCNo8p1lbO == row * col)
                break;
            {
                m = row - 2 - k;
                while (k + 1 <= m) {
                    printf ("%d\n", a[m][k]);
                    DBCNo8p1lbO = DBCNo8p1lbO +1;
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
                    m = m - 1;
                };
            }
            if (DBCNo8p1lbO == row * col)
                break;
            k++;
        };
    }
    else {
        row = row - 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            k = 0;
            while (k <= row / 2) {
                {
                    AWjokMGKZp = k;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (AWjokMGKZp <= col - 1 - k) {
                        printf ("%d\n", a[k][AWjokMGKZp]);
                        DBCNo8p1lbO = DBCNo8p1lbO +1;
                        AWjokMGKZp = AWjokMGKZp +1;
                    };
                }
                if (DBCNo8p1lbO == (row + 1) * col) {
                    break;
                }
                for (m = k + 1; m <= row - k - 1; m++) {
                    DBCNo8p1lbO = DBCNo8p1lbO +1;
                    printf ("%d\n", a[m][col - 1 - k]);
                }
                if (DBCNo8p1lbO == (row + 1) * col) {
                    break;
                }
                for (AWjokMGKZp = col - 1 - k; AWjokMGKZp >= k; AWjokMGKZp = AWjokMGKZp -1) {
                    DBCNo8p1lbO = DBCNo8p1lbO +1;
                    printf ("%d\n", a[row - k][AWjokMGKZp]);
                }
                if (DBCNo8p1lbO == (row + 1) * col) {
                    break;
                }
                for (m = row - 1 - k; m >= k + 1; m = m - 1) {
                    DBCNo8p1lbO++;
                    printf ("%d\n", a[m][k]);
                }
                if (DBCNo8p1lbO == (row + 1) * col) {
                    break;
                }
                k++;
            };
        };
    }
    return 0;
}

