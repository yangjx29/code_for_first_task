void  main () {
    int n, i, j, k, t, p = 0, m [500] = {0};
    char a [500], b [500] [5] = {'\0'};
    gets (a);
    getchar ();
    scanf ("%d", &n);
    t = 0;
    k = strlen (a);
    for (i = 0; i < k - n + 1; i = i + 1) {
        for (j = i; j < n + i; j = j + 1) {
            b[i][j - i] = a[j];
        }
        b[i][n] = '\0';
    }
    for (i = 0; i < k - n + 1; i = i + 1) {
        if (m[i] != 1) {
            m[i] = 0;
            for (j = i; j < k - n + 1; j++) {
                if (strcmp (b[i], b[j]) == 0) {
                    m[i] = m[i] + 1;
                    m[j] = 1;
                }
            }
            if (m[i] > t) {
                t = m[i];
            }
            if (m[i] == 1)
                p = p + 1;
        }
    }
    if (p == k - n + 1)
        ;
    else {
        printf ("%d\n", t);
        for (i = 0; i < k - n + 1; i = i + 1) {
            if (m[i] == t)
                printf ("%s\n", b[i]);
        }
    }
}

