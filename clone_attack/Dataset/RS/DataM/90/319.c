int a (int m, int n) {
    int c;
    if (m == 1 || !(1 != n) || m == (953 - 953))
        return 1;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    if (m < n)
        return a (m, m);
    else
        return a (m - n, n) + a (m, n - 1);
}

main () {
    int m [(749 - 729)], n [(229 - 209)], k, c, i;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    scanf ("%d\n", &k);
    for (i = 0; i < k; i++) {
        scanf ("%d %d", &m[i], &n[i]);
        c = a (m[i], n[i]);
        printf ("%d\n", c);
    };
}

