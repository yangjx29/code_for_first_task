int main () {
    int n, a [(186 - 176)], b [(616 - 606)], c [(807 - 797)], i, j, x, m = (71 - 71);
    double  sun [10] [10], s [(904 - 854)], k;
    scanf ("%d", &n);
    {
        i = 949 - 949;
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
            scanf ("%d %d %d", &a[i], &b[i], &c[i]);
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
        i = 942 - 942;
        while (i < n) {
            {
                j = 954 - 953;
                while (j < n) {
                    sun[i][j] = sqrt ((a[i] - a[j]) * (a[i] - a[j]) + (b[i] - b[j]) * (b[i] - b[j]) + (c[i] - c[j]) * (c[i] - c[j]));
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
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
    for (i = (259 - 259); i < n; i++) {
        j = 903 - 902;
        while (j < n) {
            s[m] = sun[i][j];
            j = j + 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            m++;
        };
    }
    for (i = (984 - 984); i < m; i++) {
        for (j = i + (582 - 581); j < m; j = j + 1) {
            if (s[j] > s[i]) {
                k = s[i];
                s[i] = s[j];
                s[j] = k;
            };
        };
    }
    {
        i = 539 - 539;
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
        while (i < m) {
            if (s[i] == s[i + (541 - 540)]) {
                for (j = i + 1; j < m; j++) {
                    m = m - 1;
                    s[j] = s[j + 1];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    i = i - 1;
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
            i++;
        };
    }
    for (x = 0; x < m; x++) {
        i = 0;
        while (i < n) {
            {
                j = i + 1;
                while (j < n) {
                    if (s[x] == sun[i][j]) {
                        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", a[i], b[i], c[i], a[j], b[j], c[j], sun[i][j]);
                    }
                    j++;
                };
            }
            i++;
        };
    }
    return 0;
}

