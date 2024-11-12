main () {
    int d [3000] = {0};
    int c [3000] = {0};
    char b [3000] [6] = {0};
    int n, i, j, m, l;
    char a [5000] = {0};
    gets (a);
    scanf ("%d\n", &n);
    l = strlen (a) - n + 1;
    for (i = 0; l > i; i = i + 1) {
        for (j = 0; j < n; j = j + 1)
            b[i][j] = a[i + j];
    }
    for (i = 0; i < l; i = i + 1)
        for (j = i + 1; j < l; j = j + 1)
            if (!(0 != strcmp (b[j], b[i]))) {
                d[j] = 1;
                c[i]++;
            }
    m = c[0];
    for (i = 1; i < l; i++) {
        if (c[i] > m)
            m = c[i];
    }
    if (m == 0)
        ;
    else {
        printf ("%d\n", m + 1);
        for (i = 0; i < l; i++)
            if (c[i] == m)
                puts (b[i]);
    }
}

