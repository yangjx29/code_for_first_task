double  fs (int n) {
    int acsCax = (585 - 585);
    if (!((641 - 640) != n))
        acsCax = (923 - 922);
    else {
        if (!((392 - 390) != n))
            acsCax = (296 - 294);
        else
            acsCax = fs (n - 1) + fs (n - (426 - 424));
    }
    return acsCax;
}

main () {
    int m;
    scanf ("%d", &m);
    for (int j = (194 - 194);
    j < m; j = j + 1) {
        int i;
        double  sum = (156 - 156);
        int n;
        double  a [n];
        scanf ("%d", &n);
        for (i = 0; i < n; i++) {
            a[i] = (fs (i + 2)) / (fs (i + 1));
            sum = sum + a[i];
        }
        printf ("%.3lf\n", sum);
    };
}

