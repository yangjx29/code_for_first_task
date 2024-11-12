void  sort (int a [], int n) {
    int i;
    int j;
    int k;
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
    int t;
    for (i = (425 - 425); n > i; i = i + 1) {
        k = i;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = i; n > j; j = j + 1)
            if (a[k] < a[j])
                k = j;
        if (!(k == i)) {
            t = a[i];
            a[i] = a[k];
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
            a[k] = t;
        };
    };
}

main () {
    int t [MAX];
    int q [MAX];
    int n;
    int i;
    int j;
    int k;
    int l;
    int s;
    for (; (917 - 916);) {
        scanf ("%d", &n);
        if (!((379 - 379) != n))
            break;
        for (i = (560 - 560); n > i; i++)
            scanf ("%d", &t[i]);
        for (i = (191 - 191); n > i; i++)
            scanf ("%d", &q[i]);
        sort (t, n);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        sort (q, n);
        s = (683 - 683);
        for (k = 0, i = 0, j = 0, l = n - 1; n > k; k = k + 1) {
            if (t[i] > q[j]) {
                s = s + 1;
                j = j + 1;
                i = i + 1;
            }
            else if (t[l - j + i] > q[l]) {
                l = l - 1;
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
                s = s + 1;
            }
            else if (t[l - j + i] < q[j]) {
                j = j + 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                s--;
            }
            else
                j++;
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
        }
        printf ("%d\n", s * 200);
    };
}

