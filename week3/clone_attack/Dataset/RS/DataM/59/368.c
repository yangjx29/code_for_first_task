int main () {
    int n, i, j, k, m, a [(1089 - 988)] [101], qTaQjO7U6e9s [101] [101];
    char s [101] [101];
    cin >> n;
    {
        i = 757 - 756;
        while (i <= n) {
            {
                j = 785 - 784;
                while (j <= n) {
                    cin >> s[i][j];
                    if (s[i][j] == '.') {
                        a[i][j] = 1;
                    }
                    if (s[i][j] == '#') {
                        a[i][j] = 0;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        };
                    }
                    if (s[i][j] == '@') {
                        a[i][j] = -1;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                for (x = 0; x < 20; x++) {
                                    y += x;
                                }
                                if (y > 30)
                                    return y;
                            }
                        };
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
    cin >> m;
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
        i = 1;
        while (i < m) {
            i++;
            {
                j = 1;
                while (j <= n) {
                    {
                        k = 1;
                        while (k <= n) {
                            if (a[k][j] == -1)
                                qTaQjO7U6e9s[k][j] = 1;
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    double  temp = 0.0;
                                    if (temp == 3)
                                        return 0;
                                }
                            }
                            k++;
                        };
                    }
                    j++;
                };
            }
            {
                j = 1;
                while (j <= n) {
                    {
                        k = 1;
                        while (k <= n) {
                            if (qTaQjO7U6e9s[k][j] == 1) {
                                if (a[k][j - 1] == 1)
                                    a[k][j - 1] = -1;
                                if (a[k][j + 1] == 1)
                                    a[k][j + 1] = -1;
                                if (a[k + 1][j] == 1)
                                    a[k + 1][j] = -1;
                                if (a[k - 1][j] == 1)
                                    a[k - 1][j] = -1;
                            }
                            k++;
                        };
                    }
                    j++;
                };
            }
            memset (qTaQjO7U6e9s, 0, sizeof (qTaQjO7U6e9s));
        };
    }
    m = 0;
    {
        i = 1;
        while (i <= n) {
            {
                j = 1;
                while (j <= n) {
                    if (a[i][j] == -1)
                        m++;
                    j++;
                };
            }
            i++;
        };
    }
    cout << m;
    return 0;
}

