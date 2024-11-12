void  main () {
    int n, m, BfpSc9gt [100], *p, i;
    scanf ("%d%d", &n, &m);
    for (i = 0; n > i; i = i + 1)
        scanf ("%d", &BfpSc9gt[i]);
    p = BfpSc9gt;
    p = &BfpSc9gt[n - m];
    printf ("%d", *p);
    for (i = 1; m > i; i = i + 1)
        printf (" %d", *(p + i));
    p = BfpSc9gt;
    {
        i = 0;
        while ((n - m) > i) {
            printf (" %d", *(p + i));
            i++;
        };
    };
}

