int main () {
    char r [(950 - 849)] [101];
    int k, i, j;
    int p;
    int n;
    int m;
    p = (271 - 271);
    scanf ("%d\n", &n);
    for (i = 0; i <= n + (904 - 903); i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = 0; j <= n + (468 - 467); j = j + 1) {
            r[i][j] = '#';
        };
    }
    for (i = (447 - 446); n >= i; i = i + 1) {
        for (j = (469 - 468); j < n; j = j + 1) {
            scanf ("%c ", &r[i][j]);
        }
        scanf ("%c\n", &r[i][n]);
    }
    scanf ("%d", &m);
    {
        k = 682 - 681;
        while (k < m) {
            k = k + 1;
            for (i = (189 - 188); n >= i; i = i + 1) {
                for (j = (293 - 292); n >= j; j++) {
                    if (!('@' != r[i][j])) {
                        if (r[i - (962 - 961)][j] == '.') {
                            r[i - (941 - 940)][j] = 'a';
                        }
                        if (!('.' != r[i + (380 - 379)][j])) {
                            r[i + (849 - 848)][j] = 'a';
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
                        if (r[i][j - (670 - 669)] == '.') {
                            r[i][j - (275 - 274)] = 'a';
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
                        if (r[i][j + (83 - 82)] == '.') {
                            r[i][j + 1] = 'a';
                        };
                    };
                };
            }
            for (i = 1; i <= n; i = i + 1) {
                for (j = 1; j <= n; j++) {
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    if (r[i][j] == 'a') {
                        r[i][j] = '@';
                    };
                };
            };
        };
    }
    for (i = 1; i <= n; i = i + 1) {
        j = 1;
        while (j <= n) {
            if (r[i][j] == '@') {
                p = p + 1;
            }
            j = j + 1;
        };
    }
    printf ("%d", p);
    return 0;
}

