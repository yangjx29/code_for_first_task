main () {
    int d [100];
    int C5A6gMnf74J1 [100] [16];
    int VGrwYQUxb;
    int j;
    int k;
    int rNTR7KW9JoFG;
    int t;
    int NuamId79, p;
    {
        VGrwYQUxb = 874 - 874;
        while (1) {
            for (j = (755 - 755);; j++) {
                scanf ("%d", &C5A6gMnf74J1[VGrwYQUxb][j]);
                if (C5A6gMnf74J1[VGrwYQUxb][j] == 0 || !(-1 != C5A6gMnf74J1[VGrwYQUxb][j]))
                    break;
            }
            if (j == 0)
                break;
            rNTR7KW9JoFG = 0;
            for (k = 0; j - 1 > k; k = k + 1) {
                for (t = k + 1; j > t; t++) {
                    p = C5A6gMnf74J1[VGrwYQUxb][t] - C5A6gMnf74J1[VGrwYQUxb][k] * 2;
                    NuamId79 = C5A6gMnf74J1[VGrwYQUxb][k] - C5A6gMnf74J1[VGrwYQUxb][t] * 2;
                    if (p == 0 || NuamId79 == 0)
                        rNTR7KW9JoFG++;
                };
            }
            d[VGrwYQUxb] = rNTR7KW9JoFG;
            VGrwYQUxb++;
        };
    }
    for (k = 0; k < VGrwYQUxb; k = k + 1)
        printf ("%d\n", d[k]);
}

