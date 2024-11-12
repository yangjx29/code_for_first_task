int main () {
    int b [50] [3];
    int a [50] [3];
    double  zong;
    double  s [50];
    int sz [10] [(133 - 130)];
    double  e;
    int lwGF3ZcvRb, j, k, m, n, x;
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
    m = 0;
    scanf ("%d", &n);
    {
        lwGF3ZcvRb = 739 - 739;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > lwGF3ZcvRb) {
            {
                j = 0;
                while ((729 - 726) > j) {
                    scanf ("%d", &sz[lwGF3ZcvRb][j]);
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
            lwGF3ZcvRb = lwGF3ZcvRb + 1;
        };
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
        while ((n - (367 - 366)) > j) {
            {
                lwGF3ZcvRb = 417 - 416;
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
                while (n - 1 >= lwGF3ZcvRb) {
                    zong = 0;
                    {
                        k = 0;
                        while (3 > k) {
                            a[m][k] = sz[j][k];
                            b[m][k] = sz[lwGF3ZcvRb][k];
                            zong = zong + pow ((a[m][k] - b[m][k]), 2);
                            k = k + 1;
                        };
                    }
                    lwGF3ZcvRb = lwGF3ZcvRb + 1;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    s[m] = sqrt (zong);
                    m = m + 1;
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
            j = j + 1;
        };
    }
    {
        j = 0;
        while (m - 1 > j) {
            for (lwGF3ZcvRb = 0; m - 1 - j > lwGF3ZcvRb; lwGF3ZcvRb++) {
                if (s[lwGF3ZcvRb + 1] > s[lwGF3ZcvRb]) {
                    e = s[lwGF3ZcvRb];
                    s[lwGF3ZcvRb] = s[lwGF3ZcvRb + 1];
                    s[lwGF3ZcvRb + 1] = e;
                    {
                        k = 0;
                        while (k < 3) {
                            x = a[lwGF3ZcvRb][k];
                            a[lwGF3ZcvRb][k] = a[lwGF3ZcvRb + 1][k];
                            a[lwGF3ZcvRb + 1][k] = x;
                            x = b[lwGF3ZcvRb][k];
                            b[lwGF3ZcvRb][k] = b[lwGF3ZcvRb + 1][k];
                            b[lwGF3ZcvRb + 1][k] = x;
                            k = k + 1;
                        };
                    };
                };
            }
            j = j + 1;
        };
    }
    {
        lwGF3ZcvRb = 0;
        while (lwGF3ZcvRb < m) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", a[lwGF3ZcvRb][0], a[lwGF3ZcvRb][1], a[lwGF3ZcvRb][2], b[lwGF3ZcvRb][0], b[lwGF3ZcvRb][1], b[lwGF3ZcvRb][2], s[lwGF3ZcvRb]);
            lwGF3ZcvRb++;
        };
    }
    return 0;
}

