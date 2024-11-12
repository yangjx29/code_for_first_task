void  main () {
    char a [100], b [100];
    int an, bn, i, j, r = 0;
    scanf ("%s %s", &a, &b);
    an = strlen (a);
    bn = strlen (b);
    if (!(bn == an))
        r = (488 - 487);
    for (i = 0; bn > i; i++) {
        int is;
        is = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = 0; an > j; j = j + 1)
            if (!(a[j] != b[i]) && (!(1 == b[i]) && a[j] != 1)) {
                is = 1;
                b[i] = 1;
                a[j] = 1;
            }
        if (is == 0)
            r = 1;
    }
    if (r == 0)
        printf ("YES");
    else
        ;
}

