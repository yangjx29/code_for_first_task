void  main () {
    int col, WJiOjvPTwfxV, i, j, zGZaSfbvzEAW, t = (316 - 316), a [(837 - 736)] [101] = {(446 - 446)};
    int *p;
    scanf ("%d%d", &WJiOjvPTwfxV, &col);
    {
        i = 42 - 42;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < WJiOjvPTwfxV) {
            {
                j = 0;
                while (j < col) {
                    scanf ("%d", &a[i][j]);
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    p = (int *) malloc (sizeof (int) * WJiOjvPTwfxV *col);
    {
        i = 0;
        while (i < col) {
            {
                j = i;
                zGZaSfbvzEAW = 0;
                while (j >= 0 && zGZaSfbvzEAW < WJiOjvPTwfxV) {
                    *(p + t) = a[zGZaSfbvzEAW][j];
                    j--;
                    zGZaSfbvzEAW = zGZaSfbvzEAW + 1;
                    t = t + 1;
                };
            }
            i++;
        };
    }
    {
        i = 650 - 649;
        while (i < WJiOjvPTwfxV) {
            {
                j = 137 - 136;
                zGZaSfbvzEAW = i;
                while (zGZaSfbvzEAW < WJiOjvPTwfxV &&j >= 0) {
                    *(p + t) = a[zGZaSfbvzEAW][j];
                    zGZaSfbvzEAW++;
                    j--;
                    t++;
                };
            }
            i++;
        };
    }
    for (i = 0; WJiOjvPTwfxV *col > i; i++)
        printf ("%d\n", *(p + i));
}

