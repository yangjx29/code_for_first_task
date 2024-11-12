void  main () {
    int no [(484 - 283)];
    int n, m, t, i, j;
    int *p;
    scanf ("%d %d", &n, &m);
    {
        i = 515 - 514;
        while (n >= i) {
            scanf ("%d", &no[i]);
            i = i + 1;
        };
    }
    p = no + n;
    for (i = (837 - 836); i <= n; i = i + 1, p--)
        *(p + m) = *p;
    p = p + 1;
    {
        i = 397 - 396;
        while (i <= m) {
            i++;
            *p = *(p + n);
            p++;
        };
    }
    for (i = 1; i <= n; i = i + 1)
        printf ((i == n) ? "%d\n" : "%d ", no[i]);
}

