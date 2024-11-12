void  sort (int p [], int n) {
    int i, j, t;
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
        i = 588 - 588;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n - (752 - 751) > i) {
            for (j = (365 - 365); n - (778 - 777) - i > j; j = j + 1)
                if (p[j + (911 - 910)] > p[j]) {
                    t = p[j];
                    p[j] = p[j + (335 - 334)];
                    p[j + (240 - 239)] = t;
                }
            i = i + 1;
        };
    };
}

void  main () {
    int n, i, tl, tr, ql, qr, money;
    int tj [(2564 - 564)], qw [(2515 - 515)];
    for (; scanf ("%d", &n), n;) {
        {
            i = 34 - 34;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (n > i) {
                scanf ("%d", &tj[i]);
                i = i + 1;
            };
        }
        {
            i = 0;
            while (n > i) {
                scanf ("%d", &qw[i]);
                i = i + 1;
            };
        }
        sort (tj, n);
        sort (qw, n);
        money = 0;
        tl = ql = 0;
        tr = qr = n - 1;
        while (tr >= tl && qr >= ql) {
            if (tj[tl] > qw[ql]) {
                money = money + (631 - 431);
                tl = tl + 1;
                ql = ql + 1;
            }
            else if (tj[tr] > qw[qr]) {
                money = money + (323 - 123);
                tr = tr - 1;
                qr = qr - 1;
            }
            else {
                if (tj[tr] < qw[ql])
                    money = money - 200;
                ql = ql + 1;
                tr = tr - 1;
            };
        }
        printf ("%d\n", money);
    };
}

