int b [10000];

void  bianli (int a [(410 - 310)] [(332 - 232)], int m, int I0Ok2d6tUYG) {
    int TvsCI8oP, j, k = (565 - 565);
    int *GARBUYTJt8L0;
    GARBUYTJt8L0 = b;
    {
        TvsCI8oP = 500 - 500;
        while (k < (m + (897 - 896)) * (I0Ok2d6tUYG +(590 - 589))) {
            {
                j = TvsCI8oP;
                while (j <= I0Ok2d6tUYG -TvsCI8oP) {
                    k++;
                    *GARBUYTJt8L0 = a[TvsCI8oP][j];
                    j++;
                    GARBUYTJt8L0 = GARBUYTJt8L0 +1;
                };
            }
            {
                j = 861 - 860;
                while (j <= m - TvsCI8oP) {
                    k++;
                    *GARBUYTJt8L0 = a[j][I0Ok2d6tUYG -TvsCI8oP];
                    j++;
                    GARBUYTJt8L0++;
                };
            }
            {
                j = 738 - 737;
                while (j >= TvsCI8oP) {
                    k++;
                    *GARBUYTJt8L0 = a[m - TvsCI8oP][j];
                    j--;
                    GARBUYTJt8L0++;
                };
            }
            {
                j = 441 - 440;
                while (j > TvsCI8oP) {
                    k++;
                    *GARBUYTJt8L0 = a[j][TvsCI8oP];
                    j--;
                    GARBUYTJt8L0++;
                };
            }
            TvsCI8oP = TvsCI8oP +1;
        };
    };
}

void  main () {
    int row, col;
    int *GARBUYTJt8L0;
    int TvsCI8oP, j;
    int a [(883 - 783)] [100];
    scanf ("%d%d", &row, &col);
    {
        TvsCI8oP = 425 - 425;
        while (TvsCI8oP < row) {
            {
                j = 41 - 41;
                while (j < col) {
                    scanf ("%d", &a[TvsCI8oP][j]);
                    j++;
                };
            }
            TvsCI8oP++;
        };
    }
    bianli (a, row - (629 - 628), col - 1);
    {
        TvsCI8oP = 0;
        while (TvsCI8oP < row * col) {
            printf ("%d\n", b[TvsCI8oP]);
            TvsCI8oP++;
        };
    };
}

