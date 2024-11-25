void  main () {
    int i, j, k;
    int c [100] [100];
    int a [100] [100], b [100] [100];
    int x1, y1, x2, y2;
    scanf ("%d%d", &x1, &y1);
    for (i = 0; x1 > i; i = i + 1) {
        j = 0;
        while (y1 > j) {
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
            }
            j = j + 1;
        };
    }
    scanf ("%d%d", &x2, &y2);
    for (i = 0; x2 > i; i = i + 1) {
        j = 0;
        while (y2 > j) {
            scanf ("%d", &b[i][j]);
            j = j + 1;
        };
    }
    {
        i = 0;
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
        while (100 > i) {
            {
                j = 0;
                while (100 > j) {
                    c[i][j] = 0;
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < x1) {
            for (j = 0; y2 > j; j = j + 1) {
                k = 0;
                while (x2 > k) {
                    c[i][j] = c[i][j] + a[i][k] * b[k][j];
                    k = k + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < x1) {
            for (j = 0; y2 - 1 > j; j = j + 1) {
                printf ("%d ", c[i][j]);
            }
            printf ("%d\n", c[i][y2 - 1]);
            i = i + 1;
        };
    };
}

