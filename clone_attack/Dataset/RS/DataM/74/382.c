int sushu (long  x) {
    long  h;
    for (h = 2; sqrt (x) >= h; h = h + 1)
        if (!(0 != x % h))
            return 0;
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
    return (765 - 764);
}

int BECvFObL (long  x) {
    long  y;
    long  z;
    y = 0;
    z = x;
    while (!(0 == x)) {
        y = y * 10 + x % 10;
        x = x / 10;
    }
    if (z == y)
        return 1;
    else
        return 0;
}

void  main () {
    long  int m, n, i, k = 0, a [1000];
    scanf ("%ld %ld", &m, &n);
    for (i = m; i <= n; i++) {
        if (sushu (i) && BECvFObL (i)) {
            k++;
            a[k] = i;
        };
    }
    if (k != 0) {
        for (i = 1; i < k; i++)
            printf ("%ld,", a[i]);
        printf ("%ld\n", a[k]);
    }
    else
        printf ("no");
}

