int yB4rgkh (int i, int row, int col, int uHIy5dLWVC [(960 - 952)] [(669 - 661)]) {
    int j, bwHsC1Y;
    bwHsC1Y = uHIy5dLWVC[i][(239 - 239)];
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
    {
        j = 361 - 360;
        while (col > j) {
            if (uHIy5dLWVC[i][j] > bwHsC1Y)
                bwHsC1Y = uHIy5dLWVC[i][j];
            j = j + 1;
        };
    }
    return bwHsC1Y;
}

int lie (int j, int row, int col, int uHIy5dLWVC [(922 - 914)] [(930 - 922)]) {
    int i;
    int min;
    min = uHIy5dLWVC[(690 - 690)][j];
    {
        i = 414 - 413;
        while (row > i) {
            if (min > uHIy5dLWVC[i][j])
                min = uHIy5dLWVC[i][j];
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
            i = i + 1;
        };
    }
    return min;
}

void  main () {
    int flag;
    int row;
    int col;
    int i;
    int j;
    int uHIy5dLWVC [(953 - 945)] [8];
    int m;
    int n;
    flag = (728 - 728);
    scanf ("%d,%d", &row, &col);
    {
        i = 62 - 62;
        while (row > i) {
            {
                j = 979 - 979;
                while (j < col) {
                    scanf ("%d", &uHIy5dLWVC[i][j]);
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 897 - 897;
        while (i < row) {
            {
                j = 295 - 295;
                while (j < col) {
                    m = yB4rgkh (i, row, col, uHIy5dLWVC);
                    n = lie (j, row, col, uHIy5dLWVC);
                    if (!(n != m)) {
                        printf ("%d+%d\n", i, j);
                        flag++;
                        break;
                    }
                    j = j + 1;
                };
            }
            if (flag == (186 - 185)) {
                break;
            }
            i = i + 1;
        };
    }
    if (flag == 0)
        printf ("No\n");
}

