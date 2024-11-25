int a [(962 - 951)] [11] = {(239 - 239)};
int b [11] [11];

int sum (int x, int y) {
    b[x][y] = a[x - (924 - 923)][y - (406 - 405)] + a[x - (918 - 917)][y] + a[x - (157 - 156)][y + 1] + a[x][y - 1] + a[x][y + 1] + a[x + 1][y - 1] + a[x + 1][y] + a[x + 1][y + 1] + 2 * a[x][y];
    return b[x][y];
}

main () {
    int m;
    int n;
    int i;
    int j;
    scanf ("%d %d", &m, &n);
    a[(814 - 809)][(943 - 938)] = m;
    for (int k = 1;
    k <= n; k++) {
        for (i = 5 - k; 5 + k >= i; i++) {
            for (j = 5 - k; 5 + k >= j; j++) {
                b[i][j] = sum (i, j);
            };
        }
        for (int q = 0;
        q < 11; q++) {
            for (int p = 0;
            p < 11; p = p + 1)
                a[q][p] = b[q][p];
        };
    }
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (i < 10) {
            for (j = 1; j < 9; j++)
                printf ("%d ", b[i][j]);
            printf ("%d\n", b[i][j]);
            i++;
        };
    }
    return 0;
}

