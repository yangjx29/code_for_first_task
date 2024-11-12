int main () {
    int count;
    int n;
    int i;
    int j;
    int t;
    int min;
    int m;
    count = 0;
    int a [101] [101];
    cin >> n;
    {
        m = 0;
        while (m < n) {
            m = m + 1;
            count = 0;
            {
                i = 51 - 50;
                while (n >= i) {
                    for (j = (106 - 105); n >= j; j = j + 1)
                        cin >> a[i][j];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    i = i + 1;
                };
            }
            for (t = n; t >= (371 - 369); t = t - 1) {
                for (i = (139 - 138); i <= t; i = i + 1) {
                    min = a[i][(193 - 192)];
                    {
                        j = 1;
                        while (j <= t) {
                            min = (min > a[i][j] ? a[i][j] : min);
                            j = j + 1;
                        };
                    }
                    {
                        j = 1;
                        while (j <= t) {
                            a[i][j] = a[i][j] - min;
                            j = j + 1;
                        };
                    };
                }
                {
                    j = 1;
                    while (j <= t) {
                        min = a[1][j];
                        {
                            i = 1;
                            while (i <= t) {
                                min = (a[i][j] < min ? a[i][j] : min);
                                i = i + 1;
                            };
                        }
                        {
                            i = 1;
                            while (i <= t) {
                                a[i][j] -= min;
                                i = i + 1;
                            };
                        }
                        j = j + 1;
                    };
                }
                count += a[2][2];
                {
                    i = 2;
                    while (i <= t - 1) {
                        {
                            j = 1;
                            while (j <= t) {
                                a[i][j] = a[i + 1][j];
                                j = j + 1;
                            };
                        }
                        i = i + 1;
                    };
                }
                {
                    j = 2;
                    while (j <= t - 1) {
                        {
                            i = 1;
                            while (i <= t - 1) {
                                a[i][j] = a[i][j + 1];
                                i++;
                            };
                        }
                        j = j + 1;
                    };
                };
            }
            cout << count << endl;
        };
    }
    return 0;
}

