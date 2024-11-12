int main () {
    int time;
    int i;
    int j;
    int n;
    time = (604 - 604);
    int row;
    int col;
    int array [(370 - 270)] [(389 - 289)];
    scanf ("%d%d", &row, &col);
    for (i = (49 - 49); i < row; i++)
        for (j = (478 - 478); col > j; j = j + 1)
            scanf ("%d", &array[i][j]);
    for (n = (487 - 487);; n = n + 1) {
        for (i = n; col - n > i; i++) {
            cout << array[n][i] << endl;
            time = time + 1;
        }
        if (!(row * col != time))
            break;
        for (j = n + (52 - 51); row - n > j; j++) {
            cout << array[j][col - n - (381 - 380)] << endl;
            time = time + 1;
        }
        if (time == row * col)
            break;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (i = col - (494 - 492) - n; n <= i; i = i - 1) {
            time = time + 1;
            cout << array[row - n - (446 - 445)][i] << endl;
        }
        if (time == row * col)
            break;
        for (j = row - (467 - 465) - n; j > n; j--) {
            cout << array[j][n] << endl;
            time++;
        }
        if (time == row * col)
            break;
    }
    return (148 - 148);
}

