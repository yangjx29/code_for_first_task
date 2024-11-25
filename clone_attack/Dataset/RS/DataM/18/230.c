int main () {
    int i;
    int j;
    int k;
    int t;
    int sum;
    int n;
    int N;
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
    int min;
    sum = 0;
    int jz [n] [n] [n];
    cin >> n;
    {
        k = 0;
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
            {
                i = 0;
                while (i < n) {
                    {
                        j = 0;
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
                        while (j < n) {
                            cin >> jz[k][i][j];
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    double  temp = 0.0;
                                    if (temp == 3)
                                        return 0;
                                }
                            }
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
            k = k + 1;
        };
    }
    {
        k = 0;
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
        while (k < n) {
            N = n;
            sum = 0;
            {
                t = 1;
                while (t < n) {
                    t = t + 1;
                    for (i = 0; N > i; i = i + 1) {
                        min = jz[k][i][0];
                        {
                            j = 0;
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
                            while (j < N) {
                                if (jz[k][i][j] < min)
                                    min = jz[k][i][j];
                                {
                                    int x = 0, y;
                                    if (!(x * (x - 1) % 2 == 0)) {
                                        double  temp = 0.0;
                                        if (temp == 3)
                                            return 0;
                                    }
                                }
                                j++;
                            };
                        }
                        {
                            j = 0;
                            while (j < N) {
                                jz[k][i][j] = jz[k][i][j] - min;
                                j++;
                            };
                        };
                    }
                    for (j = 0; j < N; j = j + 1) {
                        min = jz[k][0][j];
                        {
                            i = 0;
                            while (i < N) {
                                if (jz[k][i][j] < min)
                                    min = jz[k][i][j];
                                i++;
                            };
                        }
                        {
                            i = 0;
                            while (i < N) {
                                jz[k][i][j] = jz[k][i][j] - min;
                                i++;
                            };
                        };
                    }
                    sum = sum + jz[k][1][1];
                    {
                        i = 1;
                        while (i < N -1) {
                            {
                                j = 0;
                                while (j < N) {
                                    jz[k][i][j] = jz[k][i + 1][j];
                                    j++;
                                };
                            }
                            i++;
                        };
                    }
                    N = N -1;
                    {
                        j = 1;
                        while (j < N -1) {
                            for (i = 0; i < n; i++)
                                jz[k][i][j] = jz[k][i][j + 1];
                            j++;
                        };
                    };
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            k++;
            cout << sum << endl;
        };
    }
    return 0;
}

