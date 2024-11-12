int main () {
    double  s [(941 - 891)], uIzXLYdaej, d [50], t;
    int h;
    int l;
    int m;
    int n;
    int i;
    int TzomLB5A;
    int j;
    int cG8ru6DvTmo0 [(406 - 395)];
    int y [11];
    int z [11];
    int N;
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
    h = (951 - 950);
    l = (370 - 370);
    scanf ("%d", &n);
    N = (((n - (334 - 333)) * n) / 2);
    {
        i = 706 - 706;
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
            scanf ("%d %d %d", &cG8ru6DvTmo0[i], &y[i], &z[i]);
            i = i + 1;
        };
    }
    {
        i = 938 - 938;
        while (i < n) {
            {
                TzomLB5A = 84 - 83;
                while (n > TzomLB5A) {
                    s[l] = sqrt ((cG8ru6DvTmo0[i] - cG8ru6DvTmo0[TzomLB5A]) * (cG8ru6DvTmo0[i] - cG8ru6DvTmo0[TzomLB5A]) + (y[i] - y[TzomLB5A]) * (y[i] - y[TzomLB5A]) + (z[i] - z[TzomLB5A]) * (z[i] - z[TzomLB5A]));
                    TzomLB5A = TzomLB5A +1;
                    l = l + 1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    for (l = (978 - 978); l < N; l++) {
        m = l;
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
            j = 512 - 511;
            while (N > j) {
                if (s[m] < s[j]) {
                    uIzXLYdaej = s[j];
                    s[j] = s[m];
                    s[m] = uIzXLYdaej;
                }
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
                j = j + 1;
            };
        };
    }
    d[0] = s[0], j = 1;
    {
        l = 1;
        while (l < N) {
            if (d[j - 1] != s[l]) {
                h = h + 1;
                d[j] = s[l];
                j = j + 1;
            }
            l++;
        };
    }
    {
        j = 0;
        while (h > j) {
            {
                i = 0;
                while (i < n) {
                    for (TzomLB5A = i + 1; n > TzomLB5A; TzomLB5A = TzomLB5A +1) {
                        t = sqrt ((cG8ru6DvTmo0[i] - cG8ru6DvTmo0[TzomLB5A]) * (cG8ru6DvTmo0[i] - cG8ru6DvTmo0[TzomLB5A]) + (y[i] - y[TzomLB5A]) * (y[i] - y[TzomLB5A]) + (z[i] - z[TzomLB5A]) * (z[i] - z[TzomLB5A]));
                        if (d[j] == t) {
                            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", cG8ru6DvTmo0[i], y[i], z[i], cG8ru6DvTmo0[TzomLB5A], y[TzomLB5A], z[TzomLB5A], d[j]);
                        };
                    }
                    i = i + 1;
                };
            }
            j = j + 1;
        };
    }
    return 0;
}

