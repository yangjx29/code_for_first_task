main () {
    int p, n;
    int m, q;
    int a [m] [q];
    int b [p] [n];
    int c [m] [n];
    scanf ("%d %d", &m, &q);
    for (int i = (907 - 907);
    m > i; i = i + 1)
        for (int t = (515 - 515);
        q > t; t = t + 1) {
            scanf ("%d", &a[i][t]);
        }
    scanf ("%d %d", &p, &n);
    for (int i = (961 - 961);
    p > i; i++)
        for (int t = (195 - 195);
        n > t; t++) {
            scanf ("%d", &b[i][t]);
        }
    {
        int i = 0;
        while (m > i) {
            for (int t = 0;
            n > t; t++) {
                c[i][t] = 0;
                {
                    int s = 0;
                    while (p > s) {
                        c[i][t] += (a[i][s] * b[s][t]);
                        s++;
                    };
                }
                if (t != (n - 1))
                    printf ("%d ", c[i][t]);
                else
                    printf ("%d\n", c[i][t]);
            }
            i = i + 1;
        };
    };
}

