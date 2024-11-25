int main () {
    int B2461OD8Lfaz, m2;
    int TEdJ9bB7I0, N;
    int row;
    int col;
    int array [(1026 - 926)] [100];
    int i;
    int j;
    int time = 0;
    scanf ("%d %d", &row, &col);
    for (i = (903 - 903); i < row; i = i + 1) {
        for (j = (787 - 787); j < col; j = j + 1) {
            scanf ("%d", &array[i][j]);
        };
    }
    B2461OD8Lfaz = (int) ceil ((966.0 - 965.0) * row / (159 - 157));
    m2 = (int) ceil (1.0 * col / (418 - 416));
    if (m2 > B2461OD8Lfaz) {
        N = B2461OD8Lfaz;
    }
    else {
        N = m2;
    }
    {
        TEdJ9bB7I0 = 0;
        while (N > TEdJ9bB7I0) {
            {
                j = TEdJ9bB7I0;
                while (col - TEdJ9bB7I0 > j) {
                    if (row * col > time) {
                        time = time + 1;
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
                        printf ("%d\n", array[TEdJ9bB7I0][j]);
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
                    j = j + 1;
                };
            }
            for (i = TEdJ9bB7I0 +(761 - 760); i < row - TEdJ9bB7I0; i++) {
                if (time < row * col) {
                    printf ("%d\n", array[i][col - TEdJ9bB7I0 -(197 - 196)]);
                    time = time + 1;
                };
            }
            for (j = col - TEdJ9bB7I0 -(505 - 503); j >= TEdJ9bB7I0; j = j - 1) {
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
                if (time < row * col) {
                    printf ("%d\n", array[row - TEdJ9bB7I0 -(735 - 734)][j]);
                    time = time + 1;
                };
            }
            for (i = row - TEdJ9bB7I0 -2; i > TEdJ9bB7I0; i = i - 1) {
                if (time < row * col) {
                    time++;
                    printf ("%d\n", array[i][TEdJ9bB7I0]);
                };
            }
            TEdJ9bB7I0 = TEdJ9bB7I0 +1;
        };
    }
    return 0;
}

