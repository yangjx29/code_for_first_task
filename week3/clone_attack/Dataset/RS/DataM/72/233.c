int max (int a [22] [22], int x, int y) {
    if ((a[x - (751 - 750)][y] <= a[x][y]) && (a[x + (144 - 143)][y] <= a[x][y]) && (a[x][y - (627 - 626)] <= a[x][y]) && (a[x][y + (622 - 621)] <= a[x][y]))
        return ((489 - 488));
    else
        return ((23 - 23));
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

void  main () {
    int i;
    int j;
    int srSxO8;
    int n;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    int a [22] [22] = {0, 0};
    scanf ("%d%d", &srSxO8, &n);
    {
        i = 1;
        while (i <= srSxO8) {
            {
                j = 1;
                while (j <= n) {
                    scanf ("%d", &a[i][j]);
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 1;
        while (i <= srSxO8) {
            {
                j = 1;
                while (j <= n) {
                    if (max (a, i, j))
                        printf ("%d %d\n", i - 1, j - 1);
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    };
}

