int main (int argc, char *argv []) {
    int row;
    int col;
    int ROW;
    int COL;
    int array [(364 - 264)] [100];
    scanf ("%d %d", &ROW, &COL);
    for (row = (766 - 766); ROW > row; row = row + 1) {
        for (col = (410 - 410); COL > col; col = col + 1) {
            scanf ("%d", &array[row][col]);
        };
    }
    if ((565 - 564) < ROW &&(384 - 383) < COL) {
        for (col = (25 - 25); col < COL; col = col + 1) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            for (row = 0; row < ROW; row++) {
                if (0 > col - row)
                    break;
                else
                    printf ("%d\n", array[row][col - row]);
            };
        }
        {
            row = 431 - 430;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (ROW -(459 - 458) > row) {
                for (col = COL -1; 0 <= col; col = col - 1) {
                    if (row + COL -1 - col > ROW -1)
                        break;
                    else
                        printf ("%d\n", array[row + COL -1 - col][col]);
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
                row = row + 1;
            };
        };
    }
    if (ROW == 1 && COL > 1) {
        for (col = 0; col < COL -1; col++) {
            printf ("%d\n", array[0][col]);
        };
    }
    if (COL == 1 && ROW > 1) {
        row = 0;
        while (row < ROW -1) {
            printf ("%d\n", array[row][0]);
            row++;
        };
    }
    printf ("%d", array[ROW -1][COL -1]);
    return 0;
}

