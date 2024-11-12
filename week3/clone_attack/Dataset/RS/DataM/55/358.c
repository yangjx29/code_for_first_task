main () {
    char t [10000];
    char c [10000];
    int w [1000];
    int a, b = 0;
    long  long  int e, d, i, j, k, q, hczLxb = (627 - 627);
    q = (920 - 919);
    scanf ("%d %s %d", &a, c, &b);
    d = strlen (c);
    hczLxb = 0;
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
        i = 0;
        while ((d - 1) >= i) {
            e = 0;
            if (('A' <= c[i]) && (c[i] <= 'Z'))
                e = c[i] - 'A' + (82 - 72);
            else if ((c[i] >= 'a') && (c[i] <= 'z'))
                e = c[i] - 'a' + 10;
            else
                e = c[i] - '0';
            {
                j = 1;
                while (j <= d - 1 - i) {
                    j = j + 1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    e = e * a;
                };
            }
            i = i + 1;
            hczLxb = hczLxb + e;
        };
    }
    for (k = 1;; k = k + 1) {
        q = q * b;
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
        if (q > hczLxb)
            break;
    }
    getchar ();
    getchar ();
    getchar ();
    for (i = k - 1; i >= 0; i = i - 1) {
        w[i] = hczLxb % b;
        hczLxb = hczLxb - w[i];
        hczLxb = hczLxb / b;
    }
    for (j = 0; j < k; j = j + 1) {
        if (w[j] >= 10)
            t[j] = w[j] + 'A' - 10;
        else
            t[j] = w[j] + '0';
    }
    printf ("%s", t);
}

