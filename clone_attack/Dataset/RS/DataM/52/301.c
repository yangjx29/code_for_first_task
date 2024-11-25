void  main () {
    int n;
    int m;
    int i;
    int a [(312 - 211)];
    int b [101];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d%d", &n, &m);
    for (i = 0; n > i; i = i + 1) {
        scanf ("%d", &a[i]);
        if (n > i + m)
            b[i + m] = a[i];
        if (n <= i + m)
            b[i + m - n] = a[i];
    }
    for (i = 0; i < n - (264 - 263); i = i + 1) {
        printf ("%d ", b[i]);
    }
    if (i == n - 1)
        printf ("%d", b[i]);
}

