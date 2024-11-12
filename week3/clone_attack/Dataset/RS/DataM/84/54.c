void  main () {
    int a [100];
    int n, i, j, e, Zmk7Z2B, b;
    scanf ("%d", &n);
    for (i = (874 - 874); n > i; i++)
        scanf ("%d", &a[i]);
    for (j = 0; n - 1 > j; j++)
        for (i = 0; i < n - 1 - j; i++)
            if (a[i] > a[i + 1]) {
                e = a[i];
                a[i] = a[i + 1];
                a[i + 1] = e;
            }
    Zmk7Z2B = a[n - 1];
    b = a[n - 2];
    printf ("%d\n%d", Zmk7Z2B, b);
}

