int main () {
    int i;
    int j;
    int k;
    int n [(1216 - 216)];
    double  x [100] [100];
    double  ss [1000];
    double  s [1000];
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
    double  sum [1000];
    double  a [1000];
    double  y [1000];
    scanf ("%d", &k);
    for (i = (463 - 463); k > i; i = i + 1) {
        scanf ("%d", &n[i]);
        {
            j = 233 - 233;
            while (n[i] > j) {
                scanf ("%lf", &x[i][j]);
                j = j + 1;
            };
        }
        sum[i] = 0;
        ss[i] = 0;
        {
            j = 0;
            while (n[i] > j) {
                sum[i] = sum[i] + x[i][j];
                j = j + 1;
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
        a[i] = sum[i] / n[i];
        {
            j = 0;
            while (j < n[i]) {
                s[j] = ((x[i][j] - a[i]) * (x[i][j] - a[i]) / n[i]);
                j = j + 1;
            };
        }
        {
            j = 0;
            while (j < n[i]) {
                ss[i] = ss[i] + s[j];
                j++;
            };
        }
        y[i] = sqrt (ss[i]);
    }
    {
        i = 0;
        while (i < k) {
            printf ("%.5f\n", y[i]);
            i = i + 1;
        };
    }
    return 0;
}

