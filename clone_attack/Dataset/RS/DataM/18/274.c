int main () {
    int n;
    int i;
    int j;
    int k;
    int Po54zEtPdRX;
    int t;
    t = (456 - 456);
    int a [100] [100];
    int PAEUImDuhs;
    PAEUImDuhs = 0;
    cin >> n;
    {
        k = 0;
        while (n > k) {
            k++;
            for (i = 0; n > i; i = i + 1) {
                j = 0;
                while (n > j) {
                    cin >> a[i][j];
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
                Po54zEtPdRX = 974 - 973;
                while (Po54zEtPdRX <= n - 1) {
                    for (i = 0; n - Po54zEtPdRX +1 > i; i = i + 1) {
                        t = a[i][0];
                        for (j = 1; n - Po54zEtPdRX +1 > j; j = j + 1) {
                            if (t > a[i][j])
                                t = a[i][j];
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
                        {
                            j = 0;
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
                            while (j < n - Po54zEtPdRX +1) {
                                a[i][j] = a[i][j] - t;
                                j = j + 1;
                            };
                        };
                    }
                    {
                        j = 0;
                        while (j < n - Po54zEtPdRX +1) {
                            t = a[0][j];
                            for (i = 1; i < n - Po54zEtPdRX +1; i = i + 1) {
                                if (a[i][j] < t)
                                    t = a[i][j];
                            }
                            {
                                i = 0;
                                while (i < n - Po54zEtPdRX +1) {
                                    a[i][j] = a[i][j] - t;
                                    i = i + 1;
                                };
                            }
                            j = j + 1;
                        };
                    }
                    PAEUImDuhs = PAEUImDuhs +a[1][1];
                    for (i = 0; i < n; i++) {
                        for (j = 1; j < n - Po54zEtPdRX; j++)
                            a[i][j] = a[i][j + 1];
                    }
                    {
                        j = 0;
                        while (j < n - Po54zEtPdRX) {
                            {
                                i = 1;
                                while (i < n - Po54zEtPdRX) {
                                    a[i][j] = a[i + 1][j];
                                    i++;
                                };
                            }
                            j++;
                        };
                    }
                    Po54zEtPdRX++;
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
            cout << PAEUImDuhs << endl;
            PAEUImDuhs = 0;
        };
    }
    return 0;
}

