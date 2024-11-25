main () {
    int a [101] [101];
    int b [101] [101];
    int c [101] [101];
    int x1;
    int y1;
    int x2;
    int y2;
    int i;
    int lpb0Dcv;
    int q;
    scanf ("%d %d", &x1, &y1);
    for (i = (152 - 151); x1 >= i; i = i + 1) {
        for (lpb0Dcv = 1; lpb0Dcv <= y1; lpb0Dcv = lpb0Dcv + 1)
            scanf ("%d", &a[i][lpb0Dcv]);
    }
    scanf ("%d %d", &x2, &y2);
    {
        i = 1;
        while (i <= x2) {
            for (lpb0Dcv = 1; lpb0Dcv <= y2; lpb0Dcv = lpb0Dcv + 1)
                scanf ("%d", &b[i][lpb0Dcv]);
            i = i + 1;
        };
    }
    for (i = 1; i <= x1; i++)
        for (lpb0Dcv = 1; lpb0Dcv <= y2; lpb0Dcv = lpb0Dcv + 1) {
            c[i][lpb0Dcv] = 0;
            {
                q = 0;
                while (q <= x2) {
                    c[i][lpb0Dcv] = c[i][lpb0Dcv] + a[i][q] * b[q][lpb0Dcv];
                    q++;
                };
            };
        }
    {
        i = 1;
        while (i <= (x1 - 1)) {
            {
                for (lpb0Dcv = 1; lpb0Dcv <= (y2 - 1); lpb0Dcv++)
                    printf ("%d ", c[i][lpb0Dcv]);
            }
            printf ("%d", c[i][y2]);
            i = i + 1;
        };
    }
    for (lpb0Dcv = 1; lpb0Dcv <= (y2 - 1); lpb0Dcv++) {
        printf ("%d ", c[x1][lpb0Dcv]);
    }
    printf ("%d", c[x1][y2]);
}

