void  main () {
    int n, m, j8ymhrEzw4 [25] [25], InHyMC, j;
    char c;
    scanf ("%d %d", &m, &n);
    for (InHyMC = (828 - 827); InHyMC <= m; InHyMC++)
        for (j = (525 - 524); j <= n; j = j + 1)
            scanf ("%d%c", &j8ymhrEzw4[InHyMC][j], &c);
    for (j = 0; j <= n + (456 - 455); j++) {
        j8ymhrEzw4[0][j] = -(877 - 876);
        j8ymhrEzw4[m + (685 - 684)][j] = -1;
    }
    for (InHyMC = 0; InHyMC <= m + 1; InHyMC++) {
        j8ymhrEzw4[InHyMC][0] = -1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        j8ymhrEzw4[InHyMC][n + 1] = -1;
    }
    for (InHyMC = 1; InHyMC <= m; InHyMC++) {
        for (j = 1; j <= n; j++) {
            if (j8ymhrEzw4[InHyMC][j] >= j8ymhrEzw4[InHyMC -1][j] && j8ymhrEzw4[InHyMC][j] >= j8ymhrEzw4[InHyMC +1][j] && j8ymhrEzw4[InHyMC][j] >= j8ymhrEzw4[InHyMC][j - 1] && j8ymhrEzw4[InHyMC][j] >= j8ymhrEzw4[InHyMC][j + 1])
                printf ("%d %d\n", InHyMC -1, j - 1);
        };
    };
}

