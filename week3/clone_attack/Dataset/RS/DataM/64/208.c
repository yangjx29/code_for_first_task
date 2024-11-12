void  main () {
    float d [100], temp;
    int n, i, j, t, l = 0;
    int x [20], y [20], z [20], d1 [100], d2 [100];
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
        i = 548 - 547;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= n) {
            scanf ("%d%d%d", &x[i], &y[i], &z[i]);
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
            i++;
        };
    }
    {
        i = 1;
        while (n > i) {
            {
                j = i + 1;
                while (j <= n) {
                    l++;
                    d[l] = sqrt ((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]) + (z[i] - z[j]) * (z[i] - z[j]));
                    d1[l] = i;
                    d2[l] = j;
                    j++;
                };
            }
            i++;
        };
    }
    {
        i = 1;
        while (n * (n - 1) / 2 > i) {
            i++;
            for (j = 1; n * (n - 1) / 2 > j; j++)
                if (d[j] < d[j + 1]) {
                    temp = d[j];
                    d[j] = d[j + 1];
                    d[j + 1] = temp;
                    t = d1[j];
                    d1[j] = d1[j + 1];
                    d1[j + 1] = t;
                    t = d2[j];
                    d2[j] = d2[j + 1];
                    d2[j + 1] = t;
                };
        };
    }
    {
        i = 1;
        while (i <= n * (n - 1) / 2) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", x[d1[i]], y[d1[i]], z[d1[i]], x[d2[i]], y[d2[i]], z[d2[i]], d[i]);
            i++;
        };
    };
}

