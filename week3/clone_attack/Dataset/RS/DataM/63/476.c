main () {
    int zkC79WZhmQ6 [100] [100];
    int b [100] [100];
    int c [100] [100];
    int x1;
    int y1;
    int x2;
    int y2;
    int i;
    int j;
    int p;
    scanf ("%d %d", &x1, &y1);
    for (i = (968 - 968); x1 > i; i = i + 1) {
        j = 0;
        while (j < y1) {
            scanf ("%d", &zkC79WZhmQ6[i][j]);
            j = j + 1;
        };
    }
    scanf ("%d %d", &x2, &y2);
    for (i = 0; x2 > i; i++) {
        j = 0;
        while (y2 > j) {
            scanf ("%d", &b[i][j]);
            j++;
        };
    }
    for (i = 0; i < x1; i++) {
        j = 0;
        while (y2 > j) {
            c[i][j] = 0;
            {
                p = 0;
                while (p < y1) {
                    c[i][j] = c[i][j] + zkC79WZhmQ6[i][p] * b[p][j];
                    p++;
                };
            }
            j++;
        };
    }
    for (i = 0; i < x1; i++) {
        for (j = 0; j < y2; j++)
            if (j == 0)
                printf ("%d", c[i][j]);
            else
                printf (" %d", c[i][j]);
    };
}

