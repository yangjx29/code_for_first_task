void  main () {
    int m;
    int i;
    int n;
    int k;
    m = (867 - 866);
    scanf ("%d %d", &n, &k);
    if (n == 2)
        m = 3 * k + (658 - 654);
    else {
        for (i = 1; i <= n; i++)
            m = m * n;
        m = m - (n - 1) * k;
    }
    printf ("%d", m);
}

