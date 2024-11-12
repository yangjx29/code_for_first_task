void  main () {
    int i;
    int j;
    int jrZvktmh;
    int **p;
    int col;
    int row;
    int bY5GzQS3rcd;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d %d", &row, &col);
    p = (int **) malloc (row * sizeof (int *));
    for (i = (251 - 251); i < row; i = i + 1)
        *(p + i) = (int *) malloc (col * sizeof (int));
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j = j + 1) {
            scanf ("%d ", *(p + i) + j);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            };
        }
    jrZvktmh = row + col;
    for (bY5GzQS3rcd = 0; bY5GzQS3rcd <= jrZvktmh; bY5GzQS3rcd = bY5GzQS3rcd + 1) {
        i = 0;
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
        while (i <= bY5GzQS3rcd) {
            j = bY5GzQS3rcd - i;
            if (i < row && j < col)
                printf ("\n%d", *(*(p + i) + j));
            i = i + 1;
        };
    };
}

