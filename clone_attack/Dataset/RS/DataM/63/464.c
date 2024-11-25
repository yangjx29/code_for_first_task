int main () {
    int rpPbUr2;
    int A2fhVzi6;
    int row2;
    int column2;
    int bIN9p5wVFu;
    int j;
    int k;
    int dFHGm9XYj;
    int matrix1 [100] [100];
    int matrix2 [100] [100];
    int temp1;
    temp1 = column2 - 1;
    scanf ("%d%d", &rpPbUr2, &A2fhVzi6);
    {
        bIN9p5wVFu = 868 - 868;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (bIN9p5wVFu < rpPbUr2) {
            for (j = 0; j < A2fhVzi6; j = j + 1)
                scanf ("%d", &matrix1[bIN9p5wVFu][j]);
            bIN9p5wVFu = bIN9p5wVFu + 1;
        };
    }
    scanf ("%d%d", &row2, &column2);
    for (bIN9p5wVFu = 0; bIN9p5wVFu < row2; bIN9p5wVFu = bIN9p5wVFu + 1) {
        j = 0;
        while (column2 > j) {
            scanf ("%d", &matrix2[bIN9p5wVFu][j]);
            j = j + 1;
        };
    }
    {
        bIN9p5wVFu = 0;
        while (bIN9p5wVFu < rpPbUr2) {
            for (j = 0; j < temp1; j = j + 1) {
                dFHGm9XYj = 0;
                {
                    k = 0;
                    while (k < A2fhVzi6) {
                        dFHGm9XYj = dFHGm9XYj + matrix1[bIN9p5wVFu][k] * matrix2[k][j];
                        k = k + 1;
                    };
                }
                printf ("%d ", dFHGm9XYj);
            }
            dFHGm9XYj = 0;
            {
                k = 0;
                while (k < A2fhVzi6) {
                    dFHGm9XYj = dFHGm9XYj + matrix1[bIN9p5wVFu][k] * matrix2[k][j];
                    k = k + 1;
                };
            }
            bIN9p5wVFu = bIN9p5wVFu + 1;
            printf ("%d\n", dFHGm9XYj);
        };
    }
    return 0;
}

