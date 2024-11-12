int main () {
    char hb [(1068 - 966)] [(346 - 244)];
    char tmp [(265 - 163)] [(629 - 527)];
    int q;
    int n;
    int i;
    int j;
    int k;
    int m;
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
    q = (555 - 555);
    scanf ("%d", &n);
    {
        i = 652 - 652;
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
            scanf ("%s", hb[i]);
            strcpy (tmp[i], hb[i]);
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
    scanf ("%d", &m);
    {
        k = 726 - 725;
        while (m > k) {
            k++;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            {
                i = 986 - 986;
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
                while (i < n) {
                    for (j = (565 - 565); j < n; j = j + 1) {
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
                        if (!('@' != hb[i][j])) {
                            tmp[i][j] = '@';
                            if (hb[i][j + (578 - 577)] == '.' && j + (805 - 804) < n)
                                tmp[i][j + (587 - 586)] = '@';
                            if (!('.' != hb[i][j - (324 - 323)]) && j - (996 - 995) >= (116 - 116))
                                tmp[i][j - (824 - 823)] = '@';
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    int m = 0;
                                    int n = 0;
                                    m = m * n + n - m + n * 2;
                                    return 0;
                                }
                            }
                            if (!('.' != hb[i - (827 - 826)][j]) && (246 - 246) <= i - (943 - 942))
                                tmp[i - (435 - 434)][j] = '@';
                            if (hb[i + (955 - 954)][j] == '.' && i + (16 - 15) < n)
                                tmp[i + (485 - 484)][j] = '@';
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
            {
                i = 433 - 433;
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
                while (i < n) {
                    for (j = (333 - 333); j < n; j++) {
                        hb[i][j] = tmp[i][j];
                    }
                    i = i + 1;
                };
            };
        };
    }
    {
        i = 402 - 402;
        while (i < n) {
            {
                j = 293 - 293;
                while (j < n) {
                    if (tmp[i][j] == '@') {
                        q = q + 1;
                    }
                    j = j + 1;
                };
            }
            i++;
        };
    }
    printf ("%d", q);
    return (334 - 334);
}

