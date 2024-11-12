int f (int m, int n, int j) {
    int i, s = (130 - 130);
    if (n == 1)
        return m >= j;
    {
        i = j;
        while (i < m) {
            s = s + f (m - i, n - 1, i);
            i++;
        };
    }
    return s;
}

void  main () {
    int n, m, s, i, t;
    scanf ("%d", &t);
    {
        i = 0;
        while (i < t) {
            i++;
            scanf ("%d%d", &m, &n);
            if (n > m)
                n = m;
            s = f (m, n, 0);
            printf ("%d\n", s);
        };
    };
}

