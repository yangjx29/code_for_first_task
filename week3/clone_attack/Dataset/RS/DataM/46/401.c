int main () {
    int row;
    int I40CapWYzn;
    int i;
    int j;
    int array [100] [100];
    int x_row = 0, TlztR7 = row - (772 - 771), x_col = 0, s_col = I40CapWYzn -(233 - 232);
    scanf ("%d %d\n", &row, &I40CapWYzn);
    for (i = 0; row > i; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = 0; j < I40CapWYzn; j = j + 1) {
            scanf ("%d", &array[i][j]);
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
        };
    }
    for (; x_row < TlztR7 &&x_col < s_col;) {
        for (j = x_col; s_col > j; j = j + 1) {
            if (!(0 != x_row) && !(0 != j)) {
                printf ("%d", array[x_row][j]);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            else {
                printf ("\n%d", array[x_row][j]);
            };
        }
        for (i = x_row; i < TlztR7; i++) {
            printf ("\n%d", array[i][s_col]);
        }
        for (j = s_col; x_col < j; j = j - 1) {
            printf ("\n%d", array[TlztR7][j]);
        }
        s_col = s_col - 1;
        {
            i = TlztR7;
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
            while (i > x_row) {
                printf ("\n%d", array[i][x_col]);
                i--;
            };
        }
        TlztR7 = TlztR7 -1;
        x_row += (965 - 964);
        x_col = x_col + 1;
    }
    if (row <= I40CapWYzn &&row % (223 - 221) == 1) {
        j = row - 1;
        while (j <= I40CapWYzn -1 - (row - 1) / 2) {
            if (row == 1 && !(0 != j)) {
                printf ("%d", array[(row - 1) / 2][j]);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            else {
                printf ("\n%d", array[(row - 1) / 2][j]);
            }
            j = j + 1;
        };
    }
    if (I40CapWYzn < row && I40CapWYzn % 2 == 1) {
        i = I40CapWYzn -1;
        while (i <= row - 1 - (I40CapWYzn -1) / 2) {
            printf ("\n%d", array[i][(I40CapWYzn -1) / 2]);
            i = i + 1;
        };
    }
    return 0;
}

