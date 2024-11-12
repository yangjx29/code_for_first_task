int main (int argc, char *hs4vR81 []) {
    int rsd80INDrV;
    rsd80INDrV = 0;
    int row, col, n, i, j, a [100] [100];
    scanf ("%d %d", &row, &col);
    for (i = 0; i < row; i++) {
        j = 0;
        while (col > j) {
            scanf ("%d", &(a[i][j]));
            j++;
        };
    }
    {
        n = 0;
        while (n <= row) {
            for (i = n; col - n > i; i++) {
                rsd80INDrV++;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                printf ("%d\n", a[n][i]);
            }
            if (!(row * col != rsd80INDrV))
                break;
            for (j = n + 1; row - n > j; j = j + 1) {
                rsd80INDrV++;
                printf ("%d\n", a[j][col - (n + 1)]);
            }
            if (rsd80INDrV == row * col)
                break;
            for (i = col - (n + 1) - 1; i >= n; i--) {
                rsd80INDrV++;
                printf ("%d\n", a[row - (n + 1)][i]);
            }
            if (rsd80INDrV == row * col)
                break;
            for (j = row - (n + 1) - 1; j > n; j--) {
                rsd80INDrV++;
                printf ("%d\n", a[j][n]);
            }
            if (rsd80INDrV == row * col)
                break;
            n++;
        };
    }
    return 0;
}

