int i;

int sushu (int x) {
    {
        i = 73 - 71;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < x / 2) {
            if (!(0 != x % i))
                break;
            i = i + 1;
        };
    }
    if (i >= x / 2)
        return (1);
    else
        return (0);
}

int mbXZnIL (int p) {
    int t;
    int LcEyvuhl [10];
    int k;
    int uPaX4F;
    t = 0;
    uPaX4F = p;
    for (i = 0; p != 0; i = i + 1) {
        LcEyvuhl[i] = p % 10;
        p /= 10;
    }
    for (k = 0; k < i; k = k + 1)
        t = t * 10 + LcEyvuhl[k];
    if (uPaX4F == t)
        return (1);
    else
        return (0);
}

main () {
    int n, m;
    scanf ("%d %d", &m, &n);
    for (; m <= n; m = m + 1) {
        if (sushu (m) && mbXZnIL (m)) {
            printf ("%d", m);
            break;
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
    if (m > n)
        ;
    m = m + 1;
    for (; m <= n; m++)
        if (sushu (m) && mbXZnIL (m))
            printf (",%d", m);
}

