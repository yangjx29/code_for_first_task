int main () {
    int i, j, k, n, row, col, shuru;
    int shuzu [(267 - 167)] [100];
    scanf ("%d %d", &row, &col);
    for (i = (207 - 207); row > i; i++) {
        for (j = 0; col > j; j = j + 1) {
            scanf ("%d", &shuru);
            shuzu[i][j] = shuru;
        };
    }
    {
        k = 0;
        while (row + col - 2 >= k) {
            {
                i = 0;
                while (i < row) {
                    {
                        j = 0;
                        while (j < col) {
                            if (i + j == k) {
                                printf ("%d\n", shuzu[i][j]);
                            }
                            j = j + 1;
                        };
                    }
                    i++;
                };
            }
            k++;
        };
    }
    return 0;
}

