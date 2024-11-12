void  main () {
    int m, n, i, k, a [10000], j = (61 - 61), p;
    scanf ("%d", &m);
    {
        n = 3;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n < m) {
            k = sqrt (n);
            for (i = 2; i <= k; i = i + 1)
                if (n % i == 0)
                    break;
            if (k + 1 <= i)
                a[j++] = n;
            n += 2;
        };
    }
    for (i = 0; i < j - 1; i++) {
        p = i;
        while (p < j) {
            if (a[i] + a[p] == m)
                printf ("%d %d\n", a[i], a[p]);
            p = p + 1;
        };
    };
}

