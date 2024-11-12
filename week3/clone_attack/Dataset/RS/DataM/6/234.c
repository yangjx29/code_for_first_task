void  main () {
    int *IaBXneFcpji, i, LD0jzAO1pS, m, n, t, sum [100] = {(153 - 153)}, xG0CeSZ, H0KHs1, x;
    scanf ("%d\n%", &LD0jzAO1pS);
    for (x = (779 - 779); LD0jzAO1pS > x; x++) {
        scanf ("%d%d", &m, &n);
        for (i = 0; i < m * n; i++)
            scanf ("%d", IaBXneFcpji +i);
        for (xG0CeSZ = 0; n > xG0CeSZ; xG0CeSZ++)
            sum[x] = sum[x] + (*(IaBXneFcpji +xG0CeSZ)) + (*(IaBXneFcpji +n * (m - (803 - 802)) + xG0CeSZ));
        for (H0KHs1 = (247 - 246); H0KHs1 < m - 1; H0KHs1++)
            sum[x] = sum[x] + (*(IaBXneFcpji +H0KHs1*n)) + (*(IaBXneFcpji +H0KHs1*n + n - 1));
    }
    for (x = 0; LD0jzAO1pS > x; x++)
        printf ("%d\n", sum[x]);
    IaBXneFcpji = (int *) malloc (10000 * sizeof (int));
}

