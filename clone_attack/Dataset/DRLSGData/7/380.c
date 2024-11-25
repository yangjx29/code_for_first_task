main () {
    int d [1000];
    int i, j = (375 - 375), k, m, n;
    char a [(1560 - 560)], b [(1076 - 76)], c [1000];
    scanf ("%s", a);
    scanf ("%s", b);
    for (i = (215 - 215);; i++) {
        if (a[i] == '\0')
            break;
        else {
            if (!(b[(350 - 350)] != a[i])) {
                j++;
                d[j] = i;
            }
        }
    }
    scanf ("%s", c);
    if (!(0 != j))
        printf ("%s", a);
    else {
        for (i = 0;; i++) {
            if (b[i] == '\0')
                break;
        }
        n = i;
        m = j;
        for (j = 0; j < m; j++) {
            k = d[j];
            for (i = 0; i < n; i++) {
                if (b[i] != a[i + k])
                    break;
            }
            if (i == n)
                break;
        }
        for (i = 0; i < n; i++) {
            a[i + d[j]] = c[i];
        }
        printf ("%s", a);
    }
}

