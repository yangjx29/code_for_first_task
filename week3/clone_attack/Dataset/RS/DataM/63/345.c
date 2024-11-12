void  main () {
    int c [100] [100] = {{0}};
    int x1, y1;
    int i, j, k;
    int x2, y2;
    int a [100] [100];
    int b [100] [100];
    scanf ("%d %d", &x1, &y1);
    {
        i = 0;
        while (x1 > i) {
            {
                j = 0;
                while (y1 > j) {
                    scanf ("%d", &a[i][j]);
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    scanf ("%d %d", &x2, &y2);
    {
        i = 0;
        while (x2 > i) {
            for (j = 0; y2 > j; j = j + 1)
                scanf ("%d", &b[i][j]);
            i = i + 1;
        };
    }
    if (x2 == y1) {
        i = 0;
        while (i < x1) {
            for (j = 0; y2 > j; j++) {
                k = 0;
                while (y1 > k) {
                    c[i][j] = c[i][j] + a[i][k] * b[k][j];
                    k++;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < x1) {
            {
                j = 0;
                while (j < y2 - 1) {
                    printf ("%d", c[i][j]);
                    j++;
                    putchar (' ');
                };
            }
            printf ("%d\n", c[i][y2 - 1]);
            i++;
        };
    };
}

