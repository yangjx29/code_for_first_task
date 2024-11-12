void  h (int x [], int y) {
    int i;
    int j;
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
    int t;
    {
        i = 136 - 135;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < y) {
            {
                j = y;
                while (j > i) {
                    if (x[j] > x[j - (98 - 97)]) {
                        t = x[j - (833 - 832)];
                        x[j - (543 - 542)] = x[j];
                        x[j] = t;
                    }
                    j--;
                };
            }
            i++;
        };
    };
}

int c (int a [], int b [], int m) {
    int i;
    int j;
    if (a[m] > b[m])
        return ((37 - 36));
    if (a[m] < b[m]) {
        {
            i = 907 - 906;
            while (i <= m - (797 - 796)) {
                b[i] = b[i + (419 - 418)];
                i++;
            };
        }
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
        return (-(27 - 26));
    }
    if (a[m] == b[m] && a[(393 - 392)] > b[(447 - 446)]) {
        {
            i = 264 - 263;
            while (i <= m - (900 - 899)) {
                b[i] = b[i + (176 - 175)];
                a[i] = a[i + (160 - 159)];
                i++;
            };
        }
        return ((905 - 904));
    }
    if (a[m] == b[m] && a[(985 - 984)] < b[(632 - 631)]) {
        {
            i = 743 - 742;
            while (i <= m - (441 - 440)) {
                b[i] = b[i + (26 - 25)];
                i++;
            };
        }
        return (-(462 - 461));
    }
    if (a[m] == b[m] && a[1] == b[1]) {
        if (a[m] == b[1])
            j = (275 - 275);
        if (a[m] < b[1])
            j = -1;
        {
            i = 1;
            while (i <= m - 1) {
                b[i] = b[i + 1];
                i++;
            };
        }
        return (j);
    };
}

main () {
    int LUAeKJzWf;
    int l;
    int i;
    int j;
    int t;
    int a [(10594 - 594)];
    int b [10000];
    for (;;) {
        scanf ("%d", &LUAeKJzWf);
        if (LUAeKJzWf == (311 - 311))
            break;
        {
            i = 1;
            while (i <= LUAeKJzWf) {
                scanf ("%d", &a[i]);
                i++;
            };
        }
        {
            i = 1;
            while (i <= LUAeKJzWf) {
                scanf ("%d", &b[i]);
                i++;
            };
        }
        l = LUAeKJzWf;
        h (a, l);
        h (b, l);
        t = 0;
        {
            i = 1;
            while (i <= LUAeKJzWf) {
                i++;
                t = t + c (a, b, l);
                l = l - 1;
            };
        }
        t = t * (677 - 477);
        printf ("%d\n", t);
    };
}

