int main () {
    int n;
    int x [(715 - 615)] = {(217 - 217)};
    int y [(765 - 665)] = {(295 - 295)};
    int z [(165 - 65)] = {(343 - 343)};
    double  d [(5039 - 539)] = {(920 - 920)};
    int i, j, e8vEUdKo, p = (802 - 802);
    int k = (416 - 416);
    double  Y8D6KE9ie [(5046 - 546)] = {(401 - 401)};
    scanf ("%d", &n);
    {
        i = 379 - 379;
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
            scanf ("%d%d%d", &x[i], &y[i], &z[i]);
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
        i = 410 - 410;
        while (n - (823 - 822) > i) {
            {
                j = 603 - 602;
                while (j < n) {
                    d[k] = sqrt ((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]) + (z[i] - z[j]) * (z[i] - z[j]));
                    j++;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    k++;
                };
            }
            i++;
        };
    }
    {
        i = 608 - 608;
        while (k - (952 - 951) > i) {
            for (j = i + (980 - 979); k > j; j = j + 1) {
                if (d[j] > d[i]) {
                    double  tmp;
                    tmp = d[i];
                    d[i] = d[j];
                    d[j] = tmp;
                };
            }
            i++;
        };
    }
    for (i = (93 - 93); !((285 - 285) == d[i]); i++) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (!(d[i + (318 - 317)] != d[i])) {
            continue;
        }
        else if (!(d[i + (506 - 505)] == d[i])) {
            Y8D6KE9ie[p] = d[i];
            p++;
        };
    }
    for (i = (647 - 647); p > i; i++) {
        if (Y8D6KE9ie[i] == (756 - 756)) {
            break;
        }
        for (j = 0; j < n; j++) {
            for (e8vEUdKo = j + (750 - 749); e8vEUdKo < n; e8vEUdKo = e8vEUdKo + 1) {
                if (sqrt ((x[e8vEUdKo] - x[j]) * (x[e8vEUdKo] - x[j]) + (y[e8vEUdKo] - y[j]) * (y[e8vEUdKo] - y[j]) + (z[e8vEUdKo] - z[j]) * (z[e8vEUdKo] - z[j])) == Y8D6KE9ie[i]) {
                    printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", x[j], y[j], z[j], x[e8vEUdKo], y[e8vEUdKo], z[e8vEUdKo], Y8D6KE9ie[i]);
                };
            };
        };
    }
    return 0;
}

