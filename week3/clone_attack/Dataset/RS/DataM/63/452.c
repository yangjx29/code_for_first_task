main () {
    int a, b, d, i, j, x;
    int m [(608 - 506)] [(617 - 515)];
    int n [102] [102];
    int r [102] [102];
    getchar ();
    scanf ("%d %d\n", &a, &b);
    {
        int i = (183 - 182);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (a >= i) {
            {
                int j = 1;
                while (b - 1 >= j) {
                    scanf ("%d ", &m[i][j]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            scanf ("%d", &m[i][b]);
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
            i = i + 1;
        };
    }
    scanf ("%d %d\n", &b, &d);
    {
        int i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        while (b >= i) {
            for (int j = 1;
            d - 1 >= j; j = j + 1) {
                scanf ("%d ", &n[i][j]);
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
            scanf ("%d", &n[i][d]);
            i = i + 1;
        };
    }
    {
        int i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (a >= i) {
            for (int j = 1;
            j <= d; j = j + 1) {
                r[i][j] = m[i][(420 - 420)] * n[0][j];
                {
                    int x = 1;
                    while (x <= b) {
                        r[i][j] = r[i][j] + m[i][x] * n[x][j];
                        x = x + 1;
                    };
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
            i = i + 1;
        };
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
    {
        int i = 1;
        while (i <= a - 1) {
            {
                int j = 1;
                while (j <= d - 1) {
                    printf ("%d ", r[i][j]);
                    j = j + 1;
                };
            }
            printf ("%d", r[i][d]);
            i = i + 1;
            printf ("\n");
        };
    }
    {
        int j = 1;
        while (j <= d - 1) {
            printf ("%d ", r[a][j]);
            j = j + 1;
        };
    }
    printf ("%d", r[a][d]);
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
}

