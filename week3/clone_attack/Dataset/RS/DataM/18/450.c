int main () {
    int n, i, j, k, a [100] [100], p, min, sum = 0;
    cin >> n;
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
    for (p = 1; n >= p; p++) {
        {
            i = 0;
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
            while (n - 1 >= i) {
                for (j = 0; n - 1 >= j; j++) {
                    cin >> a[i][j];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                }
                i = i + 1;
            };
        }
        for (k = 1; n - 1 >= k; k++) {
            for (i = 0; n - 1 >= i; i++) {
                min = a[i][0];
                for (j = k; n - 1 >= j; j++) {
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
                    if (a[i][j] < min) {
                        min = a[i][j];
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
                for (j = 0; j <= n - 1; j++) {
                    a[i][j] = a[i][j] - min;
                };
            }
            for (j = 0; j <= n - 1; j++) {
                min = a[0][j];
                for (i = k; i <= n - 1; i++) {
                    if (a[i][j] < min) {
                        min = a[i][j];
                    };
                }
                for (i = 0; i <= n - 1; i++) {
                    a[i][j] = a[i][j] - min;
                };
            }
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
            sum = sum + a[k][k];
        }
        cout << sum << endl;
        sum = 0;
    }
    return 0;
}

