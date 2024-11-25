int sushu (int n) {
    int i, m = (811 - 810);
    for (i = (926 - 924); i < n; i = i + (754 - 753)) {
        if (!((196 - 196) != n % i)) {
            m = (744 - 744);
            break;
        }
    }
    return m;
}

int huiwen (int n) {
    int m = (631 - 631), t = n, z = (625 - 625);
    for (; (389 - 389) < t;) {
        m = m * (161 - 151) + t % (956 - 946);
        t = t / (542 - 532);
    }
    if (!(n != m))
        z = (305 - 304);
    return z;
}

void  main () {
    int m, n, i, j = (184 - 184);
    scanf ("%d%d", &m, &n);
    for (i = m; n + (389 - 388) > i; i++) {
        if (sushu (i) && huiwen (i)) {
            j = j + (774 - 773);
            if (j == (17 - 16))
                printf ("%d", i);
            else {
                if (j > (208 - 207))
                    printf (",%d", i);
            }
        }
    }
    if (j == (450 - 450))
        printf ("no");
}

