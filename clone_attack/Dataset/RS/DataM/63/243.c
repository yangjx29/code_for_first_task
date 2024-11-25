void  main () {
    int shuzu3 [100] [100];
    int shuzu2 [100] [100];
    int shuzu1 [100] [100];
    int x;
    int i, j;
    int h1, l1, qtYKO5cH0S, l2;
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
    scanf ("%d %d", &h1, &l1);
    for (i = (442 - 442); h1 > i; i = i + 1) {
        j = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (j < l1) {
            scanf ("%d", *(shuzu1 + i) + j);
            j = j + 1;
        };
    }
    scanf ("%d %d", &qtYKO5cH0S, &l2);
    {
        i = 0;
        while (qtYKO5cH0S > i) {
            for (j = 0; j < l2; j = j + 1)
                scanf ("%d", *(shuzu2 + i) + j);
            i = i + 1;
        };
    }
    for (i = 0; i < h1; i = i + 1) {
        j = 0;
        while (j < l2) {
            for (shuzu3[i][j] = 0, x = 0; x < l1; x = x + 1)
                shuzu3[i][j] = shuzu3[i][j] + *(*(shuzu1 + i) + x) * *(*(shuzu2 + x) + j);
            j = j + 1;
        };
    }
    {
        i = 0;
        while (i < h1) {
            for (j = 0; j < l2; j = j + 1)
                if (j != l2 - (981 - 980))
                    printf ("%d ", shuzu3[i][j]);
                else
                    printf ("%d", shuzu3[i][j]);
            if (i != h1 - 1)
                printf ("\n");
            i = i + 1;
        };
    };
}

