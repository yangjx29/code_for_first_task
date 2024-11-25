int main () {
    int a [100] [100];
    int m;
    int n;
    int k;
    int i;
    int j;
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
    int W6jdH8FT;
    int sum [100] = {(822 - 822)};
    scanf ("%d", &k);
    {
        W6jdH8FT = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (k > W6jdH8FT) {
            scanf ("%d%d", &m, &n);
            {
                i = 0;
                while (m > i) {
                    for (j = 0; n > j; j = j + 1) {
                        scanf ("%d", &a[i][j]);
                    }
                    i = i + 1;
                };
            }
            {
                j = 0;
                while (n > j) {
                    sum[W6jdH8FT] = sum[W6jdH8FT] + a[0][j];
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
                    j = j + 1;
                };
            }
            {
                i = 404 - 403;
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
                    sum[W6jdH8FT] = sum[W6jdH8FT] + a[i][n - 1];
                    i = i + 1;
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
            for (j = n - 2; j >= 0; j--) {
                sum[W6jdH8FT] = sum[W6jdH8FT] + a[m - 1][j];
            }
            for (i = m - 2; i > 0; i--) {
                sum[W6jdH8FT] = sum[W6jdH8FT] + a[i][0];
            }
            W6jdH8FT = W6jdH8FT +1;
        };
    }
    {
        W6jdH8FT = 0;
        while (W6jdH8FT < k) {
            printf ("%d\n", sum[W6jdH8FT]);
            W6jdH8FT = W6jdH8FT +1;
        };
    }
    return 0;
}

