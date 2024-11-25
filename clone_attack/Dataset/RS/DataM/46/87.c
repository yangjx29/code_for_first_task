int main () {
    int m, n, i, j, k;
    int a [100] [100];
    scanf ("%d %d", &m, &n);
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
        while (i < m) {
            for (j = 0; j < n; j++) {
                scanf ("%d", &a[i][j]);
            }
            i++;
        };
    }
    for (k = 0; 2 * k < m && 2 * k < n; k++) {
        for (i = k, j = k; j < n - k - 1; j++) {
            printf ("%d\n", a[i][j]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
        for (; i < m - k - 1; i++) {
            printf ("%d\n", a[i][j]);
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (i == k || j == k) {
            printf ("%d\n", a[i][j]);
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
            break;
        }
        for (; j > k; j = j - 1) {
            printf ("%d\n", a[i][j]);
        }
        for (; i > k; i--) {
            printf ("%d\n", a[i][j]);
        };
    }
    return 0;
}

