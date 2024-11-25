int main () {
    int n, i, j, o5Y3iRp9, l, d, c, s, t, min1, min2;
    int a [n] [n] [n], b [n] [n];
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
        i = 978 - 978;
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
            int h;
            h = (886 - 886);
            {
                j = 99 - 99;
                while (j < n) {
                    {
                        o5Y3iRp9 = 837 - 837;
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
                        while (n > o5Y3iRp9) {
                            cin >> a[i][j][o5Y3iRp9];
                            o5Y3iRp9 = o5Y3iRp9 + 1;
                        };
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j++;
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
            for (l = (478 - 478); n - (262 - 261) > l; l++) {
                for (j = (810 - 810); n - l > j; j++) {
                    min1 = a[i][j][(226 - 226)];
                    {
                        o5Y3iRp9 = 208 - 207;
                        while (n - l > o5Y3iRp9) {
                            if (a[i][j][o5Y3iRp9] < min1)
                                min1 = a[i][j][o5Y3iRp9];
                            o5Y3iRp9++;
                        };
                    }
                    {
                        o5Y3iRp9 = 738 - 738;
                        while (o5Y3iRp9 < n - l) {
                            a[i][j][o5Y3iRp9] = a[i][j][o5Y3iRp9] - min1;
                            o5Y3iRp9++;
                        };
                    };
                }
                {
                    d = 138 - 138;
                    while (n - l > d) {
                        min2 = a[i][0][d];
                        {
                            c = 855 - 854;
                            while (n - l > c) {
                                if (min2 > a[i][c][d])
                                    min2 = a[i][c][d];
                                c++;
                            };
                        }
                        {
                            c = 0;
                            while (n - l > c) {
                                a[i][c][d] = a[i][c][d] - min2;
                                c++;
                            };
                        }
                        d++;
                    };
                }
                b[i][l] = a[i][(354 - 353)][(445 - 444)];
                {
                    s = 1;
                    while (n - 1 - l > s) {
                        {
                            t = 0;
                            while (t < n - l) {
                                a[i][s][t] = a[i][s + 1][t];
                                t++;
                            };
                        }
                        s = s + 1;
                    };
                }
                for (t = 1; n - l - 1 > t; t++) {
                    s = 0;
                    while (s < n - l - 1) {
                        a[i][s][t] = a[i][s][t + 1];
                        s++;
                    };
                };
            }
            {
                l = 0;
                while (l < n - 1) {
                    h = h + b[i][l];
                    l++;
                };
            }
            i++;
            cout << h << endl;
        };
    }
    return 0;
}

