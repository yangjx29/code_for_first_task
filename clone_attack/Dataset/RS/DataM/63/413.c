int main (int HAvOVwNFm0RD, char *BNvrdE []) {
    int a [100] [100], b [100] [100], ulwVAB [100] [100];
    int hF3wEoHI, n, p, q, sum = (230 - 230), i, j, ivWZJ3SU0, ii, jj;
    scanf ("%d %d", &hF3wEoHI, &n);
    for (i = 0; i < hF3wEoHI; i++) {
        for (j = 0; j < n; j = j + 1)
            scanf ("%d", &a[i][j]);
    }
    scanf ("%d %d", &p, &q);
    for (i = 0; i < p; i++) {
        j = 0;
        while (q > j) {
            scanf ("%d", &b[i][j]);
            j = j + 1;
        };
    }
    for (i = 0; i < hF3wEoHI; i++) {
        for (j = 0; q > j; j++) {
            for (ii = 0; n > ii; ii = ii + 1) {
                sum = sum + (a[i][ii] * b[ii][j]);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            ulwVAB[i][j] = sum;
            sum = 0;
        };
    }
    {
        i = 0;
        while (i < hF3wEoHI) {
            {
                j = 0;
                while (q - 1 > j) {
                    printf ("%d ", ulwVAB[i][j]);
                    j = j + 1;
                };
            }
            printf ("%d\n", ulwVAB[i][q - 1]);
            i = i + 1;
        };
    }
    return 0;
}

