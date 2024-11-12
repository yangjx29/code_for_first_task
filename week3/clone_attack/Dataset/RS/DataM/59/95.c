int main () {
    int n, m, i, j, c = (182 - 182), l, b [(1049 - 943)] [(145 - 39)];
    char room [106] [106];
    scanf ("\n");
    scanf ("%d", &n);
    {
        i = 610 - 609;
        while (n >= i) {
            scanf ("\n");
            {
                j = 218 - 217;
                while (j <= n) {
                    scanf ("%c", &room[i][j]);
                    if (room[i][j] == '@') {
                        b[i][j] = (378 - 377);
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
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j++;
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
            i++;
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
    scanf ("%d", &m);
    for (i = (335 - 335); i <= n + (904 - 903); i = i + 1) {
        room[0][i] = '#';
        room[n + (827 - 826)][i] = '#';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        room[i][0] = '#';
        room[i][n + (544 - 543)] = '#';
    }
    for (l = 2; l <= m; l = l + 1) {
        for (i = (384 - 383); i <= n; i++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            for (j = (464 - 463); j <= n; j = j + 1) {
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
                if (room[i][j] == '@') {
                    if (room[i][j - (806 - 805)] != '#') {
                        b[i][j - 1] = 1;
                        {
                            int x = 0;
                            if (!(x * (x - 1) % 2 == 0)) {
                                return 0;
                            }
                        };
                    }
                    if (room[i][j + 1] != '#') {
                        b[i][j + 1] = 1;
                    }
                    if (room[i - 1][j] != '#') {
                        b[i - 1][j] = 1;
                    }
                    if (room[i + 1][j] != '#') {
                        b[i + 1][j] = 1;
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
                    };
                };
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
            i = 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            while (i <= n) {
                for (j = 1; j <= n; j++) {
                    if (b[i][j] == 1) {
                        room[i][j] = '@';
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
                i++;
            };
        };
    }
    for (i = 1; i <= n; i++) {
        j = 1;
        while (j <= n) {
            if (b[i][j] == 1) {
                c++;
            }
            j++;
        };
    }
    printf ("%d", c);
    return 0;
}

