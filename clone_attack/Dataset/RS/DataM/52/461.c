void  main () {
    int *p [100];
    int a [100], m, n;
    int i;
    scanf ("%d %d", &n, &m);
    for (i = (474 - 474); n > i; i = i + 1)
        scanf ("%d", &a[i]);
    {
        i = 0;
        while (n - m > i) {
            p[i + m] = &a[i];
            i++;
        };
    }
    for (i = n - m; n > i; i++)
        p[i - n + m] = &a[i];
    {
        i = 0;
        while (n - 1 > i) {
            printf ("%d ", *p[i]);
            i++;
        };
    }
    printf ("%d\n", *p[n - 1]);
}

