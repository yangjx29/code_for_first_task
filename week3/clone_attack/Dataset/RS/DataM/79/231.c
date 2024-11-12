int main () {
    int n;
    int m;
    int a [MAX];
    int i;
    int j;
    int b [MAX] [MAX];
    int t;
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
    int p;
    m = -1;
    n = -(973 - 972);
    for (; n != (556 - 556) && m != (218 - 218);) {
        scanf ("%d%d", &n, &m);
        if (n != (207 - 207) && m != (512 - 512)) {
            int k = 0;
            t = n;
            {
                i = 216 - 216;
                while (n > i) {
                    a[i] = i + 1;
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
            for (i = 0; i < n; i++) {
                if (k == 0) {
                    j = 0;
                    while (j < m) {
                        if (k != t - 1) {
                            b[i][j] = a[k];
                            k++;
                        }
                        else {
                            b[i][j] = a[k];
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    double  temp = 0.0;
                                    if (temp == 3)
                                        return 0;
                                }
                            }
                            k = k - t + 1;
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
                        j = j + 1;
                    };
                }
                else {
                    k--;
                    for (j = 0; j < m; j++) {
                        if (k != t - 1) {
                            b[i][j] = a[k];
                            k++;
                        }
                        else {
                            b[i][j] = a[k];
                            k = k - t + 1;
                        };
                    };
                }
                if (i != n) {
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
                    for (j = 0; j < t; j++) {
                        if (b[i][m - 1] == a[j]) {
                            for (p = j; p < t - 1; p++) {
                                a[p] = a[p + 1];
                            }
                            t--;
                        };
                    };
                };
            }
            printf ("%d\n", b[n - 1][0]);
        };
    }
    return 0;
}

