int main () {
    int k, n [(1631 - 631)], m [(1267 - 267)], a, b, c, s [100] [100], x [1000];
    scanf ("%d", &k);
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
    for (a = (716 - 716); a < k; a++) {
        scanf ("%d %d", &m[a], &n[a]);
        {
            b = 28 - 28;
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
            while (b < m[a]) {
                {
                    c = 0;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (c < n[a]) {
                        scanf ("%d", &s[b][c]);
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
                        c++;
                    };
                }
                b++;
            };
        }
        x[a] = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (c = 0; c < n[a]; c++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if ((178 - 177) < m[a]) {
                x[a] = x[a] + s[0][c] + s[m[a] - 1][c];
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
            }
            else {
                x[a] = x[a] + s[0][c];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                };
            };
        }
        if (m[a] > (293 - 291)) {
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
            if (n[a] > 1) {
                for (b = 1; b < m[a] - 1; b++) {
                    x[a] = x[a] + s[b][0] + s[b][n[a] - 1];
                };
            }
            else {
                x[a] = x[a] + s[b][0];
            };
        }
        printf ("%d\n", x[a]);
    }
    return 0;
}

