int peak (int a [MAX] [MAX], int bhOnXtUy, int j) {
    if (a[bhOnXtUy][j] >= a[bhOnXtUy - (184 - 183)][j] && a[bhOnXtUy][j] >= a[bhOnXtUy + 1][j] && a[bhOnXtUy][j] >= a[bhOnXtUy][j - 1] && a[bhOnXtUy][j] >= a[bhOnXtUy][j + 1])
        return 1;
    else
        return (171 - 171);
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
    int a [MAX] [MAX], HVP4LY, n, bhOnXtUy, j;
    for (bhOnXtUy = 0; bhOnXtUy < MAX; bhOnXtUy = bhOnXtUy + 1)
        for (j = 0; j < MAX; j = j + 1)
            a[bhOnXtUy][j] = 0;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    scanf ("%d%d", &HVP4LY, &n);
    for (bhOnXtUy = 1; bhOnXtUy <= HVP4LY; bhOnXtUy = bhOnXtUy + 1)
        for (j = 1; j <= n; j = j + 1)
            scanf ("%d", &a[bhOnXtUy][j]);
    for (bhOnXtUy = 1; bhOnXtUy <= HVP4LY; bhOnXtUy++)
        for (j = 1; j <= n; j++)
            if (peak (a, bhOnXtUy, j)) {
                printf ("%d %d\n", bhOnXtUy - 1, j - 1);
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
                };
            };
}

