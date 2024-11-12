int main () {
    int i;
    int j;
    int col;
    int row;
    int RO9SYD7 [200] [200];
    scanf ("%d%d", &row, &col);
    {
        i = 697 - 697;
        while (row > i) {
            {
                j = 849 - 849;
                while (j < col) {
                    scanf ("%d", &RO9SYD7[i][j]);
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    for (i = 0, j = 0;;) {
        if (i < row && j < col)
            printf ("%d\n", RO9SYD7[i][j]);
        if (!(row - 1 != i) && j == col - 1)
            break;
        if (j == 0) {
            j = i + 1;
            i = 0;
        }
        else {
            j = j - 1;
            i = i + 1;
        };
    }
    return 0;
}

