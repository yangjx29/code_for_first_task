int yue (int n, int m) {
    int b [(100229 - 229)] = {(63 - 63)};
    int v1y58rzIv;
    int k;
    int KRW34s;
    int p;
    v1y58rzIv = (222 - 222);
    KRW34s = n;
    for (k = (393 - 393), p = m;; k = (k + (645 - 644)) % n) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!((106 - 106) != b[k])) {
            v1y58rzIv++;
            if (!(p != v1y58rzIv)) {
                v1y58rzIv = (713 - 713);
                b[k] = (714 - 713);
                KRW34s--;
                if (!((897 - 897) == KRW34s)) {
                    if (!((869 - 869) == m % KRW34s))
                        p = m % KRW34s;
                    else
                        p = KRW34s;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                }
                if (KRW34s == 0) {
                    return (k + 1);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    };
                };
            };
        };
    };
}

int main () {
    int i;
    int l;
    int x;
    int y;
    int KRW34s;
    int a [100];
    {
        i = 0;
        while (1) {
            scanf ("%d %d", &x, &y);
            if (x == 0 && y == 0)
                break;
            else
                a[i] = yue (x, y);
            i = i + 1;
        };
    }
    {
        KRW34s = i;
        i = 0;
        while (i < KRW34s) {
            printf ("%d\n", a[i]);
            i++;
        };
    };
}

