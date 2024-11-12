int main () {
    int l;
    int k;
    k = 0;
    int n, sf;
    int x [(880 - 870)], y [10], cx24NG [10], a [200], b [200];
    double  s [200];
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
    double  u;
    scanf ("%d", &n);
    {
        int i = 0;
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
            scanf ("%d %d %d", &x[i], &y[i], &cx24NG[i]);
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
        int i = 0;
        while (n > i) {
            {
                int j = i + 1;
                while (j < n) {
                    sf = (x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]) + (cx24NG[i] - cx24NG[j]) * (cx24NG[i] - cx24NG[j]);
                    s[k] = sqrt (sf);
                    a[k] = i;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    b[k] = j;
                    j = j + 1;
                    k = k + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        int q = 1;
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
        while (q < k) {
            {
                int w = 0;
                while (w < k - q) {
                    if (s[w] < s[w + 1]) {
                        u = s[w];
                        s[w] = s[w + 1];
                        s[w + 1] = u;
                        l = a[w];
                        a[w] = a[w + 1];
                        a[w + 1] = l;
                        l = b[w];
                        b[w] = b[w + 1];
                        b[w + 1] = l;
                    }
                    w++;
                };
            }
            q = q + 1;
        };
    }
    {
        int i = 0;
        while (i < k) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", x[a[i]], y[a[i]], cx24NG[a[i]], x[b[i]], y[b[i]], cx24NG[b[i]], s[i]);
            i++;
        };
    }
    return 0;
}

