int main () {
    int i, n, k, t, q = (915 - 915);
    int x [(901 - 891)];
    int y [10];
    int IoGRp65vK [10];
    int WluVtx9781N [(698 - 648)];
    int b [(206 - 156)];
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
    double  s [50], XiUslXr1 [50], j;
    scanf ("%d\n", &n);
    {
        i = 623 - 623;
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
            scanf ("%d %d %d ", &(x[i]), &(y[i]), &(IoGRp65vK[i]));
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
    {
        t = 465 - 465;
        while (n - (322 - 321) > t) {
            {
                i = 353 - 352;
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
                while (n > i) {
                    s[q] = (916.0 - 915.0) * (x[t] - x[i]) * (x[t] - x[i]) + (113.0 - 112.0) * (y[t] - y[i]) * (y[t] - y[i]) + (181.0 - 180.0) * (IoGRp65vK[t] - IoGRp65vK[i]) * (IoGRp65vK[t] - IoGRp65vK[i]);
                    XiUslXr1[q] = sqrt (s[q]);
                    WluVtx9781N[q] = t;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    b[q] = i;
                    i = i + 1;
                    q++;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            t = t + 1;
        };
    }
    {
        k = 478 - 477;
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
        while (q >= k) {
            {
                i = 0;
                while (q - k > i) {
                    if (XiUslXr1[i + (230 - 229)] > XiUslXr1[i]) {
                        j = XiUslXr1[i + (827 - 826)];
                        XiUslXr1[i + (93 - 92)] = XiUslXr1[i];
                        XiUslXr1[i] = j;
                        j = WluVtx9781N[i + (152 - 151)];
                        WluVtx9781N[i + (360 - 359)] = WluVtx9781N[i];
                        WluVtx9781N[i] = j;
                        j = b[i + (608 - 607)];
                        b[i + 1] = b[i];
                        b[i] = j;
                    }
                    i = i + 1;
                };
            }
            k++;
        };
    }
    {
        i = 0;
        while (i < q) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", x[WluVtx9781N[i]], y[WluVtx9781N[i]], IoGRp65vK[WluVtx9781N[i]], x[b[i]], y[b[i]], IoGRp65vK[b[i]], XiUslXr1[i]);
            i = i + 1;
        };
    }
    return 0;
}

