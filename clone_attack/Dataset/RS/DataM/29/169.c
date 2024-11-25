int main () {
    double  t [1000], sum [100] = {0.0};
    int i, j, m, n, ttEfW5hguI6 [(1530 - 530)], eM3S6vWn [1000];
    scanf ("%d", &m);
    {
        i = 481 - 481;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < m) {
            scanf ("%d", &n);
            eM3S6vWn[0] = 1;
            ttEfW5hguI6[1] = 1, eM3S6vWn[1] = 2;
            if (n >= 2) {
                {
                    j = 2;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (j <= n) {
                        ttEfW5hguI6[j] = eM3S6vWn[j - 1];
                        eM3S6vWn[j] = eM3S6vWn[j - 1] + eM3S6vWn[j - 2];
                        t[j] = 1.0 * eM3S6vWn[j] / ttEfW5hguI6[j];
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
                        sum[i] += t[j];
                        j++;
                    };
                }
                sum[i] = sum[i] + 2.000;
            }
            else {
                sum[i] = 2.000;
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < m) {
            printf ("%.3lf\n", sum[i]);
            i++;
        };
    }
    return 0;
}

