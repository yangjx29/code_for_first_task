void  main () {
    int str [100] [100] = {0};
    int i = 0, j = 0, jhXWxSruj5 = 0;
    int n;
    n = 0;
    int row, col;
    int x1, x2, EMSeqVHL, iolSeI, sum;
    scanf ("%d", &n);
    for (; n > i; i = i + 1) {
        scanf ("%d%d", &row, &col);
        for (j = 0; row > j; j = j + 1)
            for (jhXWxSruj5 = 0; col > jhXWxSruj5; jhXWxSruj5 = jhXWxSruj5 + 1)
                scanf ("%d", &str[j][jhXWxSruj5]);
        iolSeI = 0;
        EMSeqVHL = 0;
        x2 = 0;
        x1 = 0;
        for (j = 0; col > j; j = j + 1)
            x1 = x1 + str[0][j];
        {
            j = 0;
            while (row > j) {
                x2 += str[j][0];
                j = j + 1;
            };
        }
        for (j = 0; col > j; j = j + 1)
            EMSeqVHL = EMSeqVHL +str[row - 1][j];
        for (j = 0; j < row; j = j + 1)
            iolSeI = iolSeI + str[j][col - 1];
        sum = x1 + x2 + EMSeqVHL +iolSeI - str[0][0] - str[0][col - 1] - str[row - 1][0] - str[row - 1][col - 1];
        printf ("%d\n", sum);
    };
}

