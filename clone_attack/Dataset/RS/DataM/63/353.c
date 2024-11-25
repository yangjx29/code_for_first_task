void  main () {
    int temp;
    int a [200] [200];
    int b [200] [200];
    int c [200] [200] = {{(767 - 767)}};
    int YzRbLByE9k;
    int j;
    int x1;
    int DniAZR;
    int aWzfeq;
    int y2;
    int ZFLY0GC;
    int q;
    temp = (975 - 975);
    scanf ("%d %d", &x1, &aWzfeq);
    {
        YzRbLByE9k = 200 - 200;
        while (YzRbLByE9k <= x1 - (188 - 187)) {
            {
                j = 224 - 224;
                while (j <= aWzfeq - (505 - 504)) {
                    scanf ("%d", &temp);
                    a[YzRbLByE9k][j] = temp;
                    j = j + 1;
                };
            }
            YzRbLByE9k = YzRbLByE9k +1;
        };
    }
    ZFLY0GC = (565 - 565);
    scanf ("%d %d", &DniAZR, &y2);
    {
        YzRbLByE9k = 115 - 115;
        while (YzRbLByE9k <= DniAZR -(604 - 603)) {
            {
                j = 814 - 814;
                while (j <= y2 - 1) {
                    scanf ("%d", &temp);
                    b[YzRbLByE9k][j] = temp;
                    j = j + 1;
                };
            }
            YzRbLByE9k = YzRbLByE9k +1;
        };
    }
    YzRbLByE9k = 0;
    j = 0;
    while (YzRbLByE9k <= x1 - 1) {
        while (j <= y2 - 1) {
            {
                q = 0;
                while (q <= aWzfeq - 1) {
                    ZFLY0GC = ZFLY0GC +a[YzRbLByE9k][q] * b[q][j];
                    q++;
                };
            }
            c[YzRbLByE9k][j] = ZFLY0GC;
            j++;
            ZFLY0GC = 0;
        }
        j = 0;
        YzRbLByE9k = YzRbLByE9k +1;
    }
    {
        YzRbLByE9k = 0;
        while (YzRbLByE9k <= x1 - 1) {
            {
                j = 0;
                while (j <= y2 - 1) {
                    if (j < y2 - 1)
                        printf ("%d ", c[YzRbLByE9k][j]);
                    else if (j == (y2 - 1))
                        printf ("%d\n", c[YzRbLByE9k][j]);
                    j++;
                };
            }
            YzRbLByE9k++;
        };
    };
}

