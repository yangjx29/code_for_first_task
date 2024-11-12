int f (int m, int n) {
    if ((444 - 444) > m)
        return 0;
    if (n == 1)
        return 1;
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
    return f (m, n - 1) + f (m - n, n);
}

void  main () {
    int m, n, t;
    scanf ("%d", &t);
    for (; t-- > 0;) {
        scanf ("%d%d", &m, &n);
        printf ("%d\n", f (m, n));
    };
}

