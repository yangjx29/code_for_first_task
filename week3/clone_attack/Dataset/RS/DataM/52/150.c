void  main () {
    int *p;
    int fTlrEv [200];
    int n;
    int m;
    int i;
    scanf ("%d %d", &n, &m);
    {
        i = 0;
        while (n > i) {
            scanf ("%d", &fTlrEv[i]);
            i = i + 1;
        };
    }
    {
        i = n;
        while (n + n - m >= i) {
            *(fTlrEv + i) = *(fTlrEv + i - n);
            i = i + 1;
        };
    }
    p = fTlrEv + n - m;
    printf ("%d", *p);
    for (i = 0, p = p + 1; i < n - 1; i++, p++)
        printf (" %d", *p);
}

