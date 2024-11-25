int main () {
    int m;
    int i;
    int sz [1000];
    int jg [1000];
    char zfc1 [1000];
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
    scanf ("%s", zfc1);
    m = strlen (zfc1);
    {
        i = 0;
        while (i < m) {
            sz[i] = zfc1[i] - 48;
            i = i + 1;
        };
    }
    if ((601 - 599) <= m) {
        if ((!(2 != m)) && (sz[0] * 10 + sz[(891 - 890)] < 13)) {
            printf ("%d\n", 0);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        for (i = 0; m - 1 > i; i = i + 1) {
            jg[i] = (sz[i] * 10 + sz[i + 1]) / 13;
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
            sz[i + 1] = (sz[i] * 10 + sz[i + 1]) % 13;
        }
        {
            i = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (m - 1 > i) {
                if ((!(0 != i)) && (jg[i] == 0)) {
                    continue;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    };
                }
                else {
                    if (i != m - 2) {
                        printf ("%d", jg[i]);
                    }
                    else if (i == m - 2) {
                        printf ("%d\n", jg[i]);
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
                i++;
            };
        };
    }
    else {
        printf ("%d\n", 0);
    }
    printf ("%d", sz[m - 1]);
    return 0;
}

