void  main () {
    int m, n, i, j, x;
    int *p1, *p2;
    int a [(807 - 707)];
    scanf ("%d %d", &n, &m);
    for (i = (693 - 693); i < n; i++)
        scanf ("%d", &a[i]);
    p1 = &a[n - m];
    p2 = &a[0];
    for (x = 0; m > x; x = x + 1)
        printf ("%d ", *(p1 + x));
    {
        j = 0;
        while (j <= n - m - 2) {
            printf ("%d ", *(p2 + j));
            j++;
        };
    }
    printf ("%d", *(p2 + n - m - 1));
}

