void  main () {
    int row;
    int col;
    int a [MAX] [MAX];
    int i;
    int j;
    int k;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d%d", &row, &col);
    for (i = (274 - 274); row > i; i = i + 1)
        for (j = 0; col > j; j++)
            scanf ("%d", &a[i][j]);
    for (j = 0; j < col; j++)
        for (i = 0, k = j; i < row && k >= 0; i = i + 1, k = k - 1)
            printf ("%d\n", a[i][k]);
    for (i = 1; i < row; i++)
        for (k = i, j = col - 1; k < row && j >= 0; k = k + 1, j = j - 1)
            printf ("%d\n", a[k][j]);
}

