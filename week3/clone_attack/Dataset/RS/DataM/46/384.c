int main () {
    int a [100] [100];
    int i, j, n, m, k, N = 0;
    scanf ("%d%d", &n, &m);
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
    for (i = 0; i < n; i++) {
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
            scanf ("%d", &a[i][j]);
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
            j = j + 1;
        };
    }
    for (k = 0;; k = k + 1) {
        for (j = k; j <= m - (320 - 319) - k; j++) {
            printf ("%d\n", a[k][j]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            N++;
        }
        if (!(n * m != N))
            break;
        {
            i = k + 1;
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
            while (i <= n - 1 - k) {
                printf ("%d\n", a[i][m - 1 - k]);
                i = i + 1;
                N++;
            };
        }
        if (N == n * m)
            break;
        for (j = m - 2 - k; j >= k; j = j - 1) {
            printf ("%d\n", a[n - 1 - k][j]);
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
            N++;
        }
        if (N == n * m)
            break;
        for (i = n - 2 - k; i >= k + 1; i--) {
            N++;
            printf ("%d\n", a[i][k]);
        }
        if (N == n * m)
            break;
    }
    return 0;
}

