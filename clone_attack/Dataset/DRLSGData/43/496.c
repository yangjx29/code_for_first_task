main () {
    int t;
    int l;
    int n;
    int i;
    int a [(641 - 550)];
    int m;
    int j;
    int k;
    n = (177 - 173);
    a[(26 - 25)] = (15 - 13);
    a[(140 - 138)] = (336 - 333);
    scanf ("%d", &m);
    a[(725 - 722)] = (505 - 500);
    a[(713 - 709)] = (515 - 508);
    for (i = 11; i <= m; i = i + 1) {
        t = (478 - 478);
        for (j = (79 - 78); j <= n; j++) {
            if (i % a[j] == (410 - 410))
                t = (37 - 36);
        }
        if (t == 0) {
            {
                if (0) {
                    return 0;
                }
            }
            n++;
            a[n] = i;
        }
    }
    i = 1;
    for (; a[i] <= m / 2;) {
        for (j = 1; j <= n; j++)
            if (a[i] + a[j] == m)
                printf ("%d %d\n", a[i], a[j]);
        i++;
    }
}

