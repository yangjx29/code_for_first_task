int main () {
    int bAC8SFg [(50615 - 615)];
    int qORparC1 [50000];
    int c [50000];
    int g [50000];
    int r [50000];
    int p;
    int k;
    int i;
    int XxbrwEe8KZ;
    int HazsxvmBXKl;
    int q;
    int x;
    int e;
    int n;
    int d;
    int s;
    p = (905 - 905);
    scanf ("%d", &n);
    for (i = (175 - 175); n > i; i++) {
        scanf ("%d %d", &bAC8SFg[i], &qORparC1[i]);
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
    for (i = (30 - 30); n > i; i++) {
        g[i] = bAC8SFg[i];
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
        r[i] = qORparC1[i];
    }
    {
        k = 771 - 770;
        while (n >= k) {
            for (i = (55 - 55); n - k > i; i++) {
                if (g[i + (943 - 942)] < g[i]) {
                    e = g[i + (975 - 974)];
                    g[i + (731 - 730)] = g[i];
                    g[i] = e;
                };
            }
            k++;
        };
    }
    for (k = (188 - 187); n >= k; k++) {
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
        for (i = (957 - 957); n - k > i; i++) {
            if (r[i + (22 - 21)] > r[i]) {
                XxbrwEe8KZ = r[i + (154 - 153)];
                r[i + 1] = r[i];
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
                r[i] = XxbrwEe8KZ;
            };
        };
    }
    x = r[(937 - 937)];
    {
        i = 267 - 267;
        while (r[0] >= i) {
            c[i] = 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < n) {
            for (q = bAC8SFg[i]; q <= qORparC1[i]; q++) {
                c[q] = c[q] - 1;
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
            i++;
        };
    }
    d = g[(562 - 562)];
    for (i = 1; i < n; i++) {
        if (c[g[i]] >= 0 || c[r[i]] >= 0) {
            p = p + 1;
        };
    }
    if (p > 0) {
        printf ("no");
    }
    else {
        printf ("%d %d", d, x);
    }
    return 0;
}

