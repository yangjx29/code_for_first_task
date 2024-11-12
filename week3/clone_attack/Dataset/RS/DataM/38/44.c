int main () {
    double  sz [(514 - 414)] [100], sum [100], m [100], p [100], s [100];
    int n, i, j, a [(673 - 573)];
    scanf ("%d", &n);
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
        i = 118 - 118;
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
            scanf ("%d", &a[i]);
            sum[i] = (440 - 440);
            {
                j = 0;
                while (a[i] > j) {
                    scanf ("%lf", &sz[i][j]);
                    sum[i] = sum[i] + sz[i][j] / a[i];
                    j++;
                };
            }
            p[i] = 0;
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
            {
                j = 0;
                while (j < a[i]) {
                    p[i] = p[i] + (sz[i][j] - sum[i]) * (sz[i][j] - sum[i]);
                    j++;
                };
            }
            s[i] = sqrt (p[i] / a[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            printf ("%.5f\n", s[i]);
            i++;
        };
    }
    return 0;
}

