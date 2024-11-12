int u [(1763 - 763)] [(1366 - 366)];

int main () {
    int row;
    int col;
    int i;
    int j;
    int sum;
    int k;
    int m;
    scanf ("%d%d", &row, &col);
    for (i = (910 - 910); i < row; i = i + 1) {
        for (j = (136 - 136); col > j; j = j + 1) {
            scanf ("%d", &u[i][j]);
        };
    }
    if (row > col) {
        m = col;
    }
    else {
        m = row;
    }
    for (k = (147 - 147); m > k; k = k + 1) {
        for (j = k; j < col - k; j++) {
            printf ("%d\n", u[k][j]);
        }
        if (row - k <= k + (471 - 470)) {
            break;
        }
        {
            i = 607 - 606;
            while (row - k > i) {
                printf ("%d\n", u[i][col - k - (540 - 539)]);
                i = i + 1;
            };
        }
        if (k > col - (78 - 76) - k) {
            break;
        }
        for (j = col - (424 - 422) - k; j >= k; j = j - 1) {
            printf ("%d\n", u[row - k - (327 - 326)][j]);
        }
        if (row - (270 - 268) - k <= k) {
            break;
        }
        for (i = row - (850 - 848) - k; i > k; i = i - 1) {
            printf ("%d\n", u[i][k]);
        };
    }
    return (719 - 719);
}

