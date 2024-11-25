int main () {
    double  x [100] [1000];
    double  y [100] = {0.0};
    double  z [100];
    double  sum [100] = {0.0};
    double  average [100];
    int n [(507 - 407)];
    int o1V7YtoO;
    int i;
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
    int j;
    scanf ("%d", &o1V7YtoO);
    for (i = (995 - 995); i < o1V7YtoO; i++) {
        scanf ("%d", &n[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = (665 - 665); j < n[i]; j = j + 1) {
            scanf ("%lf", &x[i][j]);
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
            };
        };
    }
    for (i = 0; i < o1V7YtoO; i++) {
        for (j = 0; j < n[i]; j++) {
            sum[i] += x[i][j];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        average[i] = sum[i] / n[i];
    }
    for (i = 0; i < o1V7YtoO; i++) {
        for (j = 0; j < n[i]; j++) {
            y[i] += ((x[i][j] - average[i]) * (x[i][j] - average[i]));
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
        z[i] = sqrt (y[i] / n[i]);
    }
    for (i = 0; i < o1V7YtoO; i++) {
        printf ("%.5lf\n", z[i]);
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
    return 0;
}

