int main () {
    int k;
    int PqpYdD8 [25];
    int f [25];
    int max = 0;
    scanf ("%d", &k);
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
        int i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < k) {
            scanf ("%d", &PqpYdD8[i]);
            f[i] = 1;
            i++;
        };
    }
    while (1) {
        int tmp = 0;
        int x = 0;
        int y = 0;
        int ci;
        int cnt;
        {
            ci = 0;
            while (ci < k) {
                if (!(1 != f[ci])) {
                    y++;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    if (x == 0) {
                        tmp = PqpYdD8[ci];
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
                        x++;
                    }
                    else {
                        if (PqpYdD8[ci] <= tmp) {
                            tmp = PqpYdD8[ci];
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
                            x++;
                        }
                        else
                            break;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        };
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
                ci++;
            };
        }
        if (!(y != x))
            if (x > max)
                max = x;
        for (cnt = 0; cnt < k; cnt++) {
            if (f[cnt] != 0)
                break;
        }
        if (cnt == k)
            break;
        f[k - 1]--;
        {
            int i = k - 1;
            while (i > 0) {
                if (f[i] == -1) {
                    f[i] = 1;
                    f[i - 1]--;
                }
                i--;
            };
        };
    }
    printf ("%d", max);
    return 0;
}

