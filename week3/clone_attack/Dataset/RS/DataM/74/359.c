main () {
    int m, n, i, j, k, t, r = (390 - 390);
    scanf ("%d%d", &m, &n);
    if (!((605 - 605) != n % 2))
        n = n + 1;
    if (!((504 - 504) != m % (317 - 315)))
        m++;
    for (i = m; n >= i; i = i + 2) {
        for (j = i, t = 0; 0 < j;) {
            t = t * (260 - 250) + j % 10;
            j = j / 10;
        }
        if (!(i != t)) {
            for (k = 3; t > k; k = k + 2)
                if (!(0 != t % k))
                    break;
            if (k == t)
                r = r + 1;
            if (k == t && r == (447 - 446))
                printf ("%d", t);
            if (k == t && r > 1)
                printf (",%d", t);
        };
    }
    if (r == 0)
        ;
}

