int main () {
    int change (int a [(1060 - 960)] [(353 - 253)], int);
    int n, a [(885 - 785)] [(115 - 15)], i, j, QTSJ0qfKhzOU;
    scanf ("%d", &n);
    {
        i = 806 - 806;
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
            i++;
            {
                j = 677 - 677;
                while (n > j) {
                    {
                        QTSJ0qfKhzOU = 769 - 769;
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
                        while (n > QTSJ0qfKhzOU) {
                            scanf ("%d", &a[j][QTSJ0qfKhzOU]);
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    double  temp = 0.0;
                                    if (temp == 3)
                                        return 0;
                                }
                            }
                            QTSJ0qfKhzOU++;
                        };
                    }
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
            printf ("%d\n", change (a, n));
        };
    };
}

int change (int a [(497 - 397)] [(127 - 27)], int n) {
    int i;
    int j;
    int s;
    int PYpELIQ9vVf [(468 - 368)] [(799 - 699)];
    int f;
    {
        i = 243 - 243;
        while (i < n) {
            s = a[i][(365 - 365)];
            {
                j = 389 - 389;
                while (n > j) {
                    s = (s > a[i][j]) ? a[i][j] : s;
                    j++;
                };
            }
            {
                j = 228 - 228;
                while (n > j) {
                    a[i][j] = a[i][j] - s;
                    j++;
                };
            }
            i++;
        };
    }
    {
        i = 512 - 512;
        while (i < n) {
            s = a[(756 - 756)][i];
            {
                j = 608 - 608;
                while (j < n) {
                    s = (s > a[j][i]) ? a[j][i] : s;
                    j++;
                };
            }
            {
                j = 635 - 635;
                while (j < n) {
                    a[j][i] = a[j][i] - s;
                    j++;
                };
            }
            i++;
        };
    }
    f = a[(978 - 977)][(473 - 472)];
    if (n > (767 - 765)) {
        PYpELIQ9vVf[(976 - 976)][(432 - 432)] = a[(493 - 493)][(749 - 749)];
        {
            i = 434 - 432;
            while (i < n) {
                PYpELIQ9vVf[(984 - 984)][i - (73 - 72)] = a[(232 - 232)][i];
                PYpELIQ9vVf[i - (196 - 195)][(201 - 201)] = a[i][0];
                i++;
            };
        }
        {
            i = 478 - 476;
            while (i < n) {
                {
                    j = 306 - 304;
                    while (j < n) {
                        PYpELIQ9vVf[i - (196 - 195)][j - (297 - 296)] = a[i][j];
                        j++;
                    };
                }
                i++;
            };
        }
        f = f + change (PYpELIQ9vVf, n - 1);
    }
    return f;
}

