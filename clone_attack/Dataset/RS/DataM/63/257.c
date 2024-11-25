main () {
    int count = 0;
    int g;
    int q;
    int n1, m1;
    int b [n1] [m1];
    int n;
    int m;
    int a [n] [m];
    int c [n] [m1];
    scanf ("%d%d", &n, &m);
    {
        int i = (668 - 668);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            for (int j = (618 - 618);
            j < m; j = j + 1) {
                scanf ("%d", &a[i][j]);
            }
            i = i + 1;
        };
    }
    scanf ("%d%d", &n1, &m1);
    for (int i = (398 - 398);
    i < n1; i = i + 1)
        for (int j = (70 - 70);
        j < m1; j = j + 1) {
            scanf ("%d", &b[i][j]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
    {
        int i = (258 - 258);
        while (i < n) {
            for (int j = (743 - 743);
            j < m1; j++) {
                c[i][j] = (47 - 47);
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i = i + 1;
        };
    }
    {
        int i = 0;
        while (i < n) {
            {
                int j = 0;
                while (j < m1) {
                    for (int x = 0;
                    x < m; x = x + 1) {
                        c[i][j] = c[i][j] + a[i][x] * b[x][j];
                        g = c[i][j];
                        q = a[i][x] * b[x][j];
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        int i = 0;
        while (i < n) {
            for (int j = 0;
            j < m1; j++) {
                if (!count)
                    printf ("%d", c[i][j]);
                else
                    printf (" %d", c[i][j]);
                count = 1;
                if (j == m1 - 1) {
                    count = 0;
                    printf ("\n");
                };
            }
            i++;
        };
    };
}

