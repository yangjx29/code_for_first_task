int main () {
    int min;
    int i, iRAXTuMk, k, l, m;
    int n;
    double  a [(954 - 854)] [100];
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
    int sum = (804 - 804);
    cin >> n;
    {
        i = 252 - 252;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            i++;
            for (iRAXTuMk = 0; n > iRAXTuMk; iRAXTuMk++) {
                k = 0;
                while (n > k) {
                    cin >> a[iRAXTuMk][k];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    k = k + 1;
                };
            }
            sum = (615 - 615);
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
            {
                l = 507 - 506;
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
                while (n > l) {
                    {
                        iRAXTuMk = 0;
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
                        while (n > iRAXTuMk) {
                            k = 0;
                            while (0 > a[iRAXTuMk][k])
                                k++;
                            while (n > k) {
                                min = a[iRAXTuMk][k];
                                for (; n > k; k++)
                                    if (a[iRAXTuMk][k] < min && 0 <= a[iRAXTuMk][k])
                                        min = a[iRAXTuMk][k];
                                {
                                    k = 0;
                                    while (n > k) {
                                        a[iRAXTuMk][k] = a[iRAXTuMk][k] - min;
                                        k++;
                                    };
                                };
                            }
                            iRAXTuMk = iRAXTuMk + 1;
                        };
                    }
                    {
                        k = 0;
                        while (n > k) {
                            iRAXTuMk = 0;
                            while (0 > a[iRAXTuMk][k])
                                iRAXTuMk = iRAXTuMk + 1;
                            while (n > iRAXTuMk) {
                                min = a[iRAXTuMk][k];
                                {
                                    iRAXTuMk = 1;
                                    while (n > iRAXTuMk) {
                                        if (a[iRAXTuMk][k] < min && a[iRAXTuMk][k] >= 0)
                                            min = a[iRAXTuMk][k];
                                        iRAXTuMk++;
                                    };
                                }
                                {
                                    iRAXTuMk = 0;
                                    while (iRAXTuMk < n) {
                                        a[iRAXTuMk][k] -= min;
                                        iRAXTuMk++;
                                    };
                                };
                            }
                            k++;
                        };
                    }
                    sum += a[l][l];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    {
                        m = 0;
                        while (m < n) {
                            a[l][m] = -1;
                            a[m][l] = -1;
                            m = m + 1;
                        };
                    }
                    l++;
                };
            }
            cout << sum << endl;
        };
    }
    return 0;
}

