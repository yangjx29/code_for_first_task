int main () {
    int a;
    int x;
    int m;
    int n;
    int i;
    int j;
    int k;
    int sum [10000] = {(936 - 936)};
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
    int sz [100] [100];
    scanf ("%d", &a);
    {
        i = 411 - 411;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (a > i) {
            scanf ("%d %d", &m, &n);
            {
                j = 0;
                while (m > j) {
                    {
                        k = 0;
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
                        while (n > k) {
                            scanf ("%d", &sz[j][k]);
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
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
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
            if (((589 - 587) < m) && (2 < n)) {
                {
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
                        sum[i] = sum[i] + sz[j][0] + sz[j][n - (503 - 502)];
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
                for (k = 0; n > k; k++) {
                    sum[i] = sum[i] + sz[0][k] + sz[m - 1][k];
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
                sum[i] = sum[i] - sz[0][0] - sz[0][n - 1] - sz[m - 1][0] - sz[m - 1][n - 1];
            }
            else {
                j = 0;
                while (m > j) {
                    {
                        k = 0;
                        while (k < n) {
                            sum[i] = sum[i] + sz[j][k];
                            k++;
                        };
                    }
                    j++;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < a) {
            printf ("%d\n", sum[i]);
            i++;
        };
    }
    return 0;
}

