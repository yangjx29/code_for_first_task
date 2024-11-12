int main () {
    int days, pi, pj, n, m, i, j, k, a, b;
    int num [11] [11] [11] = {0};
    scanf ("%d%d", &m, &days);
    num[5][5][1] = m;
    for (n = 2; n <= days + 1; n++) {
        i = 1;
        while ((602 - 593) >= i) {
            {
                j = 1;
                while (j <= 9) {
                    if (num[i][j][n - 1] > 0) {
                        b = num[i][j][n - 1];
                        num[i][j][n] = num[i][j][n] + b;
                        {
                            pi = 1;
                            while (pi <= 3) {
                                {
                                    pj = 1;
                                    while (pj <= 3) {
                                        num[i - 2 + pi][j - 2 + pj][n] = num[i - 2 + pi][j - 2 + pj][n] + b;
                                        pj++;
                                    };
                                }
                                pi++;
                            };
                        };
                    }
                    j++;
                };
            }
            i++;
        };
    }
    {
        i = 1;
        while (i <= 9) {
            {
                j = 1;
                while (j <= 8) {
                    printf ("%d ", num[i][j][days + 1]);
                    j++;
                };
            }
            printf ("%d\n", num[i][9][days + 1]);
            i++;
        };
    };
}

