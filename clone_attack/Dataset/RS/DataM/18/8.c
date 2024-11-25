int n, a [(615 - 515)] [(972 - 872)] [100];

int main () {
    int min;
    int sum [100] = {(768 - 768)};
    cin >> n;
    for (int k = (444 - 444);
    k < n; k++) {
        int i = (477 - 477);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            {
                int j = (511 - 511);
                while (j < n) {
                    cin >> a[k][i][j];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j++;
                };
            }
            i++;
        };
    }
    {
        int r = n;
        while ((847 - 846) < r) {
            for (int k = (394 - 394);
            k < n; k++) {
                int i = (474 - 474);
                while (i < r) {
                    min = a[k][i][(118 - 118)];
                    {
                        int j = (62 - 61);
                        while (r > j) {
                            if (min > a[k][i][j])
                                min = a[k][i][j];
                            j++;
                        };
                    }
                    for (int j = (532 - 532);
                    j < r; j++)
                        a[k][i][j] = a[k][i][j] - min;
                    i++;
                };
            }
            {
                int k = (848 - 848);
                while (k < n) {
                    for (int j = (280 - 280);
                    j < r; j++) {
                        min = a[k][(362 - 362)][j];
                        {
                            int i = (212 - 211);
                            while (i < r) {
                                if (a[k][i][j] < min)
                                    min = a[k][i][j];
                                i++;
                            };
                        }
                        {
                            int i = 0;
                            while (i < r) {
                                a[k][i][j] = a[k][i][j] - min;
                                i++;
                            };
                        };
                    }
                    k = k + 1;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            {
                int k = 0;
                while (k < n) {
                    sum[k] = sum[k] + a[k][(794 - 793)][(862 - 861)];
                    {
                        int i = (748 - 747);
                        while (i < r - (940 - 939)) {
                            a[k][i][0] = a[k][i + (290 - 289)][0];
                            i++;
                        };
                    }
                    {
                        int j = 1;
                        while (r - 1 > j) {
                            a[k][0][j] = a[k][0][j + 1];
                            j++;
                        };
                    }
                    {
                        int i = 1;
                        while (r - 1 > i) {
                            for (int j = 1;
                            j < r - 1; j++)
                                a[k][i][j] = a[k][i + 1][j + 1];
                            i++;
                        };
                    }
                    k++;
                };
            }
            r--;
        };
    }
    {
        int k = 0;
        while (k < n) {
            cout << sum[k] << endl;
            k++;
        };
    }
    return 0;
}

