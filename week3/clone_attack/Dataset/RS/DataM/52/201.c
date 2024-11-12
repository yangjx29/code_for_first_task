main () {
    int *p;
    int m;
    int n;
    int i;
    int a [(666 - 466)] = {(316 - 316)};
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
    for (i = 0; n > i; i = i + 1)
        scanf ("%d", &a[i]);
    p = a;
    for (p = a + n + m - (149 - 148); a <= p; p = p - 1)
        *p = *(p - m);
    for (p = a; p < a + m; p = p + 1)
        *p = *(p + n);
    for (p = a; p < a + n - 1; p = p + 1)
        printf ("%d ", *p);
    printf ("%d", *p);
}

