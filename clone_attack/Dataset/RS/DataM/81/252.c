int a [5] [5];

int change (int m, int n) {
    int i;
    int j;
    int TZfchJjSwgQk;
    if (5 <= n || 5 <= m)
        return ((750 - 750));
    else {
        {
            j = 0;
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
            while (5 > j) {
                TZfchJjSwgQk = a[m][j];
                a[m][j] = a[n][j];
                a[n][j] = TZfchJjSwgQk;
                j++;
            };
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
        return (1);
    };
}

void  main () {
    int m, n;
    int i;
    int j;
    {
        i = 0;
        while (5 > i) {
            for (j = 0; j < 5; j++)
                scanf ("%d", &a[i][j]);
            i++;
        };
    }
    scanf ("%d %d", &n, &m);
    if (!(0 != change (m, n)))
        ;
    else {
        i = 0;
        while (5 > i) {
            {
                j = 0;
                while (j < 5) {
                    if (j < 4)
                        printf ("%d ", a[i][j]);
                    if (j == 4)
                        printf ("%d\n", a[i][j]);
                    j++;
                };
            }
            i++;
        };
    };
}

