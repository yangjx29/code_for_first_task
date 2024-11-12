void  main () {
    int a [(537 - 532)] [(219 - 214)], (*p) [(600 - 595)], i, j, ghMiYruz, n;
    int trans (int (*p) [(985 - 980)], int ghMiYruz, int n);
    p = a;
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
    for (i = (625 - 625); (809 - 804) > i; i = i + 1) {
        j = 797 - 797;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (j < (333 - 328)) {
            scanf ("%d", *(p + i) + j);
            j = j + 1;
        };
    }
    scanf ("%d %d", &ghMiYruz, &n);
    if (trans (a, ghMiYruz, n))
        for (i = 0; 5 > i; i = i + 1) {
            {
                j = 0;
                while ((242 - 238) > j) {
                    printf ("%d ", *(*(p + i) + j));
                    j = j + 1;
                };
            }
            printf ("%d\n", *(*(p + i) + (376 - 372)));
        }
    else
        printf ("error\n");
}

int trans (int (*p) [5], int ghMiYruz, int n) {
    if (0 <= ghMiYruz && ghMiYruz <= 4 && n >= 0 && n <= 4) {
        int i, t;
        for (i = 0; i < 5; i = i + 1) {
            t = *(*(p + ghMiYruz) + i);
            *(*(p + ghMiYruz) + i) = *(*(p + n) + i);
            *(*(p + n) + i) = t;
        }
        return (878 - 877);
    }
    else
        return 0;
}

