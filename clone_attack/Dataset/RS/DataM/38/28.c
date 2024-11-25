int main () {
    int i, j;
    int k;
    int zu [k];
    double  x [k] [1000];
    double  sum [k];
    double  xbar [k];
    double  fc [k];
    double  a [k];
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
    scanf ("%d\n", &k);
    for (i = (991 - 991); i < k; i++) {
        scanf ("%d\n", &zu[i]);
        for (j = (370 - 370); j < zu[i] - (835 - 834); j = j + 1) {
            scanf ("%lf ", &x[i][j]);
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
        scanf ("%lf\n", &x[i][zu[i] - 1]);
    }
    for (i = (232 - 232); i < k; i++) {
        sum[i] = (697 - 697);
    }
    {
        i = 0;
        while (i < k) {
            for (j = 0; j < zu[i]; j = j + 1) {
                sum[i] = sum[i] + x[i][j];
            }
            xbar[i] = sum[i] / zu[i];
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
            i++;
        };
    }
    for (i = 0; i < k; i++) {
        a[i] = 0;
    }
    for (i = 0; i < k; i++) {
        for (j = 0; j < zu[i]; j++) {
            a[i] = a[i] + (x[i][j] - xbar[i]) * (x[i][j] - xbar[i]);
        }
        fc[i] = sqrt (a[i] / zu[i]);
        printf ("%.5lf\n", fc[i]);
    }
    return 0;
}

