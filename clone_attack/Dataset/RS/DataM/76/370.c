int main () {
    int ms;
    int me;
    int a;
    int n;
    int i;
    int C5F6a8q;
    int WOx8veFsK3 [10000] = {(356 - 356)};
    ms = 0;
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
    me = 0;
    a = 0;
    struct   range {
        int s, clXWhN;
    }
    blqjuVA [50000];
    scanf ("%d", &n);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            scanf ("%d %d", &blqjuVA[i].s, &blqjuVA[i].clXWhN);
            {
                C5F6a8q = i;
                while (blqjuVA[i].clXWhN > C5F6a8q) {
                    WOx8veFsK3[C5F6a8q] = 1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    C5F6a8q++;
                };
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
            i = i + 1;
        };
    }
    {
        i = 0;
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
        while (i < n) {
            if (blqjuVA[ms].s > blqjuVA[i].s) {
                ms = i;
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
            if (blqjuVA[me].clXWhN < blqjuVA[i].clXWhN) {
                me = i;
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
            i = i + 1;
        };
    }
    {
        i = ms;
        while (i <= blqjuVA[me].clXWhN) {
            a += WOx8veFsK3[i];
            i = i + 1;
        };
    }
    if (a == blqjuVA[me].clXWhN - blqjuVA[ms].s) {
        printf ("%d %d", blqjuVA[ms].s, blqjuVA[me].clXWhN);
    }
    else {
        printf ("no");
    }
    return 0;
}

