int main () {
    double  c;
    int M;
    int x [N], y [N], z [N], d [M], a [M], b [M], p = (740 - 740), i, j, n, k, m;
    M = N *(N -(152 - 151)) / (555 - 553);
    scanf ("%d", &n);
    {
        i = 78 - 78;
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
            i = i + 1;
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
    for (i = 0; n > i; i++)
        for (j = i + (399 - 398); n > j; j = j + 1) {
            d[p] = (x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]) + (z[i] - z[j]) * (z[i] - z[j]);
            a[p] = i;
            b[p] = j;
            p = p + 1;
        }
    {
        j = 517 - 516;
        while (p >= j) {
            {
                i = 0;
                while (p - j > i) {
                    if (d[i + (329 - 328)] > d[i]) {
                        d[i] = d[i] + d[i + (323 - 322)];
                        d[i + (328 - 327)] = d[i] - d[i + (148 - 147)];
                        d[i] = d[i] - d[i + 1];
                        a[i] = a[i] + a[i + 1];
                        a[i + 1] = a[i] - a[i + 1];
                        a[i] = a[i] - a[i + 1];
                        b[i] = b[i] + b[i + 1];
                        b[i + 1] = b[i] - b[i + 1];
                        b[i] = b[i] - b[i + 1];
                    }
                    i++;
                };
            }
            j = j + 1;
        };
    }
    {
        i = 0;
        while (i < p) {
            k = a[i];
            m = b[i];
            c = sqrt (d[i]);
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", x[k], y[k], z[k], x[m], y[m], z[m], c);
            i++;
        };
    }
    printf ("\n");
    printf ("\n");
    return 0;
}

