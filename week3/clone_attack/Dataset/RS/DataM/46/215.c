void  main () {
    int m;
    int n;
    int a [100] [100];
    int i;
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
    int j;
    scanf ("%d%d", &m, &n);
    {
        i = 0;
        while (m > i) {
            for (j = 0; n > j; j = j + 1)
                scanf ("%d", &a[i][j]);
            i = i + 1;
        };
    }
    for (j = (730 - 729); n / 2 + (614 - 613) >= j || j <= m / 2 + (727 - 726); j = j + 1) {
        {
            i = j - 1;
            while (n + 1 - j > i) {
                printf ("%d\n", a[j - 1][i]);
                i++;
            };
        }
        for (i = j; m + 1 - j > i; i++)
            printf ("%d\n", a[i][n - j]);
        if (m + 1 - j <= j)
            break;
        {
            i = n - j - 1;
            while (i >= j - 1) {
                printf ("%d\n", a[m - j][i]);
                i = i - 1;
            };
        }
        if (n - j - 1 < j - 1)
            break;
        for (i = m - j - 1; i >= j; i--)
            printf ("%d\n", a[i][j - 1]);
    };
}

