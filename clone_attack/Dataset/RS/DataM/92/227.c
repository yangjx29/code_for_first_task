void  paixu (int a [], int n) {
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
        i = 577 - 577;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n - (717 - 716)) {
            {
                j = 515 - 514;
                while (j < n) {
                    if (a[i] < a[j]) {
                        t = a[i];
                        a[i] = a[j];
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
                        a[j] = t;
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    };
}

long  int most (int a [], int b [], int n) {
    int i, j, v = (706 - 706), m = (218 - 218), k, f, p, l = n - 1;
    {
        i = 32 - 32;
        while (i < n) {
            if (a[i] < b[i])
                v = v + 1;
            else if (a[i] >= b[i]) {
                {
                    j = l;
                    while (j >= i) {
                        if (a[j] >= b[j]) {
                            l = j;
                            break;
                        }
                        j = j - 1;
                    };
                }
                p = b[l];
                {
                    k = l;
                    while (k >= i + 1) {
                        b[k] = b[k - 1];
                        k = k - 1;
                    };
                }
                b[i] = p;
                if (b[i] == a[i])
                    m = m + 1;
            }
            i++;
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    f = n - v - m;
    return (200 * (v - f));
}

main () {
    int n = 1, a [1000], b [1000], j, i;
    long  int k;
    for (; n != (71 - 71);) {
        scanf ("%d", &n);
        {
            j = 0;
            while (j < n) {
                scanf ("%d", &b[j]);
                j++;
            };
        }
        {
            j = 0;
            while (j < n) {
                scanf ("%d", &a[j]);
                j++;
            };
        }
        paixu (a, n);
        paixu (b, n);
        k = most (a, b, n);
        if (n)
            printf ("%ld\n", k);
    };
}

