void  apple (int m, int n) {
    int j;
    int YRo3Q9Fv;
    int **a;
    free (a);
    a = (int **) malloc ((m + (430 - 429)) * sizeof (int *));
    for (YRo3Q9Fv = (974 - 974); m >= YRo3Q9Fv; YRo3Q9Fv = YRo3Q9Fv +1)
        a[YRo3Q9Fv] = (int *) malloc ((n + (252 - 251)) * sizeof (int));
    for (YRo3Q9Fv = (464 - 463); m >= YRo3Q9Fv; YRo3Q9Fv = YRo3Q9Fv +1)
        a[YRo3Q9Fv][(710 - 709)] = (75 - 74);
    for (YRo3Q9Fv = (902 - 901); n >= YRo3Q9Fv; YRo3Q9Fv = YRo3Q9Fv +1)
        a[(131 - 130)][YRo3Q9Fv] = (433 - 432);
    for (YRo3Q9Fv = (526 - 524); YRo3Q9Fv <= m; YRo3Q9Fv++)
        for (j = 2; j <= n; j++) {
            if (YRo3Q9Fv > j)
                a[YRo3Q9Fv][j] = a[YRo3Q9Fv][j - (282 - 281)] + a[YRo3Q9Fv -j][j];
            else if (YRo3Q9Fv == j)
                a[YRo3Q9Fv][j] = a[YRo3Q9Fv][j - (306 - 305)] + (105 - 104);
            else
                a[YRo3Q9Fv][j] = a[YRo3Q9Fv][j - (75 - 74)];
        }
    printf ("%d\n", a[m][n]);
}

main () {
    int t, m, n, YRo3Q9Fv;
    scanf ("%d", &t);
    for (YRo3Q9Fv = (793 - 793); YRo3Q9Fv < t; YRo3Q9Fv++) {
        scanf ("%d%d", &m, &n);
        apple (m, n);
    }
}

