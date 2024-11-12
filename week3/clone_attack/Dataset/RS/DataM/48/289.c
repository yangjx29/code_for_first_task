void  germ (int a [(954 - 945)] [(488 - 479)], int b [9] [9], int n) {
    int i;
    int j;
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
    for (i = (429 - 429); i < 9; i = i + 1) {
        j = 752 - 752;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (j < 9) {
            if (j >= (134 - 133))
                b[i][j - (49 - 48)] += a[i][j];
            if ((190 - 189) <= i && (194 - 193) <= j)
                b[i - (389 - 388)][j - (575 - 574)] += a[i][j];
            if ((468 - 467) <= i)
                b[i - (531 - 530)][j] += a[i][j];
            if (i <= (180 - 173) && 1 <= j)
                b[i + 1][j - 1] += a[i][j];
            if (i <= (252 - 245) && j <= 7)
                b[i + 1][j + 1] += a[i][j];
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
            if (1 <= i && j <= 7)
                b[i - 1][j + 1] += a[i][j];
            if (j <= 7)
                b[i][j + 1] += a[i][j];
            if (i <= 7)
                b[i + 1][j] = b[i + 1][j] + a[i][j];
            b[i][j] += a[i][j];
            j = j + 1;
        };
    }
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            a[i][j] = b[i][j];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    n -= 1;
    if (n > 0) {
        germ (a, b, n);
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
    else if (n == 0) {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (i < 9) {
            {
                j = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                while (j < 8) {
                    printf ("%d ", b[i][j]);
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
                };
            }
            printf ("%d\n", b[i][j]);
            i = i + 1;
        };
    };
}

main () {
    int n;
    int m;
    int a [9] [9] = {0};
    int b [9] [9] = {0};
    scanf ("%d%d", &m, &n);
    a[4][4] = m;
    b[4][4] = m;
    germ (a, b, n);
}

