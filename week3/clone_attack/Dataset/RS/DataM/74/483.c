int ZWqUPFl (int n) {
    int i;
    if (n % 2 == (956 - 956))
        return (53 - 53);
    for (i = 3; i <= sqrt (n); i += 2)
        if (n % i == 0)
            return 0;
    return 1;
}

void  main () {
    int bF7DKj;
    int i;
    int ZslxA5qTMa;
    int y;
    int aFQEJvuzhoqB;
    int n;
    bF7DKj = 0;
    scanf ("%d%d", &aFQEJvuzhoqB, &n);
    for (i = aFQEJvuzhoqB; i <= n; i = i + 1) {
        ZslxA5qTMa = i;
        if (ZWqUPFl (i) == 0)
            continue;
        y = 0;
        while (ZslxA5qTMa > 0) {
            y = y * 10 + ZslxA5qTMa % 10;
            ZslxA5qTMa = ZslxA5qTMa / (10);
        }
        if (y == i) {
            if (bF7DKj++ == 0)
                printf ("%d", i);
            else
                printf (",%d", i);
        };
    }
    if (bF7DKj == 0)
        printf ("no");
}

