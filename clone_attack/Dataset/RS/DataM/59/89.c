int main () {
    int n, rWoPpl, a, b, i, s = (944 - 944);
    char q4de8g [(450 - 250)] [200];
    char q [200] [200];
    scanf ("%d", &n);
    {
        a = 41 - 40;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (a < n + (156 - 155)) {
            for (b = (595 - 594); b < n + (17 - 16); b = b + 1) {
                scanf (" %c", &q4de8g[a][b]);
                q[a][b] = q4de8g[a][b];
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
            a = a + 1;
        };
    }
    scanf ("%d", &rWoPpl);
    for (i = (634 - 634); i < n + (766 - 764); i = i + 1) {
        q4de8g[(969 - 969)][i] = '#';
        q4de8g[n + (216 - 215)][i] = '#';
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        q4de8g[i][0] = '#';
        q4de8g[i][n + 1] = '#';
    }
    for (i = 1; i < rWoPpl; i++) {
        for (a = 1; a < n + 1; a = a + 1) {
            for (b = 1; b < n + 1; b = b + 1) {
                if (q4de8g[a][b] != '#') {
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    if (q4de8g[a - 1][b] == '@' || q4de8g[a + 1][b] == '@' || q4de8g[a][b - 1] == '@' || q4de8g[a][b + 1] == '@') {
                        q[a][b] = '@';
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
                        };
                    };
                };
            };
        }
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
        for (a = 1; a < n + 1; a = a + 1) {
            for (b = 1; b < n + 1; b = b + 1) {
                q4de8g[a][b] = q[a][b];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            };
        };
    }
    {
        a = 1;
        while (a < n + 1) {
            for (b = 1; b < n + 1; b++) {
                if (q4de8g[a][b] == '@') {
                    s = s + 1;
                };
            }
            a++;
        };
    }
    printf ("%d", s);
    return 0;
}

