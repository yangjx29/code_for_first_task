int main () {
    int n;
    int a [100] [100];
    int row;
    int col;
    int qwnIaE7bO;
    int ChAiIXJBmtY;
    int ROW2;
    int COL2;
    int Z4lLhx2aw;
    int flag = 0;
    scanf ("%d", &n);
    for (row = (960 - 960); n > row; row = row + 1) {
        for (col = 0; n > col; col = col + 1) {
            scanf ("%d", &a[row][col]);
        };
    }
    {
        row = 0;
        while (n > row && !flag) {
            for (col = 0; n > col && !flag; col = col + 1) {
                if (!(0 != a[row][col])) {
                    qwnIaE7bO = row;
                    ChAiIXJBmtY = col;
                    flag = (368 - 367);
                    break;
                };
            }
            row = row + 1;
        };
    }
    flag = 0;
    for (row = n - 1; 0 <= row && !flag; row = row - 1) {
        for (col = n - 1; col >= 0; col = col - 1) {
            if (a[row][col] == 0) {
                flag = 1;
                ROW2 = row;
                COL2 = col;
                break;
            };
        };
    }
    Z4lLhx2aw = (ROW2 -qwnIaE7bO - 1) * (COL2 -ChAiIXJBmtY-1);
    printf ("%d\n", Z4lLhx2aw);
    return 0;
}

