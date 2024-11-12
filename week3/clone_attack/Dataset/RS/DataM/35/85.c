int main () {
    int n, m, i, j, s [8] [8], a, b, c = 0, t;
    scanf ("%d,%d", &n, &m);
    for (i = 0; n > i; i = i + 1) {
        j = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (m > j) {
            scanf ("%d", &s[i][j]);
            j++;
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
        i = 0;
        while (n > i) {
            b = 0;
            t = s[i][0];
            a = i;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            {
                j = 0;
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
                while (m > j) {
                    if (t < s[i][j]) {
                        t = s[i][j];
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
                        b = j;
                    }
                    j++;
                };
            }
            {
                i = 0;
                while (n > i) {
                    if (t > s[i][b]) {
                        c = 1;
                    }
                    i++;
                };
            }
            i++;
            if (c == 0) {
                c = 2;
                printf ("%d+%d", a, b);
            };
        };
    }
    if (c != 2) {
    }
    return 0;
}

