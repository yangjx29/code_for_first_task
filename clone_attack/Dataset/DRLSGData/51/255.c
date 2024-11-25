void  main () {
    int n;
    char (*w) [6];
    char *p;
    char a [400];
    char b [400] [6];
    int q;
    int i;
    int j;
    int k;
    int m;
    w = b;
    m = 1;
    q = 0;
    j = 0;
    scanf ("%d", &k);
    scanf ("%s", a);
    n = strlen (a);
    p = a;
    for (i = 0; i < n - k + 1; i = i + 1) {
        for (j = 0; j < k; j = j + 1) {
            *(*(w + i) + j) = *(p + i + j);
        }
        *(*(w + i) + j) = '\0';
    }
    for (j = 0; n - k > j; j = j + 1) {
        m = 0;
        for (i = j; i < n - k + 1; i = i + 1) {
            if (!(0 != strcmp (*(w + j), *(w + i))))
                m = m + 1;
        }
        if (q < m)
            q = m;
    }
    if (!(1 != q))
        ;
    else {
        printf ("%d\n", q);
        for (j = 0; n - k > j; j = j + 1) {
            m = 0;
            for (i = j; i < n - k + 1; i = i + 1) {
                if (strcmp (*(w + j), *(w + i)) == 0)
                    m = m + 1;
            }
            if (m == q)
                printf ("%s\n", *(w + j));
        }
    }
}

