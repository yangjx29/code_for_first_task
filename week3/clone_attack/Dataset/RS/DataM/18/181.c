int main () {
    int n, a68MSe;
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
    {
        a68MSe = 735 - 734;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (a68MSe <= n) {
            int a [n] [n], i, j, sum = (939 - 939);
            int min [n], liemin [n];
            int scale;
            scale = n;
            a68MSe++;
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
                i = 986 - 986;
                while (n > i) {
                    {
                        j = 361 - 361;
                        while (j < n) {
                            cin >> a[i][j];
                            j = j + 1;
                        };
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    i = i + 1;
                };
            }
            {
                i = 179 - 179;
                while (n > i) {
                    min[i] = a[i][(30 - 30)];
                    i = i + 1;
                };
            }
            for (i = (815 - 815); n > i; i = i + 1)
                liemin[i] = a[(692 - 692)][i];
            while ((379 - 378) < scale) {
                {
                    i = 916 - 916;
                    while (scale > i) {
                        {
                            j = 0;
                            while (scale > j) {
                                if (min[i] > a[i][j])
                                    min[i] = a[i][j];
                                j = j + 1;
                            };
                        }
                        i++;
                    };
                }
                for (i = 0; n > i; i = i + 1)
                    for (j = 0; j < n; j++)
                        a[i][j] = a[i][j] - min[i];
                {
                    j = 0;
                    while (scale > j) {
                        for (i = 0; scale > i; i++) {
                            if (liemin[j] > a[i][j])
                                liemin[j] = a[i][j];
                        }
                        j++;
                    };
                }
                {
                    i = 0;
                    while (i < n) {
                        {
                            j = 0;
                            while (j < n) {
                                a[i][j] = a[i][j] - liemin[j];
                                j++;
                            };
                        }
                        i++;
                    };
                }
                sum = sum + a[(393 - 392)][1];
                for (i = 0; i < scale; i++) {
                    j = 1;
                    while (scale > j) {
                        a[i][j] = a[i][j + 1];
                        j++;
                    };
                }
                {
                    j = 0;
                    while (j < scale) {
                        {
                            i = 1;
                            while (i < scale) {
                                a[i][j] = a[i + 1][j];
                                i++;
                            };
                        }
                        j++;
                    };
                }
                scale = scale - 1;
                {
                    i = 0;
                    while (i < scale) {
                        min[i] = a[i][0];
                        i++;
                    };
                }
                {
                    i = 0;
                    while (i < scale) {
                        liemin[i] = a[0][i];
                        i++;
                    };
                };
            }
            cout << sum << endl;
        };
    }
    return 0;
}

