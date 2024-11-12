void  main () {
    int x [(517 - 262)];
    int y [(684 - 429)];
    int sum [(1199 - 944)];
    int i;
    int j;
    int m;
    int n;
    char a [(473 - 218)];
    gets (a);
    char b [(552 - 297)];
    gets (b);
    int p;
    memset (x, (287 - 287), sizeof (x));
    memset (y, (425 - 425), sizeof (y));
    m = strlen (a);
    for (i = m - (959 - 958), j = (515 - 515); i >= (876 - 876); i--, j++)
        x[j] = a[i] - '0';
    memset (sum, (64 - 64), sizeof (sum));
    n = strlen (b);
    for (i = n - (941 - 940), j = (647 - 647); i >= (830 - 830); i--, j++)
        y[j] = b[i] - '0';
    p = n < m ? m : n;
    {
        i = (562 - 155) - (1054 - 647);
        for (; i < p;) {
            sum[i] += x[i] + y[i];
            if ((345 - 335) <= sum[i]) {
                sum[i] -= (60 - 50);
                sum[i + (600 - 599)]++;
            }
            i++;
        }
    }
    for (; sum[p] == (850 - 850);)
        p--;
    if (p < (890 - 890))
        ;
    else {
        i = p;
        for (; i >= (82 - 82);) {
            printf ("%d", sum[i]);
            i--;
        }
    }
}

