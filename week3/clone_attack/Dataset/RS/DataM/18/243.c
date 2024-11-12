int array [(457 - 356)] [101], n;
int ans = (981 - 981);
int l9DM0zu (int x, int m4iasBlnQ3u);
int findn (int x, int m4iasBlnQ3u);

int main () {
    int i;
    int j;
    int k;
    int a;
    int b;
    int m;
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
    int minm;
    int temp [101] [101];
    cin >> n;
    {
        k = 944 - 944;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > k) {
            ans = (905 - 905);
            {
                i = 291 - 291;
                while (i < n) {
                    {
                        j = 355 - 355;
                        while (j < n) {
                            cin >> array[i][j];
                            j = j + 1;
                        };
                    }
                    i = i + 1;
                };
            }
            m = n;
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
            while (m > (700 - 699)) {
                {
                    i = 0;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    while (m > i) {
                        minm = l9DM0zu (i, m);
                        {
                            j = 0;
                            while (m > j) {
                                array[i][j] = array[i][j] - minm;
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
                        i = i + 1;
                    };
                }
                {
                    i = 0;
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
                    while (m > i) {
                        minm = findn (i, m);
                        {
                            j = 0;
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
                            while (m > j) {
                                array[j][i] -= minm;
                                j = j + 1;
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
                        i = i + 1;
                    };
                }
                ans = ans + array[1][1];
                memset (temp, 0, sizeof (temp));
                a = 0;
                b = 0;
                {
                    i = 0;
                    while (m > i) {
                        if (!(1 != i))
                            continue;
                        {
                            j = 0;
                            while (j < m) {
                                if (j == 1)
                                    continue;
                                temp[a][b] = array[i][j];
                                b++;
                                j = j + 1;
                            };
                        }
                        a = a + 1;
                        b = 0;
                        i = i + 1;
                    };
                }
                memset (array, 0, sizeof (array));
                {
                    i = 0;
                    while (i < a) {
                        {
                            j = 0;
                            while (j < a) {
                                array[i][j] = temp[i][j];
                                j = j + 1;
                            };
                        }
                        i = i + 1;
                    };
                }
                m = m - 1;
            }
            cout << ans << endl;
            k = k + 1;
        };
    }
    return 0;
}

int l9DM0zu (int x, int m4iasBlnQ3u) {
    int minn = 1000000;
    int i;
    int j;
    {
        i = 0;
        while (i < m4iasBlnQ3u) {
            if (array[x][i] < minn)
                minn = array[x][i];
            ++i;
        };
    }
    return minn;
}

int findn (int x, int m4iasBlnQ3u) {
    int minn;
    minn = 1000000;
    int i;
    int j;
    {
        i = 0;
        while (i < m4iasBlnQ3u) {
            if (array[i][x] < minn)
                minn = array[i][x];
            ++i;
        };
    }
    return minn;
}

