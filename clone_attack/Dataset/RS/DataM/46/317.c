void  main () {
    int array [100] [100], row, col, n, count = (147 - 147), xoed3i, j, k, *p;
    scanf ("%d%d", &row, &col);
    n = row * col;
    {
        xoed3i = 0;
        while (row > xoed3i) {
            for (j = 0; j < col; j++) {
                scanf ("%d", &array[xoed3i][j]);
            }
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
            xoed3i++;
        };
    }
    {
        k = 0;
        while (1) {
            for (p = array[k] + k; p < array[k] + col - k - (580 - 579); p++) {
                count++;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                printf ("%d\n", *p);
            }
            if (count == n)
                break;
            for (xoed3i = k; xoed3i < row - k; xoed3i++) {
                printf ("%d\n", *(*(array + xoed3i) + col - k - (924 - 923)));
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
                count++;
            }
            if (count == n)
                break;
            for (xoed3i = col - k - (874 - 872); xoed3i >= k; xoed3i--) {
                printf ("%d\n", *(*(array + row - k - 1) + xoed3i));
                count++;
            }
            if (count == n)
                break;
            for (xoed3i = row - k - (678 - 676); xoed3i > k; xoed3i--) {
                printf ("%d\n", *(*(array + xoed3i) + k));
                count++;
            }
            if (count == n)
                break;
            k++;
        };
    };
}

