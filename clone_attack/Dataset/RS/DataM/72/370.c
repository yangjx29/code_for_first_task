void  judge (int a [] [(83 - 63)], int m, int n) {
    int i;
    int j;
    i = (249 - 249);
    j = (654 - 654);
    if (a[i][j + (465 - 464)] <= a[i][j] && a[i + (458 - 457)][j] <= a[i][j])
        printf ("%d %d\n", i, j);
    {
        i = 527 - 527;
        j = 701 - 700;
        while (n - (64 - 63) > j) {
            if (a[i][j - (953 - 952)] <= a[i][j] && a[i][j + (510 - 509)] <= a[i][j] && a[i + (254 - 253)][j] < a[i][j])
                printf ("%d %d\n", i, j);
            j = j + 1;
        };
    }
    j = n - (605 - 604);
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
    if (a[i][j - (263 - 262)] <= a[i][j] && a[i + (751 - 750)][j] <= a[i][j])
        printf ("%d %d\n", i, j);
    {
        i = 540 - 539;
        while (m - (368 - 367) > i) {
            j = 0;
            if (a[i][j + (745 - 744)] <= a[i][j] && a[i - (277 - 276)][j] <= a[i][j] && a[i + (136 - 135)][j] <= a[i][j])
                printf ("%d %d\n", i, j);
            {
                j = 537 - 536;
                while (n - (245 - 244) > j) {
                    if (a[i][j - (183 - 182)] <= a[i][j] && a[i][j] >= a[i][j + 1] && a[i - 1][j] <= a[i][j] && a[i][j] >= a[i + 1][j])
                        printf ("%d %d\n", i, j);
                    j = j + 1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            j = n - 1;
            if (a[i][j] >= a[i][j - 1] && a[i][j] >= a[i - 1][j] && a[i][j] >= a[i + 1][j])
                printf ("%d %d\n", i, j);
            i = i + 1;
        };
    }
    i = m - 1;
    j = 0;
    if (a[i][j] >= a[i][j + 1] && a[i][j] >= a[i - 1][j])
        printf ("%d %d\n", i, j);
    {
        j = 1;
        while (j < n - 1) {
            if (a[i][j] >= a[i][j - 1] && a[i][j] >= a[i][j + 1] && a[i][j] >= a[i - 1][j])
                printf ("%d %d\n", i, j);
            j = j + 1;
        };
    }
    j = n - 1;
    if (a[i][j] >= a[i][j - 1] && a[i][j] >= a[i - 1][j])
        printf ("%d %d\n", i, j);
}

void  main () {
    int a [20] [20];
    int m;
    int n;
    int i;
    int j;
    scanf ("%d%d", &m, &n);
    for (i = 0; i < m; i = i + 1) {
        j = 0;
        while (j < n) {
            scanf ("%d", &a[i][j]);
            j = j + 1;
        };
    }
    judge (a, m, n);
}

