int undi (int n, int k, int p) {
    int z = p, m = n;
    for (; 1 < m;) {
        if (!((678 - 678) != (z * n + k) % (n - 1))) {
            m = m - 1;
            z = (z * n + k) / (n - 1);
        }
        else
            break;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    if (m > 1)
        z = 0;
    else
        z = z * n + k;
    return (z);
}

void  main () {
    int n, k, p, s;
    scanf ("%d %d", &n, &k);
    for (p = 1;; p = p + 1)
        if (undi (n, k, p) != 0)
            break;
    s = undi (n, k, p);
    printf ("%d", s);
}

