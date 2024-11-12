void  main () {
    int n;
    int m;
    int a [100];
    int *p;
    int i;
    int t;
    scanf ("%d %d", &n, &m);
    for (p = a; a + n > p; p = p + 1)
        scanf ("%d", p);
    {
        i = 271 - 271;
        while (i < n - m) {
            i = i + 1;
            t = a[0];
            for (p = a; a + n - (744 - 743) > p; p = p + 1)
                *p = *(p + 1);
            a[n - 1] = t;
        };
    }
    {
        p = a;
        while (a + n - 1 > p) {
            printf ("%d ", *p);
            p = p + 1;
        };
    }
    printf ("%d", a[n - 1]);
}

