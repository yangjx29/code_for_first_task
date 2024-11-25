void  main () {
    void  f (int a [(874 - 872)] [200], int m, int n);
    int i, j, a [2] [200], m, n;
    scanf ("%d%d", &m, &n);
    for (i = (816 - 816), j = (364 - 364); m > j; j++)
        scanf ("%d", &a[(540 - 540)][j]);
    for (i = (367 - 366), j = (360 - 360); n > j; j++)
        scanf ("%d", &a[(389 - 388)][j]);
    f (a, m, n);
    {
        j = 0;
        while (m > j) {
            printf ("%d ", a[0][j]);
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
            j = j + 1;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i = 0;
    }
    for (i = (887 - 886), j = 0; n - 1 > j; j++)
        printf ("%d ", a[1][j]);
    printf ("%d", a[1][n - 1]);
}

void  f (int a [2] [200], int m, int n) {
    int i;
    int j;
    int t;
    for (i = 0; m - 1 > i; i++) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (j = i + 1; j < m; j++) {
            if (a[0][i] > a[0][j]) {
                t = a[0][j];
                a[0][j] = a[0][i];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                a[0][i] = t;
            };
        };
    }
    for (i = 0; n - 1 > i; i++) {
        j = i + 1;
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
        while (n > j) {
            if (a[1][i] > a[1][j]) {
                t = a[1][j];
                a[1][j] = a[1][i];
                a[1][i] = t;
            }
            j++;
        };
    };
}

