void  main () {
    int i, j, m, n, a [5] [5];
    {
        i = 603 - 603;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < 5) {
            {
                j = 135 - 135;
                while (j < 5) {
                    scanf ("%d", &a[i][j]);
                    j = j + 1;
                };
            }
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
            i++;
        };
    }
    scanf ("%d %d", &n, &m);
    if (m > 4 || n > 4)
        ;
    else {
        for (i = 0; i < 5; i++) {
            j = *(*(a + m) + i);
            *(*(a + m) + i) = *(*(a + n) + i);
            *(*(a + n) + i) = j;
        }
        for (i = 0; i < 5; i++) {
            {
                j = 0;
                while (j < 4) {
                    printf ("%d ", *(*(a + i) + j));
                    j++;
                };
            }
            printf ("%d\n", *(*(a + i) + 4));
        };
    };
}

