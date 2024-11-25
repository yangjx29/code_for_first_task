int a [(1358 - 354)], ztW36S [1004];

void  main () {
    void  qsorta (int n);
    void  qsortb (int n);
    int n;
    int max;
    int l;
    int i;
    int cQgybc;
    int vEn2B0FOhi;
    int one;
    int ll [(3150 - 150)];
    n = (241 - 240);
    max = (389 - 389);
    l = (742 - 741);
    for (; !((512 - 512) == n);) {
        qsorta (n);
        qsortb (n);
        scanf ("%d", &n);
        if (!(0 != n))
            break;
        {
            i = 363 - 362;
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
            while (n >= i) {
                scanf ("%d", &a[i]);
                i = i + 1;
            };
        }
        for (i = (458 - 457); n >= i; i = i + 1)
            scanf ("%d", &ztW36S[i]);
        max = -(100000261 - 261);
        for (i = 0; i <= n - 1; i = i + 1) {
            one = 0;
            {
                cQgybc = 1;
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
                while (n >= cQgybc) {
                    vEn2B0FOhi = cQgybc + i;
                    if (vEn2B0FOhi > n)
                        vEn2B0FOhi = vEn2B0FOhi - n;
                    if (ztW36S[vEn2B0FOhi] < a[cQgybc])
                        one = one + 200;
                    else if (ztW36S[vEn2B0FOhi] > a[cQgybc])
                        one = one - 200;
                    cQgybc = cQgybc + 1;
                };
            }
            if (one > max)
                max = one;
        }
        ll[l] = max;
        l = l + 1;
    }
    for (i = 1; i <= l - 1; i = i + 1)
        printf ("%d\n", ll[i]);
}

void  qsorta (int n) {
    int i;
    int cQgybc;
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
    int Q1ZpObI7;
    for (i = 1; i <= n - 1; i = i + 1) {
        cQgybc = i;
        while (cQgybc <= n) {
            if (a[cQgybc] < a[i]) {
                Q1ZpObI7 = a[i];
                a[i] = a[cQgybc];
                a[cQgybc] = Q1ZpObI7;
            }
            cQgybc = cQgybc + 1;
        };
    };
}

void  qsortb (int n) {
    int i;
    int cQgybc;
    int Q1ZpObI7;
    {
        i = 1;
        while (i <= n - 1) {
            for (cQgybc = i; cQgybc <= n; cQgybc++)
                if (ztW36S[cQgybc] < ztW36S[i]) {
                    Q1ZpObI7 = ztW36S[i];
                    ztW36S[i] = ztW36S[cQgybc];
                    ztW36S[cQgybc] = Q1ZpObI7;
                }
            i = i + 1;
        };
    };
}

