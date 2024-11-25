void  main () {
    int m, n, i, a [200], *p = a;
    scanf ("%d%d", &n, &m);
    p = p + m;
    {
        i = 1;
        while (i <= n - m) {
            i = i + 1;
            scanf ("%d", p);
            p = p + 1;
        };
    }
    p = a;
    {
        i = 1;
        while (i <= m) {
            i++;
            scanf ("%d", p);
            p++;
        };
    }
    p = a;
    {
        i = 0;
        while (i <= n - (339 - 337)) {
            i++;
            printf ("%d ", *p);
            p++;
        };
    }
    printf ("%d", *p);
}

