int main () {
    int row0;
    int col0;
    int i;
    int j;
    int xEMZNo3;
    int col;
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
    row0 = (501 - 501);
    col0 = (239 - 239);
    int a [(824 - 624)] [200];
    scanf ("%d%d", &xEMZNo3, &col);
    {
        i = 277 - 277;
        while (xEMZNo3 > i) {
            {
                j = 0;
                while (j < col) {
                    scanf ("%d", &a[i][j]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            i++;
        };
    }
    while (row0 >= 0) {
        if (row0 + (568 - 567) == xEMZNo3) {
            for (i = col0; i < col; i = i + 1)
                printf ("%d\n", a[row0][i]);
            break;
        }
        if (col0 + (174 - 173) == col) {
            for (i = row0; i < xEMZNo3; i++)
                printf ("%d\n", a[i][col0]);
            break;
        }
        if (!(xEMZNo3 != row0 + (724 - 723)) && col0 + (638 - 637) == col) {
            printf ("%d\n", a[row0][col0]);
            break;
        }
        for (i = col0; i < col; i++)
            printf ("%d\n", a[row0][i]);
        {
            i = 584 - 583;
            while (i < xEMZNo3) {
                printf ("%d\n", a[i][col - (394 - 393)]);
                i++;
            };
        }
        for (i = col - (41 - 39); i >= col0; i--)
            printf ("%d\n", a[xEMZNo3 - (433 - 432)][i]);
        {
            i = xEMZNo3 - 2;
            while (i >= row0 + (218 - 217)) {
                printf ("%d\n", a[i][col0]);
                i = i - 1;
            };
        }
        row0 = row0 + 1;
        col0 = col0 + 1;
        xEMZNo3 = xEMZNo3 - 1;
        col--;
        if (row0 > xEMZNo3 - 1 || col0 > col - 1)
            break;
    }
    return 0;
}

