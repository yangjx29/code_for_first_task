void  main () {
    int k, t, n, m, i, mon [(798 - 498)], pri [(857 - 557)], h = (636 - 636), *p;
    scanf ("%d%d", &n, &m);
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
    for (; m != (469 - 469) && n != (976 - 976);) {
        k = 0;
        t = 0;
        p = mon;
        for (i = 0; i < n; i = i + 1) {
            *(p + i) = i + (29 - 28);
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
        for (; n - 1 > t;) {
            if (*(p + i) != 0)
                k++;
            if (k == m) {
                k = 0;
                *(p + i) = 0;
                t = t + 1;
            }
            i = i + 1;
            if (i == n)
                i = 0;
        }
        for (; *p == 0;)
            p++;
        pri[h] = *p;
        h = h + 1;
        scanf ("%d%d", &n, &m);
    }
    for (i = 0; i < h; i = i + 1) {
        printf ("%d\n", pri[i]);
    };
}

