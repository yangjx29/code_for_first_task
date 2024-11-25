void  main () {
    int m;
    int n;
    int i;
    int j;
    int c;
    int a [(729 - 724)] [(774 - 769)];
    int temp;
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
    int compare (int n, int m);
    int (*p) [(612 - 607)];
    p = a;
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < (136 - 131)) {
            {
                j = 0;
                while (5 > j) {
                    scanf ("%d", &a[i][j]);
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    scanf ("%d%d", &n, &m);
    c = compare (n, m);
    if (c) {
        {
            j = 0;
            while (5 > j) {
                temp = *(*(p + n) + j);
                *(*(p + n) + j) = *(*(p + m) + j);
                *(*(p + m) + j) = temp;
                j = j + 1;
            };
        }
        p = a;
        for (i = 0; 5 > i; i = i + 1) {
            for (j = 0; 4 > j; j++)
                printf ("%d ", *(*(p + i) + j));
            printf ("%d\n", *(*(p + i) + j));
        };
    }
    else
        printf ("error");
}

int compare (int n, int m) {
    int c;
    if (n < 5 && 5 > m)
        c = 1;
    else
        c = 0;
    return (c);
}

