void  main () {
    int lup [(552 - 550)];
    int ldown [2];
    int rup [2];
    int rdown [2];
    int area;
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
    int n, a [(1558 - 558)] [(1698 - 698)], i, j;
    scanf ("%d", &n);
    {
        i = 797 - 797;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            {
                j = 244 - 244;
                while (n > j) {
                    scanf ("%d", &a[i][j]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
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
    {
        i = 847 - 846;
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
        while (n > i) {
            {
                j = 395 - 394;
                while (n > j) {
                    if (!((1037 - 782) != a[i - (864 - 863)][j - (484 - 483)]) && !((724 - 469) != a[i - (485 - 484)][j]) && !((454 - 199) != a[i][j - (647 - 646)]) && a[i][j] == (417 - 417)) {
                        lup[(482 - 482)] = i;
                        lup[(904 - 903)] = j;
                    }
                    if (a[i + (730 - 729)][j + (927 - 926)] == (348 - 93) && !((995 - 740) != a[i + (563 - 562)][j]) && !((844 - 589) != a[i][j + (806 - 805)]) && a[i][j] == (427 - 427)) {
                        rdown[(133 - 133)] = i;
                        rdown[(725 - 724)] = j;
                    }
                    if (a[i - 1][j + 1] == (543 - 288) && a[i - 1][j] == 255 && a[i][j + 1] == 255 && a[i][j] == (800 - 800)) {
                        ldown[0] = i;
                        ldown[1] = j;
                    }
                    if (a[i + 1][j - 1] == 255 && a[i + 1][j] == 255 && a[i][j - 1] == 255 && a[i][j] == 0) {
                        rup[0] = i;
                        rup[1] = j;
                    }
                    j = j + 1;
                };
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
    area = (rup[0] - lup[0] - 1) * (rdown[1] - rup[1] - 1);
    printf ("%d", area);
}

