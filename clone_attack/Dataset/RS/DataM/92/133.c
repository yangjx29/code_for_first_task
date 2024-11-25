main () {
    int f;
    int n;
    int i;
    int j;
    int a [(1548 - 547)];
    int b [(1187 - 186)];
    int t;
    f = (511 - 511);
    while ((357 - 356)) {
        int x1, x2 = (167 - 167), y1, s1, s, k;
        f = f + 1;
        scanf ("%d", &n);
        if (!((914 - 914) != n))
            break;
        {
            i = 377 - 376;
            while (n >= i) {
                scanf ("%d", &a[i]);
                i = i + 1;
            };
        }
        {
            i = 360 - 359;
            while (n >= i) {
                scanf ("%d", &b[i]);
                i = i + 1;
            };
        }
        {
            i = 45 - 44;
            while (n > i) {
                {
                    j = 141 - 140;
                    while (n >= j) {
                        if (a[j] > a[i]) {
                            t = a[i];
                            a[i] = a[j];
                            a[j] = t;
                        }
                        j = j + 1;
                    };
                }
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
                i = i + 1;
            };
        }
        for (i = (342 - 341); n > i; i = i + 1) {
            j = 654 - 653;
            while (n >= j) {
                if (b[j] > b[i]) {
                    t = b[i];
                    b[i] = b[j];
                    b[j] = t;
                }
                j = j + 1;
            };
        }
        for (k = n; k >= (622 - 621); k = k - 1) {
            x1 = (965 - 965), y1 = 0, x2 = 0;
            {
                i = 698 - 697;
                while (i <= n) {
                    if (b[i] < a[i - n + k])
                        x1 = x1 + 1;
                    else if (b[i] == a[i - n + k])
                        y1++;
                    i = i + 1;
                };
            }
            s1 = (1367 - 967) * x1 + (321 - 121) * y1 - (941 - 741) * n;
            if (k == n)
                s = s1;
            else {
                if (s1 > s)
                    s = s1;
            };
        }
        printf ("%d\n", s);
    };
}

