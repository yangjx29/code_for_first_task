int main () {
    char mz [102] [102];
    int n, m, i, g52BMq7, b, jm [(587 - 485)] [102] = {(809 - 809)}, next [102] [102] = {0}, s = 0;
    scanf ("%d", &n);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            scanf ("%s", mz[i]);
            {
                b = 0;
                while (n > b) {
                    if (mz[i][b] == '@') {
                        jm[i + (148 - 147)][b + (839 - 838)] = 2;
                    }
                    else {
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        }
                        if (mz[i][b] == '.') {
                            jm[i + (54 - 53)][b + 1] = 1;
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
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    b++;
                };
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
        while (m > i) {
            {
                g52BMq7 = 1;
                while (g52BMq7 <= n) {
                    for (b = 1; n >= b; b++) {
                        if (jm[g52BMq7][b] == 1 && (jm[g52BMq7][b - 1] == 2 || jm[g52BMq7][b + 1] == 2 || jm[g52BMq7 - 1][b] == 2 || jm[g52BMq7 + 1][b] == 2)) {
                            next[g52BMq7][b] = 2;
                        }
                        else {
                            next[g52BMq7][b] = jm[g52BMq7][b];
                        };
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    g52BMq7++;
                };
            }
            {
                g52BMq7 = 1;
                while (g52BMq7 <= n) {
                    {
                        b = 1;
                        while (b <= n) {
                            jm[g52BMq7][b] = next[g52BMq7][b];
                            if ((i == m - 1) && jm[g52BMq7][b] == 2) {
                                s = s + 1;
                            }
                            b++;
                        };
                    }
                    g52BMq7++;
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
    printf ("%d", s);
    return 0;
}

