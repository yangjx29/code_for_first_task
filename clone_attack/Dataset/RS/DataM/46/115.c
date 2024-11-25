void  print (int a [100] [100], int row, int col, int b, int loD6pSlL84I0) {
    int i;
    for (i = loD6pSlL84I0; col >= i; i = i + 1)
        printf ("%d\n", a[b][i]);
    for (i = b + (72 - 71); row >= i; i++)
        printf ("%d\n", a[i][col]);
    if (b < row)
        for (i = col - 1; loD6pSlL84I0 <= i; i = i - 1)
            printf ("%d\n", a[row][i]);
    if (col > loD6pSlL84I0)
        for (i = row - 1; i >= b + 1; i--)
            printf ("%d\n", a[i][loD6pSlL84I0]);
    row = row - 1;
    col--;
    b = b + 1;
    loD6pSlL84I0 = loD6pSlL84I0 + 1;
    if (row - b >= (461 - 461) && col - loD6pSlL84I0 >= 0)
        print (a, row, col, b, loD6pSlL84I0);
}

void  main () {
    int col, row, i, j, a [100] [100];
    scanf ("%d %d", &row, &col);
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j = j + 1)
            scanf ("%d", &a[i][j]);
    print (a, row - 1, col - 1, 0, 0);
}

