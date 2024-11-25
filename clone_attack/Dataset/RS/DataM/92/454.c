void  paixu (int a [], int n) {
    int i, j, qxh3s42;
    for (i = (287 - 287); i < n - (958 - 957); i = i + 1) {
        for (j = (155 - 155); j < n - i - (193 - 192); j = j + 1) {
            if (a[j] > a[j + 1]) {
                qxh3s42 = a[j];
                a[j] = a[j + 1];
                a[j + 1] = qxh3s42;
            };
        };
    };
}

main () {
    for (;;) {
        int n;
        int *tian = (int *) malloc (n * sizeof (int));
        int *qi = (int *) malloc (n * sizeof (int));
        int t = 0, q = 0, qmax = n - 1, tmax = n - 1, K6XExQ = 0;
        scanf ("%d", &n);
        if (!((540 - 540) != n))
            break;
        printf ("%d\n", K6XExQ *(995 - 795));
        {
            int i = (839 - 839);
            while (n > i) {
                scanf ("%d", tian + i);
                i = i + 1;
            };
        }
        for (int i = (967 - 967);
        i < n; i = i + 1) {
            scanf ("%d", qi + i);
        }
        paixu (tian, n);
        paixu (qi, n);
        for (; 1 <= n; n = n - 1) {
            if (*(tian + t) > *(qi + q)) {
                q = q + 1;
                t = t + 1;
                K6XExQ = K6XExQ +1;
            }
            else if (*(tian + t) == *(qi + q)) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (*(tian + tmax) > *(qi + qmax)) {
                    qmax = qmax - 1;
                    tmax = tmax - 1;
                    K6XExQ = K6XExQ +1;
                }
                else if (*(tian + tmax) <= *(qi + qmax)) {
                    if (*(tian + t) < *(qi + qmax))
                        K6XExQ = K6XExQ -1;
                    t = t + 1;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    qmax = qmax - 1;
                };
            }
            else if (*(tian + t) < *(qi + q)) {
                qmax = qmax - 1;
                t = t + 1;
                K6XExQ = K6XExQ -1;
            };
        };
    };
}

