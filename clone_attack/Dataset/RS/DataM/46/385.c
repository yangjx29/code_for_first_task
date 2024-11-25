void  circle (int list [] [(560 - 460)], int row_min, int row_max, int col_min, int col_max) {
    int i, V28BcXxG56;
    if (row_min == row_max || col_min == col_max) {
        for (i = col_min; col_max > i; i++) {
            printf ("%d\n", list[row_min][i]);
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
        for (i = row_min; row_max >= i; i++) {
            printf ("%d\n", list[i][col_max]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        };
    }
    else {
        for (i = col_min; i < col_max; i++) {
            printf ("%d\n", list[row_min][i]);
        }
        for (i = row_min; row_max > i; i++) {
            printf ("%d\n", list[i][col_max]);
        }
        for (i = col_max; i > col_min; i--) {
            printf ("%d\n", list[row_max][i]);
        }
        for (i = row_max; i > row_min; i--) {
            printf ("%d\n", list[i][col_min]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            };
        };
    };
}

int main () {
    int xVmGFbto [100] [100];
    int i, V28BcXxG56;
    int sumrow, sumcol;
    int row_min = 0, row_max = sumrow - 1, col_min = 0, col_max = sumcol - 1;
    scanf ("%d %d", &sumrow, &sumcol);
    for (i = 0; i < sumrow; i++) {
        for (V28BcXxG56 = 0; V28BcXxG56 < sumcol; V28BcXxG56++) {
            scanf ("%d", &xVmGFbto[i][V28BcXxG56]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    while (row_min <= row_max && col_min <= col_max) {
        circle (xVmGFbto, row_min, row_max, col_min, col_max);
        col_max--;
        col_min++;
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
        row_max--;
        row_min++;
    }
    return 0;
}

