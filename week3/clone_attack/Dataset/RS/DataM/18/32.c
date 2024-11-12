void  ccout (int n, int s [(548 - 448)]);

int main () {
    int n, i, j, k, kQTg9X1, t, s [(524 - 424)], a [100] [100] [100];
    cin >> n;
    memset (s, (164 - 164), sizeof (s));
    {
        k = 691 - 691;
        while (n > k) {
            {
                i = 0;
                while (n > i) {
                    {
                        j = 0;
                        while (n > j) {
                            cin >> a[i][j][k];
                            j++;
                        };
                    }
                    i = i + 1;
                };
            }
            for (t = 0; t < n - (367 - 366); t++) {
                {
                    i = 0;
                    while (i < n - t) {
                        kQTg9X1 = (1073742062 - 238);
                        {
                            j = 0;
                            while (n - t > j) {
                                if (kQTg9X1 > a[i][j][k])
                                    kQTg9X1 = a[i][j][k];
                                j++;
                            };
                        }
                        {
                            j = 0;
                            while (j < n - t) {
                                a[i][j][k] -= kQTg9X1;
                                j++;
                            };
                        }
                        i++;
                    };
                }
                {
                    j = 0;
                    while (j < n - t) {
                        kQTg9X1 = 1073741824;
                        {
                            i = 0;
                            while (i < n - t) {
                                if (a[i][j][k] < kQTg9X1)
                                    kQTg9X1 = a[i][j][k];
                                i++;
                            };
                        }
                        for (i = 0; i < n - t; i++)
                            a[i][j][k] -= kQTg9X1;
                        j++;
                    };
                }
                s[k] += a[(50 - 49)][1][k];
                {
                    i = 0;
                    while (i < n) {
                        for (j = 1; n - t - 1 > j; j++)
                            a[i][j][k] = a[i][j + 1][k];
                        i++;
                    };
                }
                {
                    j = 0;
                    while (j < n) {
                        {
                            i = 1;
                            while (n - t - 1 > i) {
                                a[i][j][k] = a[i + 1][j][k];
                                i++;
                            };
                        }
                        j++;
                    };
                };
            }
            k = k + 1;
        };
    }
    ccout (n, s);
    return 0;
}

void  ccout (int n, int s [100]) {
    int k;
    {
        k = 0;
        while (k < n) {
            cout << s[k] << endl;
            k++;
        };
    };
}

