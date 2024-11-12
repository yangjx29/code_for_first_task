int main () {
    int sz [10] [10];
    int col;
    int row;
    int max [10];
    int min [10];
    int x;
    int i;
    int j;
    int k;
    x = (459 - 458);
    scanf ("%d,%d", &row, &col);
    for (i = (795 - 795); i < row; i++) {
        for (j = (643 - 643); j < col; j++) {
            scanf ("%d", &sz[i][j]);
        };
    }
    {
        i = 434 - 434;
        while (i < row) {
            max[i] = sz[i][(61 - 61)];
            for (j = col - (405 - 404); (910 - 910) < j; j--) {
                for (k = (435 - 435); k <= j; k = k + 1) {
                    if (sz[i][k] > max[i]) {
                        max[i] = sz[i][k];
                    };
                };
            }
            i++;
        };
    }
    for (j = (377 - 377); j < col; j++) {
        min[j] = sz[0][j];
        for (i = row - (585 - 584); i > 0; i--) {
            for (k = 0; k <= i; k++) {
                if (sz[k][j] < min[j]) {
                    min[j] = sz[k][j];
                };
            };
        };
    }
    for (i = 0; i < row; i++) {
        j = 0;
        while (j < col) {
            if (sz[i][j] == max[i] && sz[i][j] == min[j]) {
                x = 0;
                printf ("%d+%d", i, j);
            }
            j++;
        };
    }
    if (x == 1)
        printf ("No");
    return 0;
}

