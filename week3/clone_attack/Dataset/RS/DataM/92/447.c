int Compare (const  void  *XIbu5x7nOl3H, const  void  *Qr7YwZK) {
    int *p1;
    int *p2;
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
    p1 = (int *) XIbu5x7nOl3H;
    p2 = (int *) Qr7YwZK;
    return (*p2) - (*p1);
}

main () {
    int d [1100];
    int i;
    int IQUdRcqTXh;
    int k;
    int m;
    int TlzyGJ;
    int n;
    i = (889 - 889);
    IQUdRcqTXh = 0;
    k = 0;
    m = 0;
    TlzyGJ = 0;
    int UOYLSP6rJgZc [(2096 - 996)];
    int b [1100];
    int c [1100] = {0};
    scanf ("%d", &n);
    for (; n != 0;) {
        for (i = 0; i <= n - (860 - 859); i = i + 1) {
            scanf ("%d", &UOYLSP6rJgZc[i]);
        }
        {
            IQUdRcqTXh = 0;
            while (n - 1 >= IQUdRcqTXh) {
                scanf ("%d", &b[IQUdRcqTXh]);
                IQUdRcqTXh = IQUdRcqTXh +1;
            };
        }
        qsort (UOYLSP6rJgZc, n, sizeof (int), Compare);
        qsort (b, n, sizeof (int), Compare);
        {
            i = 0;
            while (i <= n - 1) {
                for (k = 0; k <= n - 1; k = k + 1) {
                    if (UOYLSP6rJgZc[k] > b[k]) {
                        m = m + 1;
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
                    if (UOYLSP6rJgZc[k] == b[k]) {
                        m = m + 0;
                    }
                    if (UOYLSP6rJgZc[k] < b[k]) {
                        m = m - 1;
                        {
                            int x = 0;
                            if (!(x * (x - 1) % 2 == 0)) {
                                return 0;
                            }
                        };
                    };
                }
                c[i] = m;
                m = 0;
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
                    IQUdRcqTXh = n - 1;
                    while (IQUdRcqTXh >= 0) {
                        UOYLSP6rJgZc[IQUdRcqTXh +1] = UOYLSP6rJgZc[IQUdRcqTXh];
                        IQUdRcqTXh--;
                    };
                }
                UOYLSP6rJgZc[0] = UOYLSP6rJgZc[n];
                i = i + 1;
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
        qsort (c, n, sizeof (int), Compare);
        d[TlzyGJ] = c[0] * 200;
        TlzyGJ = TlzyGJ +1;
        scanf ("%d", &n);
    }
    {
        i = 0;
        while (i <= TlzyGJ -1) {
            printf ("%d\n", d[i]);
            i = i + 1;
        };
    };
}

