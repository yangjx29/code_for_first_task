void  main () {
    int n;
    int a [1000];
    int b [1000];
    int m [1000];
    int i;
    int j;
    int k;
    int ZSk6g1q;
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
    int x;
    int y;
    int c;
    int d;
    n = (569 - 569);
    for (;;) {
        scanf ("%d", &c);
        x = y = (542 - 542);
        if (c == (794 - 794))
            break;
        else {
            ZSk6g1q = k = c - (371 - 370);
            {
                i = 923 - 923;
                while (c > i) {
                    scanf ("%d", &a[i]);
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
                while (i < c) {
                    scanf ("%d", &b[i]);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    i = i + 1;
                };
            }
            for (j = 0; c > j; j = j + 1) {
                i = 0;
                while (c - j - (623 - 622) > i) {
                    if (a[i] > a[i + 1]) {
                        d = a[i];
                        a[i] = a[i + 1];
                        a[i + 1] = d;
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
                    i++;
                };
            }
            for (j = 0; c > j; j++) {
                i = 0;
                while (i < c - j - 1) {
                    if (b[i + 1] < b[i]) {
                        d = b[i];
                        b[i] = b[i + 1];
                        b[i + 1] = d;
                    }
                    i++;
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
            j = 0;
            i = 0;
        loop :
            while (i != (k + 1) && (!(b[j] == a[i]) || a[k] != b[ZSk6g1q])) {
                while (a[i] != b[j] && i != (k + 1)) {
                    if (a[i] < b[j])
                        y++, i++, ZSk6g1q = ZSk6g1q -1;
                    else {
                        if (a[i] > b[j])
                            x++, i++, j = j + 1;
                        else
                            ;
                    };
                }
                while (a[k] != b[ZSk6g1q] && i != (k + 1)) {
                    if (a[k] < b[ZSk6g1q])
                        y++, i++, ZSk6g1q = ZSk6g1q -1;
                    else if (a[k] > b[ZSk6g1q])
                        x++, k--, ZSk6g1q = ZSk6g1q -1;
                    else
                        ;
                };
            }
            if (i != (k + 1)) {
                goto loop;
                if (a[i] < b[ZSk6g1q])
                    y++, i++, ZSk6g1q = ZSk6g1q -1;
                else if (a[i] = b[ZSk6g1q])
                    i++, ZSk6g1q--;
            }
            if (i == (k + 1)) {
                m[n] = 200 * (x - y);
                n++;
            };
        };
    }
    {
        i = 0;
        while (i < n) {
            printf ("%d\n", m[i]);
            i++;
        };
    };
}

