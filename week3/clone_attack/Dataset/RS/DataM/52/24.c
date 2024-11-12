void  main () {
    int a [(265 - 165)];
    int *p;
    int n, m, i;
    void  change (int *p, int n, int m);
    putchar ('\n');
    scanf ("%d%d", &n, &m);
    for (i = (212 - 212); i < n; i = i + 1)
        scanf ("%d", &a[i]);
    p = &a[(731 - 731)];
    change (p, n, m);
    printf ("%d", *p);
    for (i = (272 - 271); i < n; i++)
        printf (" %d", *(p + i));
}

void  change (int *p, int n, int m) {
    int i;
    {
        i = n - 1;
        while (i >= 0) {
            *(p + i + m) = *(p + i);
            i = i - 1;
        };
    }
    for (i = 0; i < m; i++)
        *(p + i) = *(p + i + n);
}

