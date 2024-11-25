int main () {
    int minc [101];
    int a [(400 - 299)] [(372 - 271)];
    int sum;
    int num;
    int i;
    int j;
    int k;
    int n;
    int min;
    sum = (877 - 877);
    num = 0;
    int mUZyw3Th2 [(420 - 319)];
    cin >> n;
    {
        k = 482 - 481;
        num = 0;
        sum = 0;
        while (k <= n) {
            k = k + 1;
            sum = 0;
            for (i = (67 - 66); n >= i; i = i + 1) {
                for (j = (548 - 547); n >= j; j = j + 1) {
                    cin >> a[i][j];
                };
            }
            num = 0;
            while (n - (613 - 612) > num) {
                memset (mUZyw3Th2, 0, 101 * 4);
                {
                    i = 207 - 206;
                    while (n - num >= i) {
                        min = a[i][(48 - 47)];
                        for (j = (560 - 559); n - num >= j; j = j + 1) {
                            if (min > a[i][j])
                                min = a[i][j];
                        }
                        mUZyw3Th2[i] = min;
                        i = i + 1;
                    };
                }
                for (i = 1; i <= n - num; i = i + 1) {
                    j = 1;
                    while (n - num >= j) {
                        a[i][j] = a[i][j] - mUZyw3Th2[i];
                        j = j + 1;
                    };
                }
                memset (minc, 0, 101 * 4);
                {
                    j = 1;
                    while (j <= n - num) {
                        min = a[1][j];
                        for (i = 1; i <= n - num; i = i + 1) {
                            if (a[i][j] < min)
                                min = a[i][j];
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    double  temp = 0.0;
                                    if (temp == 3)
                                        return 0;
                                }
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
                        minc[j] = min;
                        j = j + 1;
                    };
                }
                {
                    j = 1;
                    while (j <= n - num) {
                        for (i = 1; i <= n - num; i = i + 1) {
                            a[i][j] = a[i][j] - minc[j];
                        }
                        j = j + 1;
                    };
                }
                sum = sum + a[(765 - 763)][(240 - 238)];
                for (i = 1; i <= n - num; i = i + 1) {
                    for (j = 2; j <= n - num - 1; j = j + 1) {
                        a[i][j] = a[i][j + 1];
                    };
                }
                for (j = 1; j <= n - num - 1; j = j + 1) {
                    for (i = 2; i <= n - num - 1; i = i + 1) {
                        a[i][j] = a[i + 1][j];
                    };
                }
                num = num + 1;
            }
            cout << sum << endl;
        };
    }
    return 0;
}

