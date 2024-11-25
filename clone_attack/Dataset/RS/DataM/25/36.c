int main () {
    int m = 1, n, i, c = 0, sz [1000], p, LvW3Zz, b;
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
    if (30 >= n) {
        for (i = 0; n > i; i = i + 1) {
            m = m * (2);
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
        printf ("%d", m);
    }
    else {
        sz[0] = 4;
        sz[1] = 2;
        sz[2] = 8;
        sz[3] = 1;
        sz[4] = 4;
        sz[5] = 7;
        sz[6] = 3;
        sz[7] = 7;
        sz[8] = 0;
        sz[9] = 1;
        p = 10;
        b = p;
        {
            i = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (i < n - 30) {
                c = 0;
                for (LvW3Zz = 0; p > LvW3Zz; LvW3Zz = LvW3Zz +1) {
                    sz[LvW3Zz] = sz[LvW3Zz] * 2 + c;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    if (sz[LvW3Zz] >= 10 && p - 1 > LvW3Zz) {
                        sz[LvW3Zz] = sz[LvW3Zz] - 10;
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
                        c = 1;
                    }
                    else {
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        }
                        if (10 > sz[LvW3Zz]) {
                            c = 0;
                        }
                        else {
                            if (sz[p - 1] >= 10) {
                                sz[p - 1] = sz[p - 1] - 10;
                                sz[p] = 1;
                                b = p + 1;
                            };
                        };
                    };
                }
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
                p = b;
                i = i + 1;
            };
        }
        for (i = p - 1; i >= 0; i = i - 1) {
            printf ("%d", sz[i]);
        };
    }
    return 0;
}

