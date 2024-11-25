int main () {
    int fZVqnJc3QY [110] [110];
    int time;
    int row;
    int col;
    int jzn2KBokER6c;
    int j;
    int JK3bt4snR;
    int k;
    int p;
    int num;
    time = 0;
    scanf ("%d%d", &row, &col);
    num = row * col;
    for (jzn2KBokER6c = 0; jzn2KBokER6c < row; jzn2KBokER6c++) {
        for (j = 0; j < col; j++) {
            scanf ("%d", &fZVqnJc3QY[jzn2KBokER6c][j]);
        };
    }
    for (jzn2KBokER6c = 0;; jzn2KBokER6c++) {
        for (j = jzn2KBokER6c; j < col - jzn2KBokER6c; j++) {
            printf ("%d\n", fZVqnJc3QY[jzn2KBokER6c][j]);
            time = time + 1;
        }
        if (!(num != time)) {
            break;
        }
        for (JK3bt4snR = 1 + jzn2KBokER6c; JK3bt4snR < row - jzn2KBokER6c; JK3bt4snR = JK3bt4snR +1) {
            printf ("%d\n", fZVqnJc3QY[JK3bt4snR][col - 1 - jzn2KBokER6c]);
            time++;
        }
        if (time == num) {
            break;
        }
        for (k = col - 2 - jzn2KBokER6c; k >= jzn2KBokER6c; k--) {
            time++;
            printf ("%d\n", fZVqnJc3QY[row - 1 - jzn2KBokER6c][k]);
        }
        if (time == num) {
            break;
        }
        for (p = row - 2 - jzn2KBokER6c; p > jzn2KBokER6c; p--) {
            time++;
            printf ("%d\n", fZVqnJc3QY[p][jzn2KBokER6c]);
        }
        if (time == num) {
            break;
        };
    };
}

