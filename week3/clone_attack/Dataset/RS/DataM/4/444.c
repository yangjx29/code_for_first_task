int main () {
    int n, m, i = 0, an [100] [100], j = 0, k = 0, s = 0;
    scanf ("%d%d", &n, &m);
    {
        i = 0;
        while (n > i) {
            {
                j = 0;
                while (m > j) {
                    scanf ("%d", &an[i][j]);
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    for (k = 0; n + m - 1 > k; k++) {
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
        if (n < m) {
            if (m - 1 > k) {
                for (i = 0, j = 0; n > i && k >= j; i = i + 1, j = j + 1) {
                    printf ("%d\n", an[i][k - j]);
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
            else {
                if (m - 1 <= k) {
                    for (i = m - 1, j = k - m + 1; j < n; i = i - 1, j++) {
                        printf ("%d\n", an[j][i]);
                    };
                };
            };
        }
        else {
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
            if (m - 1 > k) {
                for (i = 0, j = 0; m > i && k >= j; i++, j++) {
                    printf ("%d\n", an[i][k - j]);
                };
            }
            else if (k >= m - 1) {
                i = m - 1;
                j = k - m + 1;
                while (i >= 0 && j < n) {
                    printf ("%d\n", an[j][i]);
                    j++;
                    i--;
                };
            };
        };
    }
    return 0;
}

