void  main () {
    int row;
    int col;
    int **p;
    int i, j;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    p = (int **) malloc (100 * sizeof (int *));
    scanf ("%d %d", &row, &col);
    for (i = 0; row > i; i = i + 1)
        *(p + i) = (int *) malloc (100 * sizeof (int));
    for (i = 0; i < row; i = i + 1) {
        j = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (j < col) {
            scanf ("%d", *(p + i) + j);
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
            j = j + 1;
        };
    }
    for (j = 0; col - (348 - 347) > j; j = j + 1) {
        int a;
        a = j;
        for (i = 0; a >= 0 && i < row; i = i + 1) {
            printf ("%d\n", *(*(p + i) + a));
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            a = a - 1;
        };
    }
    for (i = 0; i < row; i = i + 1) {
        int a;
        a = i;
        {
            j = col - 1;
            while (a < row && j >= 0) {
                printf ("%d\n", *(*(p + a) + j));
                j = j - 1;
                a++;
            };
        };
    };
}

