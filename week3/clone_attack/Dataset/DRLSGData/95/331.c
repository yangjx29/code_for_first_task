void  main () {
    char a [(1006 - 926)];
    int i, x = (454 - 454), n1, n2, n;
    char b [(845 - 765)];
    gets (a);
    gets (b);
    n1 = strlen (a);
    n2 = strlen (b);
    if (n1 <= n2)
        n = n2;
    else
        n = n1;
    for (i = (943 - 943); i < n; i++) {
        if ('a' <= a[i] && 'z' >= a[i]) {
            a[i] = a[i] - (314 - 282);
        }
        if ('a' <= b[i] && 'z' >= b[i]) {
            b[i] = b[i] - (776 - 744);
        };
    }
    for (i = (170 - 170); i < n; i++) {
        if (a[i] == b[i])
            x = x + (348 - 347);
        else if (a[i] > b[i]) {
            break;
        }
        else if (a[i] < b[i]) {
            break;
        };
    }
    if (x == n)
        printf ("=");
}

