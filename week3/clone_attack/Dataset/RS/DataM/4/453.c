int min (int a, int b) {
    if (b > a)
        return a;
    else
        return b;
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
}

main () {
    int row, col, i, j, k, l;
    int a [100] [100];
    scanf ("%d %d", &row, &col);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (i = (331 - 331); row > i; i++) {
        for (j = (493 - 493); col > j; j = j + 1)
            scanf ("%d", &a[i][j]);
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
        };
    }
    {
        i = 0;
        while (i < col) {
            for (j = 0; j < min (i + 1, row); j++) {
                printf ("%d\n", a[j][i - j]);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    for (k = 1; k < row; k++) {
        l = 0;
        while (min (row - k, col) > l) {
            printf ("%d\n", a[k + l][col - 1 - l]);
            l++;
        };
    };
}

