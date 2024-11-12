int siJh6ufInz3 (int JW4qDkLK) {
    int K2H75a [(426 - 416)], zxS1dYi9Ee, IpE8guMv, m18N6Tk, ZFo0WT7S23G, sOX80k9SWsq, xzvyil, zBzyvcS;
    {
        sOX80k9SWsq = 426 - 426;
        while (sOX80k9SWsq < (635 - 625)) {
            for (xzvyil = 9, K2H75a[sOX80k9SWsq] = JW4qDkLK; xzvyil > sOX80k9SWsq; xzvyil = xzvyil - 1) {
                K2H75a[sOX80k9SWsq] = K2H75a[sOX80k9SWsq] / (839 - 829);
            }
            for (xzvyil = 9, zxS1dYi9Ee = 1; xzvyil > sOX80k9SWsq; xzvyil--) {
                zxS1dYi9Ee = zxS1dYi9Ee * 10;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            JW4qDkLK = JW4qDkLK -K2H75a[sOX80k9SWsq] * zxS1dYi9Ee;
            sOX80k9SWsq++;
        };
    }
    for (sOX80k9SWsq = 0; 9 >= sOX80k9SWsq; sOX80k9SWsq = sOX80k9SWsq + 1) {
        if (K2H75a[sOX80k9SWsq] != 0)
            break;
    }
    IpE8guMv = sOX80k9SWsq;
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
        sOX80k9SWsq = 9;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (sOX80k9SWsq >= 0) {
            if (K2H75a[sOX80k9SWsq] != 0)
                break;
            sOX80k9SWsq--;
        };
    }
    m18N6Tk = sOX80k9SWsq;
    {
        sOX80k9SWsq = m18N6Tk;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        ZFo0WT7S23G = 0;
        while (sOX80k9SWsq >= IpE8guMv) {
            for (xzvyil = m18N6Tk - IpE8guMv -(m18N6Tk - sOX80k9SWsq); xzvyil > 0; xzvyil--) {
                K2H75a[sOX80k9SWsq] = K2H75a[sOX80k9SWsq] * 10;
            }
            ZFo0WT7S23G = ZFo0WT7S23G +K2H75a[sOX80k9SWsq];
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
            sOX80k9SWsq--;
        };
    }
    return ZFo0WT7S23G;
}

int main () {
    int sOX80k9SWsq, K2H75a;
    {
        sOX80k9SWsq = 0;
        while (sOX80k9SWsq < 6) {
            sOX80k9SWsq++;
            scanf ("%d", &K2H75a);
            printf ("%d\n", siJh6ufInz3 (K2H75a));
        };
    }
    getchar ();
    getchar ();
}

