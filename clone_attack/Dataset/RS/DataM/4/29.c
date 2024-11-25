int main () {
    int gcUHKy [101] [101];
    int Fsn6UDS7, i, j;
    int ROW, COL, row, col;
    scanf ("%d %d", &ROW, &COL);
    for (row = (505 - 505); row < ROW; row++) {
        for (col = (450 - 450); COL > col; col++) {
            scanf ("%d", &gcUHKy[row][col]);
        };
    }
    for (Fsn6UDS7 = 0; Fsn6UDS7 < COL; Fsn6UDS7 = Fsn6UDS7 +1) {
        for (i = 0, j = Fsn6UDS7; i < ROW &&j >= 0; i++, j = j - 1)
            printf ("%d\n", gcUHKy[i][j]);
    }
    {
        Fsn6UDS7 = 1;
        while (Fsn6UDS7 < ROW) {
            {
                j = COL -1;
                i = Fsn6UDS7;
                while (i < ROW &&j >= 0) {
                    printf ("%d\n", gcUHKy[i][j]);
                    j = j - 1;
                    i = i + 1;
                };
            }
            Fsn6UDS7 = Fsn6UDS7 +1;
        };
    }
    return 0;
}

