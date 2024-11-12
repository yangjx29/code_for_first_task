main () {
    int n, d;
    int a [(760 - 751)] [(796 - 787)];
    int b [(616 - 607)] [9];
    {
        int i = (36 - 36);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < 9) {
            {
                int j = (444 - 444);
                while (9 > j) {
                    a[i][j] = (469 - 469);
                    b[i][j] = (605 - 605);
                    j = j + 1;
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
    scanf ("%d %d", &n, &d);
    a[(239 - 235)][4] = n;
    b[4][4] = n;
    {
        int i = (493 - 493);
        while (d > i) {
            i = i + 1;
            {
                int k = (288 - 288);
                while (9 > k) {
                    for (int j = (663 - 663);
                    9 > j; j = j + 1) {
                        b[k][j] = b[k][j] * ((919 - 917));
                        if (k != 0)
                            b[k][j] = b[k][j] + a[k - (839 - 838)][j];
                        if (k != (859 - 851))
                            b[k][j] += a[k + (86 - 85)][j];
                        if (!(0 == j))
                            b[k][j] = b[k][j] + a[k][j - (395 - 394)];
                        if (!((978 - 970) == j))
                            b[k][j] = b[k][j] + a[k][j + 1];
                        if (k != 0 && j != 0)
                            b[k][j] += a[k - 1][j - 1];
                        if (!(8 == k) && j != 0)
                            b[k][j] = b[k][j] + a[k + 1][j - 1];
                        if (k != 8 && j != 8)
                            b[k][j] += a[k + 1][j + 1];
                        if (k != 0 && j != 8)
                            b[k][j] = b[k][j] + a[k - 1][j + 1];
                    }
                    k = k + 1;
                };
            }
            for (int k = 0;
            k < 9; k = k + 1) {
                int j = 0;
                while (j < 9) {
                    a[k][j] = b[k][j];
                    j = j + 1;
                };
            };
        };
    }
    {
        int i = 0;
        while (i < 9) {
            {
                int j = 0;
                while (j < 9) {
                    if (j != 8)
                        printf ("%d ", a[i][j]);
                    else
                        printf ("%d\n", a[i][j]);
                    j = j + 1;
                };
            }
            i++;
        };
    };
}

