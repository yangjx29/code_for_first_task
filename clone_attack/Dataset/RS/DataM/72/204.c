char Z0KIrw (int x, int y, int a [20] [20], int m, int n) {
    char d [4] = {'\0'};
    int b [4] = {0};
    int i, t1 = 0, t2 = 0;
    char c;
    if (0 <= x - 1) {
        if (a[x - 1][y] <= a[x][y])
            d[0] = 't';
        t1++;
        b[0] = 1;
    }
    if (x + 1 <= m - 1) {
        if (a[x + 1][y] <= a[x][y])
            d[1] = 't';
        t1++;
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
        b[1] = 1;
    }
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
    if (0 <= y - 1) {
        if (a[x][y] >= a[x][y - 1])
            d[2] = 't';
        t1++;
        b[2] = 1;
    }
    if (y + 1 <= n - 1) {
        b[3] = 1;
        t1++;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (a[x][y + 1] <= a[x][y])
            d[3] = 't';
    }
    {
        i = 0;
        while (i < 4) {
            if (b[i] == 1 && d[i] == 't')
                t2++;
            i = i + 1;
        };
    }
    if (t1 == t2)
        c = 't';
    else
        c = 'f';
    return c;
}

main () {
    int a [20] [20] = {0};
    int b [20] [20] = {0};
    int m, n, i, j;
    getchar ();
    scanf ("%d %d", &m, &n);
    for (i = 0; i < m; i = i + 1) {
        j = 0;
        while (j < n) {
            scanf ("%d", &a[i][j]);
            j = j + 1;
        };
    }
    {
        i = 0;
        while (i < m) {
            for (j = 0; j < n; j = j + 1) {
                if (Z0KIrw (i, j, a, m, n) == 't')
                    b[i][j] = 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            i++;
        };
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (b[i][j] == 1)
                printf ("%d %d\n", i, j);
        };
    }
    getchar ();
}

