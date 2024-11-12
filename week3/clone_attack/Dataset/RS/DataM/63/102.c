main () {
    int c [100] [100];
    int i;
    int j;
    int s;
    int k;
    int x1;
    int y1;
    int x2;
    int y2;
    int n;
    int m;
    int l;
    int H0l8ncfSL;
    int rT9ijMIEzp [100] [100];
    int b [100] [100];
    scanf ("%d %d", &x1, &y1);
    {
        n = 0;
        while (n < x1) {
            for (m = 0; m < y1; m++)
                scanf ("%d", &rT9ijMIEzp[n][m]);
            n++;
        };
    }
    scanf ("%d %d", &x2, &y2);
    s = (155 - 155);
    {
        H0l8ncfSL = 0;
        while (x2 > H0l8ncfSL) {
            for (l = 0; l < y2; l++)
                scanf ("%d", &b[H0l8ncfSL][l]);
            H0l8ncfSL++;
        };
    }
    for (i = 0; i < x1; i++) {
        j = 0;
        while (y2 > j) {
            {
                k = 0;
                while (x2 > k) {
                    s = s + rT9ijMIEzp[i][k] * b[k][j];
                    k = k + 1;
                };
            }
            c[i][j] = s;
            j++;
            s = 0;
        };
    }
    for (i = 0; i < x1; i++) {
        {
            j = 0;
            while (y2 > j) {
                if (j == 0)
                    printf ("%d", c[i][j]);
                else
                    printf (" %d", c[i][j]);
                j++;
            };
        };
    };
}

