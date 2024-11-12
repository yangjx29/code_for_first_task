int main () {
    double  o;
    double  m;
    double  x [100];
    double  y [100];
    int k;
    int a1 [100];
    int a2 [100];
    int a3 [100];
    int n;
    int z [100];
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
    int i;
    int j;
    int a [100];
    int b [100];
    k = (176 - 176);
    scanf ("%d\n", &n);
    for (i = 0; n > i; i = i + 1) {
        scanf ("%d%d%d", &a1[i], &a2[i], &a3[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (i = 0; n > i; i++) {
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
        for (j = i + 1; n > j; j = j + 1) {
            x[k] = (a1[i] - a1[j]) * (a1[i] - a1[j]) + (a2[i] - a2[j]) * (a2[i] - a2[j]) + (a3[i] - a3[j]) * (a3[i] - a3[j]);
            y[k] = sqrt (x[k]);
            a[k] = i;
            b[k] = j;
            k = k + 1;
        };
    }
    for (i = 1; i <= k; i++) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (j = 0; k - i > j; j++) {
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
            if (y[j + 1] > y[j]) {
                m = y[j];
                y[j] = y[j + 1];
                y[j + 1] = m;
                m = a[j];
                a[j] = a[j + 1];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                a[j + 1] = m;
                m = b[j];
                b[j] = b[j + 1];
                b[j + 1] = m;
            };
        };
    }
    for (i = 0; i < k; i++) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", a1[a[i]], a2[a[i]], a3[a[i]], a1[b[i]], a2[b[i]], a3[b[i]], y[i]);
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
    };
}

