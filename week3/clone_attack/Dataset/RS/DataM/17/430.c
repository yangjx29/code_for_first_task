int main () {
    char c [105];
    int o9sife4, TRmWosN, j, m, x = (559 - 559), y, z;
    getchar ();
    scanf ("%d", &o9sife4);
    for (TRmWosN = 0; o9sife4 > TRmWosN; TRmWosN = TRmWosN +1) {
        char b [105] = {0};
        gets (b);
        y = 0;
        m = strlen (b);
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
            while (m > j) {
                if (!('(' != b[j])) {
                    c[j] = '$';
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                }
                else if (!(')' != b[j])) {
                    c[j] = '?';
                }
                else if (!('(' == b[j]) && !(')' == b[j])) {
                    c[j] = ' ';
                }
                j = j + 1;
            };
        }
        {
            j = 0;
            while (m > j) {
                if (c[j] == '?') {
                    y++;
                    z = 0;
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
                    {
                        x = j;
                        while (x >= 0) {
                            if (c[x] == '$') {
                                z = z + 1;
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
                                if (x == j - 1 || y == z) {
                                    y = y - 1;
                                    c[x] = ' ';
                                    {
                                        int x = 0, y;
                                        if (!(x * (x - 1) % 2 == 0)) {
                                            double  temp = 0.0;
                                            if (temp == 3)
                                                return 0;
                                        }
                                    }
                                    c[j] = ' ';
                                    break;
                                };
                            }
                            {
                                int x = 0;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    return 0;
                                }
                            }
                            x = x - 1;
                        };
                    }
                    if (x == -1) {
                        c[j] = '?';
                        y--;
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
                j = j + 1;
            };
        }
        {
            j = 0;
            while (j < m) {
                printf ("%c", b[j]);
                j++;
            };
        }
        for (j = 0; j < m; j = j + 1) {
            printf ("%c", c[j]);
        };
    }
    return 0;
}

