int main () {
    int row, col, i, j, **p, k;
    scanf ("%d %d", &row, &col);
    p = (int **) malloc (row * sizeof (int *));
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < row) {
            *(p + i) = (int *) malloc (col * sizeof (int));
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
            i = i + 1;
        };
    }
    for (i = 0; i < row; i = i + 1) {
        j = 0;
        while (j < col) {
            scanf ("%d", *(p + i) + j);
            j = j + 1;
        };
    }
    for (j = 0; j < col; j++) {
        k = j;
        i = 0;
        while (0 <= k && i < row) {
            printf ("%d\n", *(*(p + i) + k));
            k = k - 1;
            i = i + 1;
        };
    }
    for (i = 1; i < row; i = i + 1) {
        k = i;
        j = col - 1;
        while (k < row && j >= 0) {
            printf ("%d\n", *(*(p + k) + j));
            j = j - 1;
            k = k + 1;
        };
    };
}

