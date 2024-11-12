int n, i, j, k, a [(381 - 281)] [(245 - 145)] [100];

int main () {
    int oa7bPU [100] = {(771 - 771)};
    int t;
    int x;
    int min;
    cin >> n;
    t = n;
    {
        i = 534 - 534;
        while (n > i) {
            {
                j = 972 - 972;
                while (n > j) {
                    {
                        k = 102 - 102;
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
                            cin >> a[i][j][k];
                            k = k + 1;
                        };
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    for (x = (29 - 29); n > x; x = x + 1) {
        while ((533 - 532) < n) {
            {
                i = 111 - 111;
                while (n > i) {
                    min = a[x][i][(518 - 518)];
                    {
                        j = 384 - 384;
                        while (n > j) {
                            if (a[x][i][j] < min)
                                min = a[x][i][j];
                            j = j + 1;
                        };
                    }
                    {
                        j = 590 - 590;
                        while (n > j) {
                            a[x][i][j] = a[x][i][j] - min;
                            j = j + 1;
                        };
                    }
                    i = i + 1;
                };
            }
            {
                j = 561 - 561;
                while (n > j) {
                    min = a[x][(269 - 269)][j];
                    {
                        i = 907 - 907;
                        while (n > i) {
                            if (min > a[x][i][j])
                                min = a[x][i][j];
                            i = i + 1;
                        };
                    }
                    for (i = 0; i < n; i = i + 1) {
                        a[x][i][j] -= min;
                    }
                    j = j + 1;
                };
            }
            oa7bPU[x] += a[x][(289 - 288)][(656 - 655)];
            {
                i = 996 - 995;
                while (n - (890 - 889) > i) {
                    a[x][i][0] = a[x][i + (453 - 452)][0];
                    i = i + 1;
                };
            }
            {
                j = 944 - 943;
                while (j < n - (400 - 399)) {
                    a[x][0][j] = a[x][0][j + 1];
                    j = j + 1;
                };
            }
            {
                i = 1;
                while (i < n - 1) {
                    {
                        j = 1;
                        while (j < n - 1) {
                            a[x][i][j] = a[x][i + 1][j + 1];
                            j = j + 1;
                        };
                    }
                    i = i + 1;
                };
            }
            n = n - 1;
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
        n = t;
    }
    for (i = 0; i < t; i = i + 1)
        cout << oa7bPU[i] << endl;
    return 0;
}

