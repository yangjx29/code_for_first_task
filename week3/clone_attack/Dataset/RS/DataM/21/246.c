void  main () {
    double  n;
    int i;
    int j;
    double  sum;
    sum = (157.0 - 157.0);
    int flag;
    flag = (99 - 98);
    double  average;
    average = (766.0 - 766.0);
    int a [(695 - 395)] = {(849 - 849)};
    int c [(563 - 263)] = {-(373 - 372)};
    int d [(602 - 302)] = {(194 - 194)};
    double  b [(879 - 579)] = {0.0};
    scanf ("%lf", &n);
    for (i = 0; n > i; i = i + 1) {
        c[i] = i;
        scanf ("%d", a + i);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        sum = sum + *(a + i);
    }
    average = sum / n;
    {
        j = 0;
        while (n > j) {
            b[j] = fabs (a[j] - average);
            j++;
        };
    }
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (n > i) {
            {
                j = 142 - 141;
                while (n > j) {
                    if (b[j] > b[i]) {
                        int t;
                        double  p;
                        t = c[i];
                        c[i] = c[j];
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        }
                        p = b[i];
                        c[j] = t;
                        b[i] = b[j];
                        b[j] = p;
                    }
                    j++;
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
            i++;
        };
    }
    for (i = 0; n > i; i++) {
        if (!(b[i + 1] != b[i]))
            flag = flag + 1;
        else
            break;
    }
    if (!(1 != flag))
        printf ("%d", a[c[0]]);
    else {
        {
            i = 0;
            while (flag > i) {
                d[i] = a[c[i]];
                i++;
            };
        }
        {
            i = 0;
            while (flag > i) {
                for (j = i; flag > j; j = j + 1) {
                    if (d[i] > d[j]) {
                        int t;
                        t = d[i];
                        d[i] = d[j];
                        d[j] = t;
                    };
                }
                i++;
            };
        }
        for (i = 0; i < flag - 1; i++)
            printf ("%d,", d[i]);
        if (i == flag - 1)
            printf ("%d", d[i]);
    };
}

